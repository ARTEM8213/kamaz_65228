class kamaz_65228 extends CarScript
{
	protected ref UniversalTemperatureSource m_UTSource;
	protected ref UniversalTemperatureSourceSettings m_UTSSettings;
	protected ref UniversalTemperatureSourceLambdaEngine m_UTSLEngine;

	void kamaz_65228()
	{
		m_dmgContactCoef		= 0.070;

		m_EngineStartOK			= "kamaz_65228_Engine_start_SoundSet";
		m_EngineStartBattery	= "Hatchback_02_engine_failed_start_battery_SoundSet";
		m_EngineStartPlug		= "Hatchback_02_engine_failed_start_sparkplugs_SoundSet";
		m_EngineStartFuel		= "Hatchback_02_engine_failed_start_fuel_SoundSet";
		m_EngineStopFuel		= "kamaz_65228_Engine_ext_stop_SoundSet";
		
		m_CarDoorOpenSound 		= "Truck_01_door_open_SoundSet";
		m_CarDoorCloseSound 	= "Truck_01_door_close_SoundSet";
		
		m_CarHornShortSoundName = "Truck_01_Horn_Short_SoundSet";
		m_CarHornLongSoundName	= "Truck_01_Horn_SoundSet";
		
		SetEnginePos("0 0.7 1.4");
	}

	override void EEInit()
	{		
		super.EEInit();
		
		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
 			m_UTSSettings 					= new UniversalTemperatureSourceSettings();
			m_UTSSettings.m_ManualUpdate 	= true;
			m_UTSSettings.m_TemperatureMin	= 0;
			m_UTSSettings.m_TemperatureMax	= 30;
			m_UTSSettings.m_RangeFull		= 0.5;
			m_UTSSettings.m_RangeMax		= 2;
			m_UTSSettings.m_TemperatureCap	= 25;
			
			m_UTSLEngine					= new UniversalTemperatureSourceLambdaEngine();
			m_UTSource						= new UniversalTemperatureSource(this, m_UTSSettings, m_UTSLEngine);
		}		
	}
	
	override void OnEngineStart()
	{
		super.OnEngineStart();

		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
			m_UTSource.SetDefferedActive(true, 20.0);
		}
	}
	
	override void OnEngineStop()
	{
		super.OnEngineStop();

		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
			m_UTSource.SetDefferedActive(false, 10.0);
		}
	}
	
	override void EOnPostSimulate(IEntity other, float timeSlice)
	{
		super.EOnPostSimulate(other, timeSlice);
		
		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
			if (m_UTSource.IsActive())
			{
				m_UTSource.Update(m_UTSSettings, m_UTSLEngine);
			}
		}
	}

	override float GetActionDistanceCoolant()
	{
		return 6.0;
	}
	
	override float GetActionDistanceFuel()
	{
		return 4.0;
	}

	override float GetActionDistanceOil()
	{
		return 4.0;
	}
	
	override float GetActionDistanceBrakes()
	{
		return 4.0;
	}
	
	override int GetAnimInstance()
	{
		return VehicleAnimInstances.SEDAN;
	}

	override int GetSeatAnimationType( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			return DayZPlayerConstants.VEHICLESEAT_DRIVER;
		case 1:
			return DayZPlayerConstants.VEHICLESEAT_CODRIVER;
		case 2:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 3:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 4:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 5:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 6:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 7:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 8:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 9:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 10:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 11:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 12:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		}

		return 0;
	}
	
	override CarLightBase CreateFrontLight()
	{
		return CarLightBase.Cast( ScriptedLightBase.CreateLight(kamaz_65228FrontLight) );
	}
	
	override CarRearLightBase CreateRearLight()
	{
		return CarRearLightBase.Cast( ScriptedLightBase.CreateLight(kamaz_65228RearLight) );
	}
	
	override bool CanReleaseAttachment( EntityAI attachment )
	{
		if( !super.CanReleaseAttachment( attachment ) )
			return false;
		
		string attType = attachment.GetType();
		
		if ( EngineIsOn() || GetCarDoorsState("kamaz_65228_doors_hood") == CarDoorState.DOORS_CLOSED )
		{
			if ( attType == "CarRadiator" || attType == "TruckBattery" || attType == "SparkPlug" )
				return false;
		}

		return true;
	}
	
	override bool CanDisplayAttachmentCategory( string category_name )
	{
		//super
		if ( !super.CanDisplayAttachmentCategory( category_name ) )
		return false;
		//
	
		category_name.ToLower();
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		
		if ( category_name.Contains( "engine" ) )
		{
			if ( GetCarDoorsState("kamaz_65228_doors_hood") == CarDoorState.DOORS_CLOSED )
				return false;
		}
				
		return true;
	}
		
	override int GetCarDoorsState(string slotType)
	{
		CarDoor carDoor;

		Class.CastTo(carDoor, FindAttachmentBySlotName(slotType));
		if (!carDoor)
		{
			return CarDoorState.DOORS_MISSING;
		}
	
		switch (slotType)
		{
		case "kamaz_65228_doors_driver":
			return TranslateAnimationPhaseToCarDoorState("DoorsDriver");
			
		case "kamaz_65228_doors_codriver":
			return TranslateAnimationPhaseToCarDoorState("DoorsCoDriver");
							
		case "kamaz_65228_doors_hood":
			return TranslateAnimationPhaseToCarDoorState("DoorsHood");
			
		case "kamaz_65228_doors_trunk":
			return TranslateAnimationPhaseToCarDoorState("DoorsTrunk");
		}

		return CarDoorState.DOORS_MISSING;
	}
	

	override bool CrewCanGetThrough( int posIdx )
	{
		switch( posIdx )
		{
			case 0:
				if ( GetCarDoorsState( "kamaz_65228_doors_driver" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;
			
			case 1:
				if ( GetCarDoorsState( "kamaz_65228_doors_codriver" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;
			
			case 2:
				return true;
			break;
				
			case 3:
				return true;
			break;

			case 4:
				return true;
			break;
				
			case 5:
				return true;
			break;

			case 6:
				return true;
			break;
				
			case 7:
				return true;
			break;

			case 8:
				return true;
			break;
				
			case 9:
				return true;
			break;
			
			case 10:
				return true;
			break;

			case 11:
				return true;
			break;
				
			case 12:
				return true;
			break;
			
		}

		return false;
	}

    override string GetDoorSelectionNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "doors_driver";
		break;
		case 1:
			return "doors_codriver";
		break;
		case 2:
			return "doors_cargo1";
		break;
		case 3:
			return "doors_cargo1";
		break;
		case 4:
			return "doors_cargo1";
		break;
		case 5:
			return "doors_cargo1";
		break;
		case 6:
			return "doors_cargo1";
		break;
		case 7:
			return "doors_cargo1";
		break;
		case 8:
			return "doors_cargo1";
		break;
		case 9:
			return "doors_cargo1";
		break;
		case 10:
			return "doors_cargo1";
		break;
		case 11:
			return "doors_cargo1";
		break;
		case 12:
			return "doors_cargo1";
		break;
		}
		
		return super.GetDoorSelectionNameFromSeatPos(posIdx);
	}

	override string GetDoorInvSlotNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "kamaz_65228_doors_driver";
		break;
		case 1:
			return "kamaz_65228_doors_codriver";
		break;
		case 2:
			return "kamaz_65228_doors_cargo1";
		break;
		case 3:
			return "kamaz_65228_doors_cargo1";
		break;
		case 4:
			return "kamaz_65228_doors_cargo1";
		break;
		case 5:
			return "kamaz_65228_doors_cargo1";
		break;
		case 6:
			return "kamaz_65228_doors_cargo1";
		break;
		case 7:
			return "kamaz_65228_doors_cargo1";
		break;
		case 8:
			return "kamaz_65228_doors_cargo1";
		break;
		case 9:
			return "kamaz_65228_doors_cargo1";
		break;
		case 10:
			return "kamaz_65228_doors_cargo1";
		break;
		case 11:
			return "kamaz_65228_doors_cargo1";
		break;
		case 12:
			return "kamaz_65228_doors_cargo1";
		break;
		}
		
		return super.GetDoorInvSlotNameFromSeatPos(posIdx);
	}

	override float OnSound(CarSoundCtrl ctrl, float oldValue)
	{
		switch (ctrl)
		{
		case CarSoundCtrl.DOORS:
			float newValue = 0;
			if (GetCarDoorsState("kamaz_65228_doors_driver") == CarDoorState.DOORS_CLOSED)
			{
				newValue += 0.25;
			}

			if (GetCarDoorsState("kamaz_65228_doors_codriver") == CarDoorState.DOORS_CLOSED)
			{
				newValue += 0.25;
			}
			
			if (GetCarDoorsState("kamaz_65228_doors_hood") == CarDoorState.DOORS_CLOSED)
			{
				newValue += 0.25;
			}			
		
			if (GetCarDoorsState("kamaz_65228_doors_trunk") == CarDoorState.DOORS_CLOSED)
			{
				newValue += 0.25;
			}
		
			return Math.Clamp(newValue, 0, 1);
		break;
		}

		return super.OnSound(ctrl, oldValue);
	}
	
	override string GetAnimSourceFromSelection( string selection )
	{
		switch( selection )
		{
		case "doors_driver":
			return "DoorsDriver";
		case "doors_codriver":
			return "DoorsCoDriver";
		case "doors_cargo1":
			return "DoorsCargo1";
		case "doors_cargo2":			
		case "doors_trunk":
			return "DoorsTrunk";
		case "doors_hood":
			return "DoorsHood";
					
		}

		return "";
	}

	override bool IsVitalCarBattery()
	{
		return false;
	}

	override bool IsVitalGlowPlug()
	{
		return false;
	}
		
	override bool CanReachSeatFromSeat( int currentSeat, int nextSeat )
	{
		switch( currentSeat )
		{
		case 0:
			if ( nextSeat == 1 )
				return false;
			break;
		case 1:
			if ( nextSeat == 0 )
				return false;
			break;
		case 2:
			if ( nextSeat == 3 )
				return true;
			break;
		case 3:
			if ( nextSeat == 2 )
				return true;
			break;
		}
		
		return false;
	}
	
	override string GetDoorConditionPointFromSelection( string selection )
	{
		switch( selection )
		{
			case "seat_driver":
				return "seat_con_1_1";
			break;
			case "seat_codriver":
				return "seat_con_2_1";
			break;			
			case "seat_cargo1":
				return "seat_con_1_2";
			break;

			case "seat_cargo2":
				return "seat_con_2_2";
			break;

			case "seat_cargo3":
				return "seat_con_1_3";
			break;

			case "seat_cargo4":
				return "seat_con_2_3";
			break;
			case "seat_cargo5":
				return "seat_con_1_4";
			break;

			case "seat_cargo6":
				return "seat_con_2_4";
			break;

			case "seat_cargo7":
				return "seat_con_1_5";
			break;

			case "seat_cargo8":
				return "seat_con_2_5";
			break;

			case "seat_cargo9":
				return "seat_con_1_6";
			break;	

			case "seat_cargo10":
				return "seat_con_2_6";
			break;
		}
		
		return "";
	}	

	override bool CanReachDoorsFromSeat( string pDoorsSelection, int pCurrentSeat )
	{
		switch( pCurrentSeat )
		{
		case 0:
			if (pDoorsSelection == "DoorsDriver")
			{
				return true;
			}
		break;
		case 1:
			if (pDoorsSelection == "DoorsCoDriver")
			{
				return true;
			}
		break;
		case 2:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		case 3:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		case 4:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		case 5:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		case 6:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		case 7:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		case 8:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		case 9:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		case 10:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		case 11:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		case 12:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		
		}
		
		return false;		
	}
	
	override void OnContact( string zoneName, vector localPos, IEntity other, Contact data )
	{
		if ( EngineIsOn() && (data.Impulse > 2000 || GetSpeedometer() > 10))
		{
			Object tree = Object.Cast( other );
				if (tree.IsTree())
				{
					if ( tree.IsCuttable() /* || tree.IsBush() */ )
					{
						Class treeType = NULL;
						if ( tree.IsInherited(TreeHard) )
						{
							treeType = TreeHard.Cast( tree );
						}
						else if ( tree.IsInherited(TreeSoft) )
						{
							treeType = TreeSoft.Cast( tree );
						}
						/* 
						else if ( tree.IsInherited(BushHard) )
						{
							treeType = BushHard.Cast( tree );
						}
						else if ( tree.IsInherited(BushSoft) )
						{
							treeType = BushSoft.Cast( tree );
						} 
						*/
						if ( treeType )
						{
							tree.DecreaseHealth("", "", 100, true);		
							tree.OnTreeCutDown( this ); //RPC Send
							dBodyDestroy(tree);
						}
						data.Impulse = data.Impulse * 0.01;
					}
				}
		}
		super.OnContact(zoneName, localPos, other, data);
	}	

	override void OnRPC(PlayerIdentity sender, int rpc_type,ParamsReadContext  ctx)
	{
		super.OnRPC(sender, rpc_type,ctx);
		
		switch(rpc_type)
		{
			case PlantType.TREE_HARD:
				SoundHardTreeFallingPlay();
			break;

			
			case PlantType.TREE_SOFT:
				SoundSoftTreeFallingPlay();
			break;
			
			
			case PlantType.BUSH_HARD:
				SoundHardBushFallingPlay();
			break;
			
			case PlantType.BUSH_SOFT:
				SoundSoftBushFallingPlay();
			break;
		}
	}	

	override void OnDebugSpawn()
	{
		EntityAI entity;
		EntityAI ent;
		ItemBase container;

		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );			

			entity.GetInventory().CreateInInventory( "TruckBattery" );
			entity.GetInventory().CreateInInventory( "SparkPlug" );
			entity.GetInventory().CreateInInventory( "CarRadiator" );

			entity.GetInventory().CreateInInventory( "kamaz_65228_doors_driver" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_doors_codriver" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_doors_hood" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_doors_trunk" );

			entity.GetInventory().CreateInInventory( "HeadlightH7" );
			entity.GetInventory().CreateInInventory( "HeadlightH7" );
			
			//-----IN CAR CARGO
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "TruckBattery" );
			entity.GetInventory().CreateInInventory( "SparkPlug" );
			entity.GetInventory().CreateInInventory( "HeadlightH7" );
			entity.GetInventory().CreateInInventory( "CarRadiator" );
			//--
			ent = entity.GetInventory().CreateInInventory( "Blowtorch" );
			entity = ent.GetInventory().CreateInInventory( "LargeGasCanister" );
			//--
			entity.GetInventory().CreateInInventory( "CanisterGasoline" );
			ent = entity.GetInventory().CreateInInventory( "CanisterGasoline" );
			if ( Class.CastTo(container, ent) )
			{
				container.SetLiquidType(LIQUID_WATER, true);
			}
			ent = entity.GetInventory().CreateInInventory( "Blowtorch" );
			if ( ent )
			{
				entity = ent.GetInventory().CreateInInventory( "LargeGasCanister" );
			}
		}

		Fill( CarFluid.FUEL, 50 );
		Fill( CarFluid.COOLANT, 6.0 );
		Fill( CarFluid.OIL, 4.0 );
	}
};

class kamaz_65228_camo extends kamaz_65228
{
	override void OnDebugSpawn()
	{
		EntityAI entity;
		EntityAI ent;
		ItemBase container;

		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );			

			entity.GetInventory().CreateInInventory( "TruckBattery" );
			entity.GetInventory().CreateInInventory( "SparkPlug" );
			entity.GetInventory().CreateInInventory( "CarRadiator" );

			entity.GetInventory().CreateInInventory( "kamaz_65228_doors_driver_camo" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_doors_codriver_camo" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_doors_hood_camo" );
			entity.GetInventory().CreateInInventory( "kamaz_65228_doors_trunk_camo" );

			entity.GetInventory().CreateInInventory( "HeadlightH7" );
			entity.GetInventory().CreateInInventory( "HeadlightH7" );
			
			//-----IN CAR CARGO
			entity.GetInventory().CreateInInventory( "kamaz_65228_Wheel" );
			entity.GetInventory().CreateInInventory( "TruckBattery" );
			entity.GetInventory().CreateInInventory( "SparkPlug" );
			entity.GetInventory().CreateInInventory( "HeadlightH7" );
			entity.GetInventory().CreateInInventory( "CarRadiator" );
			//--
			ent = entity.GetInventory().CreateInInventory( "Blowtorch" );
			entity = ent.GetInventory().CreateInInventory( "LargeGasCanister" );
			//--
			entity.GetInventory().CreateInInventory( "CanisterGasoline" );
			ent = entity.GetInventory().CreateInInventory( "CanisterGasoline" );
			if ( Class.CastTo(container, ent) )
			{
				container.SetLiquidType(LIQUID_WATER, true);
			}
			ent = entity.GetInventory().CreateInInventory( "Blowtorch" );
			if ( ent )
			{
				entity = ent.GetInventory().CreateInInventory( "LargeGasCanister" );
			}
		}

		Fill( CarFluid.FUEL, 50 );
		Fill( CarFluid.COOLANT, 6.0 );
		Fill( CarFluid.OIL, 4.0 );
	}
};

