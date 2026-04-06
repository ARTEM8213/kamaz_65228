class CfgMods
{
	class kamaz_65228
	{
		dir="kamaz_65228";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="kamaz_65228";
		credits="RUSForma";
		author="RUSForma";
		authorID="0";
		version=1;
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"kamaz_65228\scripts\4_World"
				};
			};
		};
	};
};
class CfgPatches
{
	class kamaz_65228
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts",
			"DZ_Sounds_Effects",
			"DZ_Data"
		};
	};
};
class CfgSlots
{
	class Slot_kamaz_65228_wheel_1_1
	{
		name="kamaz_65228_wheel_1_1";
		displayName="kamaz_65228_ Front left wheel";
		selection="wheel_1_1";
		ghostIcon="wheel";
	};
	class Slot_kamaz_65228_wheel_1_2
	{
		name="kamaz_65228_wheel_1_2";
		displayName="kamaz_65228_ Rear left wheel";
		selection="wheel_1_2";
		ghostIcon="wheel";
	};
	class Slot_kamaz_65228_backwheel_1_1
	{
		name="kamaz_65228_backwheel_1_1";
		displayName="kamaz_65228_ Rear left wheel";
		selection="backwheel_1_1";
		ghostIcon="wheel";
	};
	class Slot_kamaz_65228_wheel_2_1
	{
		name="kamaz_65228_wheel_2_1";
		displayName="kamaz_65228_ Front right wheel";
		selection="wheel_2_1";
		ghostIcon="wheel";
	};
	class Slot_kamaz_65228_wheel_2_2
	{
		name="kamaz_65228_wheel_2_2";
		displayName="kamaz_65228_ Rear right wheel";
		selection="wheel_2_2";
		ghostIcon="wheel";
	};
	class Slot_kamaz_65228_backwheel_2_1
	{
		name="kamaz_65228_backwheel_2_1";
		displayName="kamaz_65228_ Rear right wheel";
		selection="backwheel_2_1";
		ghostIcon="wheel";
	};
	class Slot_kamaz_65228_backwheel_1_2
	{
		name="kamaz_65228_backwheel_1_2";
		displayName="kamaz_65228_ Rear right wheel";
		selection="backwheel_1_2";
		ghostIcon="wheel";
	};
	class Slot_kamaz_65228_backwheel_2_2
	{
		name="kamaz_65228_backwheel_2_2";
		displayName="kamaz_65228_ Rear right wheel";
		selection="backwheel_2_2";
		ghostIcon="wheel";
	};
	class Slot_kamaz_65228_Wheel_Spare_1
	{
		name="kamaz_65228_Wheel_Spare_1";
		displayName="kamaz_65228_ Spare wheel";
		selection="wheel_spare_1";
		ghostIcon="wheel";
	};
	class Slot_kamaz_65228_doors_driver
	{
		name="kamaz_65228_doors_driver";
		displayName="kamaz_65228 Front left door";
		selection="doors_driver";
		ghostIcon="doorfront";
	};
	class Slot_kamaz_65228_doors_codriver
	{
		name="kamaz_65228_doors_codriver";
		displayName="kamaz_65228 Front right door";
		selection="doors_codriver";
		ghostIcon="doorfront";
	};
	class Slot_kamaz_65228_doors_hood
	{
		name="kamaz_65228_doors_hood";
		displayName="kamaz_65228 Front right door";
		selection="doors_trunk";
		ghostIcon="trunk";
	};
	class Slot_kamaz_65228_doors_trunk
	{
		name="kamaz_65228_doors_trunk";
		displayName="kamaz_65228 Front right door";
		selection="doors_trunk";
		ghostIcon="trunk";
	};
	class Slot_55galDrum_1
	{
		name="55galDrum_1";
		displayName="barrel";
		selection="55galDrum_1";
		ghostIcon="barrel";
	};
	class Slot_55galDrum_2
	{
		name="55galDrum_2";
		displayName="barrel";
		selection="55galDrum_2";
		ghostIcon="barrel";
	};
	class Slot_55galDrum_3
	{
		name="55galDrum_3";
		displayName="barrel";
		selection="55galDrum_3";
		ghostIcon="barrel";
	};
	class Slot_55galDrum_4
	{
		name="55galDrum_4";
		displayName="barrel";
		selection="55galDrum_4";
		ghostIcon="barrel";
	};
	class Slot_55galDrum_5
	{
		name="55galDrum_5";
		displayName="barrel";
		selection="55galDrum_5";
		ghostIcon="barrel";
	};
	class Slot_55galDrum_6
	{
		name="55galDrum_6";
		displayName="barrel";
		selection="55galDrum_6";
		ghostIcon="barrel";
	};
	class Slot_Truck_01_WoodenCrate1
	{
		name="Truck_01_WoodenCrate1";
		displayName="Truck_01_WoodenCrate1";
		selection="Truck_01_WoodenCrate1";
		ghostIcon="woodcrate";
	};
	class Slot_Truck_01_WoodenCrate2
	{
		name="Truck_01_WoodenCrate2";
		displayName="Truck_01_WoodenCrate2";
		selection="Truck_01_WoodenCrate2";
		ghostIcon="woodcrate";
	};
	class Slot_Truck_01_WoodenCrate3
	{
		name="Truck_01_WoodenCrate3";
		displayName="Truck_01_WoodenCrate3";
		selection="Truck_01_WoodenCrate3";
		ghostIcon="woodcrate";
	};
	class Slot_Truck_01_WoodenCrate4
	{
		name="Truck_01_WoodenCrate4";
		displayName="Truck_01_WoodenCrate4";
		selection="Truck_01_WoodenCrate4";
		ghostIcon="woodcrate";
	};
	class Slot_Back
	{
		name="Back";
		displayName="Back";
		selection="Back";
		ghostIcon="back";
	};
	class Slot_Cassette
	{
		name="Cassette";
		displayName="Cassette";
		selection="Cassette";
		ghostIcon="sss_cassette";
	};
	class Slot_CanisterGasoline
	{
		name="CanisterGasoline";
		displayName="CanisterGasoline";
		selection="CanisterGasoline";
		ghostIcon="gascanister";
	};
};
class CfgVehicles
{
	class Bottle_Base;
	class CanisterGasoline: Bottle_Base
	{
		inventorySlot="CanisterGasoline";
	};
	class Inventory_Base;
	class Container_Base;
	class SeaChest: Container_Base
	{
		inventorySlot[]=
		{
			"sea_chest",
			"sea_chest_1",
			"sea_chest_2",
			"sea_chest_3",
			"sea_chest_4"
		};
	};
	class Barrel_ColorBase: Container_Base
	{
		inventorySlot[]=
		{
			"55galDrum_1",
			"55galDrum_2",
			"55galDrum_3",
			"55galDrum_4",
			"55galDrum_5",
			"55galDrum_6",
			"55galDrum_7",
			"55galDrum_8",
			"55galDrum_9",
			"55galDrum_10",
			"55galDrum_11",
			"55galDrum_12",
			"Truck_01_Barrel1",
			"Truck_01_Barrel2",
			"Truck_01_Barrel3",
			"Truck_01_Barrel4",
			"Truck_01_Barrel5",
			"Truck_01_Barrel6",
			"Truck_01_Barrel7",
			"Truck_01_Barrel8",
			"Truck_01_Barrel9",
			"Truck_01_Barrel10",
			"Truck_01_Barrel11",
			"Truck_01_Barrel12",
			"BarrelColorBaseSlot"
		};
	};
	class WoodenCrate: Container_Base
	{
		inventorySlot[]=
		{
			"Truck_01_WoodenCrate1",
			"Truck_01_WoodenCrate2",
			"Truck_01_WoodenCrate3",
			"Truck_01_WoodenCrate4",
			"Truck_01_WoodenCrate5",
			"Truck_01_WoodenCrate6",
			"WoodenCrate",
			"woodencrate_1",
			"woodencrate_2",
			"woodencrate_3",
			"woodencrate_4"
		};
	};
	class CarWheel: Inventory_Base
	{
		scope=1;
		itemBehaviour=0;
		physLayer="item_large";
		itemSize[]={6,6};
		weight=12000;
		repairableWithKits[]={6};
		repairCosts[]={25};
		simulation="carwheel";
		lockType=3;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="hatchbackwheel_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CarDoor: Inventory_Base
	{
		scope=1;
		itemBehaviour=0;
		physLayer="item_large";
		itemSize[]={10,10};
		weight=20000;
		hiddenSelections[]=
		{
			"dmgZone_doors"
		};
		lockType=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Window
				{
					class Health
					{
						hitpoints=70;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								
								{
									""
								}
							}
						};
					};
					componentNames[]=
					{
						"dmgZone_window"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Doors
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								
								{
									""
								}
							}
						};
					};
					componentNames[]=
					{
						"dmgZone_doors"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp
				{
					soundSet="hatchbackdoors_driver_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="hatchbackdoors_driver_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Car;
	class CarScript: Car
	{
		rotationFlags=64;
		storageCategory=4;
		insideSoundCoef=0.89999998;
		fuelCapacity=50;
		brakeFluidCapacity=1;
		oilCapacity=4;
		coolantCapacity=6;
		brakeFluidLeakDebit[]={0,0};
		oilLeakDebit[]={0,0};
		coolantLeakDebit[]={0,0};
		brakeFluidForceCoef[]={0,1,1,1};
		damageFromOil[]={0,0,1,0};
		damageFromCoolant[]={0,0,1,0};
		engineBeltSlot="EngineBelt";
		batterySlot="CarBattery";
		electricPowerResName="power";
		electricConsumptionIgnition=3001;
		electricConsumptionEngine=0;
		electricConsumptionLights=0;
		electricOutputEngine=5;
		selectionDashboard="light_dashboard";
		selectionLightFrontL="light_left";
		selectionLightFrontR="light_right";
		selectionBrakeLights="light_break";
		class Crew
		{
			class Driver
			{
				actionSel="seat_driver";
				proxyPos="crewDriver";
				getInPos="pos_driver";
				getInDir="pos_driver_dir";
				isDriver=1;
			};
			class CoDriver
			{
				actionSel="seat_coDriver";
				proxyPos="crewCoDriver";
				getInPos="pos_coDriver";
				getInDir="pos_coDriver_dir";
			};
		};
		class SimulationModule
		{
			class Axles
			{
				class Front
				{
					class Wheels
					{
						class Left
						{
							inventorySlot="";
							animTurn="turnfrontleft";
							animRotation="wheelfrontleft";
							animDamper="damperfrontleft";
							wheelHub="wheel_1_1_damper_land";
						};
						class Right
						{
							inventorySlot="";
							animTurn="turnfrontright";
							animRotation="wheelfrontright";
							animDamper="damperfrontright";
							wheelHub="wheel_2_1_damper_land";
						};
					};
				};
				class Rear
				{
					class Wheels
					{
						class Left
						{
							inventorySlot="";
							animTurn="turnbackleft";
							animRotation="wheelbackleft";
							animDamper="damperbackleft";
							wheelHub="wheel_1_2_damper_land";
						};
						class Right
						{
							inventorySlot="";
							animTurn="turnbackright";
							animRotation="wheelbackright";
							animDamper="damperbackright";
							wheelHub="wheel_2_2_damper_land";
						};
					};
				};
			};
		};
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1"
		};
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
		class AnimationSources
		{
			class DoorsDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCoDriver: DoorsDriver
			{
			};
			class DoorsHood: DoorsDriver
			{
			};
			class DoorsTrunk: DoorsDriver
			{
			};
			class HideDestroyed_1_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_1_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class AnimHitWheel_1_1
			{
				source="Hit";
				hitpoint="HitWheel_1_1";
				raw=1;
			};
			class AnimHitWheel_1_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_1_2";
			};
			class AnimHitWheel_2_1: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_1";
			};
			class AnimHitWheel_2_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_2";
			};
			class HitDoorsHood: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsHood";
			};
			class HitDoorsTrunk: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsTrunk";
			};
			class HitDoorsDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsDriver";
			};
			class HitDoorsCoDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCoDriver";
			};
			class HitDoorsCargo: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCargo";
			};
		};
	};
	class kamaz_65228_Wheel: CarWheel
	{
		scope=2;
		displayName="Колесо kamaz_65228";
		descriptionShort="Колесо kamaz_65228";
		model="\kamaz_65228\proxy\kamaz_65228_wheel.p3d";
		weight=30000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot[]=
		{
			"kamaz_65228_Wheel_1_1",
			"kamaz_65228_Wheel_1_2",
			"kamaz_65228_backwheel_1_1",
			"kamaz_65228_Wheel_2_1",
			"kamaz_65228_Wheel_2_2",
			"kamaz_65228_backwheel_2_1",
			"kamaz_65228_backwheel_1_2",
			"kamaz_65228_backwheel_2_2",
			"kamaz_65228_Wheel_Spare_1"
		};
		rotationFlags=12;
		physLayer="item_large";
		radiusByDamage[]={0,0.54100001,0.30000001,0.38,0.99980003,0.34999999,0.99989998,0.28};
		radius=0.54100001;
		width=0.33000001;
		tyreOffroadResistance=2.8499999;
		tyreGrip=2.8;
		tyreRollResistance=0.02;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50000;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
	class kamaz_65228_wheel_destroyed: kamaz_65228_Wheel
	{
		model="\kamaz_65228\proxy\kamaz_65228_wheel_destroyed.p3d";
		weight=20000;
		tyreRollResistance=1;
		tyreRollDrag=80;
		tyreRoughness=1.35;
		tyreTread=0.44999999;
		radius=0.30000001;
		friction=-1;
		width=0.2;
	};
	class kamaz_65228_doors_driver: CarDoor
	{
		scope=2;
		displayName="Водительская дверь kamaz_65228";
		descriptionShort="Водительская дверь kamaz_65228";
		model="\kamaz_65228\proxy\kamaz_65228_doors_driver.p3d";
		weight=20000;
		itemSize[]={10,10};
		inventorySlot[]=
		{
			"kamaz_65228_doors_driver"
		};
		rotationFlags=8;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"kamaz_65228\data\kamaz_kuzov_rust.paa"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Doors: Doors
				{
					class Health: Health
					{
						hitpoints=50000;
						transferToGlobalCoef=0;
						RefTexsMats[]={};
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					componentNames[]=
					{
						"dmgzone_doors"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp
				{
					soundSet="hatchbackdoors_driver_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="hatchbackdoors_driver_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class kamaz_65228_doors_codriver: kamaz_65228_doors_driver
	{
		displayName="Пассажирская дверь kamaz_65228";
		descriptionShort="Пассажирская дверь kamaz_65228";
		model="\kamaz_65228\proxy\kamaz_65228_doors_codriver.p3d";
		inventorySlot[]=
		{
			"kamaz_65228_doors_codriver"
		};
		rotationFlags=4;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"kamaz_65228\data\kamaz_kuzov_rust.paa"
		};
	};
	class kamaz_65228_doors_hood: kamaz_65228_doors_driver
	{
		scope=2;
		displayName="Капот kamaz_65228 ";
		descriptionShort="Капот kamaz_65228 ";
		model="\kamaz_65228\proxy\kamaz_65228_doors_hood.p3d";
		weight=20000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot[]=
		{
			"kamaz_65228_doors_hood"
		};
		rotationFlags=4;
		physLayer="item_large";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"kamaz_65228\data\kamaz_kuzov_rust.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15000;
					RefTexsMats[]={};
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
	class kamaz_65228_doors_trunk: kamaz_65228_doors_driver
	{
		scope=2;
		displayName="Багажник kamaz_65228";
		descriptionShort="Багажник kamaz_65228";
		model="\kamaz_65228\proxy\kamaz_65228_doors_trunk.p3d";
		weight=20000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot[]=
		{
			"kamaz_65228_doors_trunk"
		};
		rotationFlags=4;
		physLayer="item_large";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"kamaz_65228\data\Kamaz_kung_rust.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15000;
					RefTexsMats[]=
					{
						""
					};
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
	class kamaz_65228_doors_driver_camo: kamaz_65228_doors_driver
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"kamaz_65228\data\kamaz_kuzov_camo.paa"
		};
	};
	class kamaz_65228_doors_codriver_camo: kamaz_65228_doors_codriver
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"kamaz_65228\data\kamaz_kuzov_camo.paa"
		};
	};
	class kamaz_65228_doors_hood_camo: kamaz_65228_doors_hood
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"kamaz_65228\data\kamaz_kuzov_camo.paa"
		};
	};
	class kamaz_65228_doors_trunk_camo: kamaz_65228_doors_trunk
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"kamaz_65228\data\KungZIL_camo.paa"
		};
	};
	class kamaz_65228: CarScript
	{
		scope=2;
		displayname="kamaz_65228";
		descriptionShort="kamaz_65228";
		Model="\kamaz_65228\kamaz_65228.p3d";
		attachments[]=
		{
			"TruckBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"kamaz_65228_wheel_1_1",
			"kamaz_65228_wheel_1_2",
			"kamaz_65228_wheel_2_1",
			"kamaz_65228_wheel_2_2",
			"kamaz_65228_backwheel_1_1",
			"kamaz_65228_backwheel_1_2",
			"kamaz_65228_backwheel_2_1",
			"kamaz_65228_backwheel_2_2",
			"kamaz_65228_Wheel_Spare_1",
			"kamaz_65228_doors_driver",
			"kamaz_65228_doors_codriver",
			"kamaz_65228_doors_hood",
			"kamaz_65228_doors_trunk",
			"kamaz_65228_doors_cargo3",
			"55galDrum_1",
			"55galDrum_2",
			"55galDrum_3",
			"55galDrum_4",
			"55galDrum_5",
			"55galDrum_6",
			"Truck_01_WoodenCrate1",
			"Truck_01_WoodenCrate2",
			"Truck_01_WoodenCrate3",
			"Truck_01_WoodenCrate4",
			"Back",
			"Cassette",
			"CanisterGasoline"
		};
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"kamaz_65228\data\kamaz_kuzov_rust.paa",
			"kamaz_65228\data\Kamaz_kung_rust.paa"
		};
		dashboardMatOn="kamaz_65228\data\kamaz_light_panel.rvmat";
		dashboardMatOff="kamaz_65228\data\kamaz_lights_off.rvmat";
		frontReflectorMatOn="kamaz_65228\data\kamaz_light.rvmat";
		frontReflectorMatOff="kamaz_65228\data\kamaz_lights_off.rvmat";
		brakeReflectorMatOn="kamaz_65228\data\kamaz_light_s.rvmat";
		brakeReflectorMatOff="kamaz_65228\data\kamaz_lights_off.rvmat";
		ReverseReflectorMatOn="kamaz_65228\data\kamaz_light_2.rvmat";
		ReverseReflectorMatOff="kamaz_65228\data\kamaz_lights_off.rvmat";
		TailReflectorMatOn="kamaz_65228\data\kamaz_light_2.rvmat";
		TailReflectorMatOff="kamaz_65228\data\kamaz_lights_off.rvmat";
		fuelCapacity=200;
		fuelConsumption=50;
		class Sounds
		{
			thrust=0.60000002;
			thrustTurbo=1;
			thrustGentle=0.30000001;
			thrustSmoothCoef=0.02;
			camposSmoothCoef=0.029999999;
			soundSetsFilter[]=
			{
				"kamaz_65228_Engine_Offload_Ext_Rpm1_SoundSet",
				"kamaz_65228_Engine_Offload_Ext_Rpm2_SoundSet",
				"kamaz_65228_Engine_Offload_Ext_Rpm3_SoundSet",
				"kamaz_65228_Engine_Offload_Ext_Rpm4_SoundSet",
				"kamaz_65228_Engine_Offload_Ext_Rpm5_SoundSet",
				"kamaz_65228_Engine_Ext_Rpm0_SoundSet",
				"kamaz_65228_Engine_Ext_Rpm1_SoundSet",
				"kamaz_65228_Engine_Ext_Rpm2_SoundSet",
				"kamaz_65228_Engine_Ext_Rpm3_SoundSet",
				"kamaz_65228_Engine_Ext_Rpm4_SoundSet",
				"kamaz_65228_Engine_Ext_Rpm5_SoundSet",
				"kamaz_65228_Engine_Ext_Broken_SoundSet",
				"offroad_Tires_rock_slow_Ext_SoundSet",
				"offroad_Tires_rock_fast_Ext_SoundSet",
				"offroad_Tires_grass_slow_Ext_SoundSet",
				"offroad_Tires_grass_fast_Ext_SoundSet",
				"offroad_Tires_gravel_slow_Ext_SoundSet",
				"offroad_Tires_gravel_fast_Ext_SoundSet",
				"offroad_Tires_asphalt_slow_Ext_SoundSet",
				"offroad_Tires_asphalt_fast_Ext_SoundSet",
				"offroad_Tires_water_slow_Ext_SoundSet",
				"offroad_Tires_water_fast_Ext_SoundSet",
				"offroad_skid_dirt_SoundSet",
				"offroad_dirt_turn_SoundSet",
				"offroad_Rain_Ext_SoundSet"
			};
			soundSetsInt[]=
			{
				"offroad_Tires_Asphalt_Slow_General_Int_SoundSet",
				"offroad_Tires_Asphalt_Fast_General_Int_SoundSet",
				"offroad_Wind_SoundSet"
			};
		};
		class Crew: Crew
		{
			class Driver: Driver
			{
			};
			class CoDriver: CoDriver
			{
			};
			class Cargo1
			{
				actionSel="seat_cargo1";
				proxyPos="crewCargo1";
				getInPos="pos_cargo1";
				getInDir="pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel="seat_cargo2";
				proxyPos="crewCargo2";
				getInPos="pos_cargo2";
				getInDir="pos_cargo2_dir";
			};
			class Cargo3
			{
				actionSel="seat_cargo3";
				proxyPos="crewCargo3";
				getInPos="pos_cargo3";
				getInDir="pos_cargo3_dir";
			};
			class Cargo4
			{
				actionSel="seat_cargo4";
				proxyPos="crewCargo4";
				getInPos="pos_cargo4";
				getInDir="pos_cargo4_dir";
			};
			class Cargo5
			{
				actionSel="seat_cargo5";
				proxyPos="crewCargo5";
				getInPos="pos_cargo5";
				getInDir="pos_cargo5_dir";
			};
			class Cargo6
			{
				actionSel="seat_cargo6";
				proxyPos="crewCargo6";
				getInPos="pos_cargo6";
				getInDir="pos_cargo6_dir";
			};
			class Cargo7
			{
				actionSel="seat_cargo7";
				proxyPos="crewCargo7";
				getInPos="pos_cargo7";
				getInDir="pos_cargo7_dir";
			};
			class Cargo8
			{
				actionSel="seat_cargo8";
				proxyPos="crewCargo8";
				getInPos="pos_cargo8";
				getInDir="pos_cargo8_dir";
			};
			class Cargo9
			{
				actionSel="seat_cargo9";
				proxyPos="crewCargo9";
				getInPos="pos_cargo9";
				getInDir="pos_cargo9_dir";
			};
			class Cargo10
			{
				actionSel="seat_cargo10";
				proxyPos="crewCargo10";
				getInPos="pos_cargo10";
				getInDir="pos_cargo10_dir";
			};
			class Cargo11
			{
				actionSel="seat_cargo11";
				proxyPos="crewCargo11";
				getInPos="pos_cargo11";
				getInDir="pos_cargo11_dir";
			};
			class Cargo12
			{
				actionSel="seat_cargo12";
				proxyPos="crewCargo12";
				getInPos="pos_cargo12";
				getInDir="pos_cargo12_dir";
			};
		};
		class SimulationModule: SimulationModule
		{
			class Steering
			{
				maxSteeringAngle=35;
				increaseSpeed[]={0,25,50,15};
				decreaseSpeed[]={0,50,50,40};
				centeringSpeed[]={0,25,50,15};
			};
			class Throttle
			{
				reactionTime=1;
				defaultThrust=0.88999999;
				gentleThrust=0.69999999;
				turboCoef=2.45;
				gentleCoef=0.94999999;
			};
			class Brake
			{
				pressureBySpeed[]={0,0.5,10,0.46000001,30,0.43000001,40,0.40000001,60,0.5,80,0.60000002};
				reactionTime=0.30000001;
				driverless=0.1;
			};
			class Aerodynamics
			{
				frontalArea=5.75;
				dragCoefficient=0.52999997;
			};
			drive="DRIVE_642";
			class Engine
			{
				torqueCurve[]={525,0,1400,330,2900,465,4900,340,7600,0};
				inertia=0.55000001;
				frictionTorque=100;
				rollingFriction=0.80000001;
				viscousFriction=0.80000001;
				rpmIdle=575;
				rpmMin=800;
				rpmClutch=1600;
				rpmRedline=6800;
			};
			class Clutch
			{
				maxTorqueTransfer=650;
				uncoupleTime=0.30000001;
				coupleTime=0.44999999;
			};
			class Gearbox
			{
				type="GEARBOX_MANUAL";
				reverse=9.4799995;
				ratios[]={6.5799999,4.6799998,3.48,2.6199999,1};
			};
			class CentralDifferential
			{
				ratio=0.75;
				type="DIFFERENTIAL_LOCKED";
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxBrakeTorque=5500;
					wheelHubMass=25;
					wheelHubRadius=0.30000001;
					class Suspension
					{
						stiffness=65000;
						compression=3000;
						damping=7000;
						travelMaxUp=0.14;
						travelMaxDown=0.15000001;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_1";
							inventorySlot="kamaz_65228_Wheel_1_1";
						};
						class Right: Right
						{
							animDamper="damper_2_1";
							inventorySlot="kamaz_65228_Wheel_2_1";
						};
					};
				};
				class Middle: Rear
				{
					maxBrakeTorque=5000;
					maxHandbrakeTorque=6000;
					wheelHubMass=45;
					wheelHubRadius=0.30000001;
					class Differential
					{
						ratio=8.3500004;
						type="DIFFERENTIAL_LOCKED";
					};
					class Suspension
					{
						stiffness=55000;
						compression=2500;
						damping=8000;
						travelMaxUp=0.094999999;
						travelMaxDown=0.125;
					};
					class Wheels: Wheels
					{
						class Left
						{
							inventorySlot="kamaz_65228_backwheel_1_1";
							animTurn="turnmiddleleft";
							animRotation="wheelmiddleleft";
							animDamper="damper_1_2";
							wheelHub="wheel_1_2_damper_land";
						};
						class Right
						{
							inventorySlot="kamaz_65228_backwheel_2_1";
							animTurn="turnmiddletright";
							animRotation="wheelmiddleright";
							animDamper="damper_2_2";
							wheelHub="wheel_2_2_damper_land";
						};
					};
				};
				class Rear: Rear
				{
					maxBrakeTorque=5000;
					maxHandbrakeTorque=6000;
					wheelHubMass=45;
					wheelHubRadius=0.30000001;
					class Differential
					{
						ratio=8.3500004;
						type="DIFFERENTIAL_LOCKED";
					};
					class Suspension
					{
						stiffness=55000;
						compression=2500;
						damping=8000;
						travelMaxUp=0.094999999;
						travelMaxDown=0.125;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animTurn="turnbackleft";
							animRotation="wheelbackleft";
							animDamper="damper_1_3";
							inventorySlot="kamaz_65228_backwheel_1_2";
							wheelHub="wheel_1_3_damper_land";
						};
						class Right: Right
						{
							animTurn="turnbackright";
							animRotation="wheelbackright";
							animDamper="damper_2_3";
							inventorySlot="kamaz_65228_backwheel_2_2";
							wheelHub="wheel_2_3_damper_land";
						};
					};
				};
			};
		};
		class ObstacleGenerator
		{
			carve=1;
			timeToStationary=5;
			moveThreshold=0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius=1;
						height=1.5;
						center[]={0,0,0.69999999};
					};
					class Cyl3
					{
						radius=1;
						height=1.5;
						center[]={0,0,-0.69999999};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,100};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		class AnimationSources: AnimationSources
		{
			class DoorsCargo1
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCargo2
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCargo3
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCargo4
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class WheelSidePlate1
			{
				source="user";
				initPhase=0;
				animPeriod=1.3;
			};
			class WheelSidePlate2: WheelSidePlate1
			{
			};
			class Damper_1_1
			{
				source="user";
				initPhase=0.48280001;
				animPeriod=1;
			};
			class Damper_2_1: Damper_1_1
			{
			};
			class Damper_1_2
			{
				source="user";
				initPhase=0.43180001;
				animPeriod=1;
			};
			class Damper_2_2: Damper_1_2
			{
			};
			class Damper_1_3: Damper_1_2
			{
			};
			class Damper_2_3: Damper_1_2
			{
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150000;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Front
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_front"
					};
					componentNames[]=
					{
						"dmgZone_front"
					};
					class Health
					{
						hitpoints=150000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					displayName="$STR_CfgVehicleDmg_Bumper0";
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Back
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_Back"
					};
					componentNames[]=
					{
						"dmgZone_Back"
					};
					class Health
					{
						hitpoints=100000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					displayName="$STR_CfgVehicleDmg_BackTarp0";
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Roof
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_roof"
					};
					componentNames[]=
					{
						"dmgZone_roof"
					};
					class Health
					{
						hitpoints=50000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					displayName="$STR_CfgVehicleDmg_Roof0";
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Fender_1_1
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_fender_1_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_1"
					};
					class Health
					{
						hitpoints=80000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					displayName="$STR_CfgVehicleDmg_Fender0";
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Fender_2_1: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_2_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_1"
					};
				};
				class Engine
				{
					fatalInjuryCoef=0.001;
					memoryPoints[]=
					{
						"dmgZone_engine"
					};
					componentNames[]=
					{
						"dmgZone_engine"
					};
					class Health
					{
						hitpoints=150000;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					displayName="$STR_CfgVehicleDmg_Engine0";
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Reflector_1_1
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_lights_1_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_1_1"
					};
					class Health
					{
						hitpoints=5000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					displayName="$STR_CfgVehicleDmg_Reflector0";
					transferToZonesNames[]=
					{
						"Front",
						"Fender_1_1"
					};
					transferToZonesCoefs[]={1,1};
					inventorySlots[]=
					{
						"Reflector_1_1"
					};
					inventorySlotsCoefs[]={1};
				};
				class Reflector_2_1: Reflector_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_lights_2_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_2_1"
					};
					transferToZonesNames[]=
					{
						"Front",
						"Fender_2_1"
					};
					inventorySlots[]=
					{
						"Reflector_2_1"
					};
				};
				class FuelTank
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_fuelTank"
					};
					componentNames[]=
					{
						"dmgZone_fuelTank"
					};
					class Health
					{
						hitpoints=30000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					displayName="$STR_CfgVehicleDmg_FuelTank0";
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Двигатель";
				description="";
				icon="set:dayz_inventory image:cat_vehicle_engine";
				attachmentSlots[]=
				{
					"TruckBattery",
					"CarRadiator",
					"SparkPlug"
				};
			};
			class Body
			{
				name="Корпус";
				description="";
				icon="set:dayz_inventory image:cat_vehicle_body";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"kamaz_65228_doors_driver",
					"kamaz_65228_doors_codriver",
					"kamaz_65228_doors_hood",
					"kamaz_65228_doors_trunk"
				};
			};
			class Chassis
			{
				name="Шасси";
				description="";
				icon="set:dayz_inventory image:cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"kamaz_65228_Wheel_1_1",
					"kamaz_65228_Wheel_2_1",
					"kamaz_65228_Wheel_1_2",
					"kamaz_65228_Wheel_2_2",
					"kamaz_65228_backwheel_1_1",
					"kamaz_65228_backwheel_2_1",
					"kamaz_65228_backwheel_1_2",
					"kamaz_65228_backwheel_2_2"
				};
			};
			class Attachment
			{
				name="Багажник";
				description="";
				icon="trunk";
				attachmentSlots[]=
				{
					"kamaz_65228_Wheel_Spare_1",
					"55galDrum_1",
					"55galDrum_2",
					"55galDrum_3",
					"55galDrum_4",
					"55galDrum_5",
					"55galDrum_6",
					"Truck_01_WoodenCrate1",
					"Truck_01_WoodenCrate2",
					"Truck_01_WoodenCrate3",
					"Truck_01_WoodenCrate4",
					"Back",
					"Cassette",
					"CanisterGasoline"
				};
			};
		};
	};
	class kamaz_65228_camo: kamaz_65228
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"kamaz_65228\data\kamaz_kuzov_camo.paa",
			"kamaz_65228\data\KungZIL_camo.paa"
		};
	};
};
class CfgDestroy
{
	class EngineHit
	{
		sound[]={};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyVehiclePart: ProxyAttachment
	{
		scope=2;
		simulation="ProxyInventory";
		autocenter=0;
		animated=0;
		shadow=1;
		reversed=0;
	};
	class Proxykamaz_65228_wheel: ProxyVehiclePart
	{
		model="kamaz_65228\proxy\kamaz_65228_wheel.p3d";
		inventorySlot[]=
		{
			"kamaz_65228_wheel_1_1",
			"kamaz_65228_wheel_2_1",
			"kamaz_65228_wheel_1_2",
			"kamaz_65228_wheel_2_2",
			"kamaz_65228_Wheel_Spare_1",
			"kamaz_65228_backwheel_1_1",
			"kamaz_65228_backwheel_2_1",
			"kamaz_65228_backwheel_1_2",
			"kamaz_65228_backwheel_2_2"
		};
	};
	class Proxykamaz_65228_wheel_destroyed: ProxyVehiclePart
	{
		model="kamaz_65228\proxy\kamaz_65228_wheel_destroyed.p3d";
		inventorySlot[]=
		{
			"kamaz_65228_wheel_1_1",
			"kamaz_65228_wheel_2_1",
			"kamaz_65228_wheel_1_2",
			"kamaz_65228_wheel_2_2",
			"kamaz_65228_Wheel_Spare_1",
			"kamaz_65228_backwheel_1_1",
			"kamaz_65228_backwheel_2_1",
			"kamaz_65228_backwheel_1_2",
			"kamaz_65228_backwheel_2_2"
		};
	};
	class Proxykamaz_65228_doors_driver: ProxyVehiclePart
	{
		model="\kamaz_65228\proxy\kamaz_65228_doors_driver.p3d";
		inventorySlot="kamaz_65228_doors_driver";
	};
	class Proxykamaz_65228_doors_codriver: ProxyVehiclePart
	{
		model="\kamaz_65228\proxy\kamaz_65228_doors_codriver.p3d";
		inventorySlot="kamaz_65228_doors_codriver";
	};
	class Proxykamaz_65228_doors_trunk: ProxyVehiclePart
	{
		model="\kamaz_65228\proxy\kamaz_65228_doors_trunk.p3d";
		inventorySlot="kamaz_65228_doors_trunk";
	};
	class Proxykamaz_65228_doors_hood: ProxyVehiclePart
	{
		model="\kamaz_65228\proxy\kamaz_65228_doors_Hood.p3d";
		inventorySlot="kamaz_65228_doors_hood";
	};
	class ProxyJerryCan: ProxyVehiclePart
	{
		model="\DZ\vehicles\parts\jerrycan.p3d";
		inventorySlot="CanisterGasoline";
	};
	class Proxy55galDrum: ProxyVehiclePart
	{
		model="\DZ\gear\containers\55galdrum.p3d";
		inventorySlot[]=
		{
			"55galDrum_1",
			"55galDrum_2",
			"55galDrum_3",
			"55galDrum_4",
			"55galDrum_5",
			"55galDrum_6",
			"55galDrum_7",
			"55galDrum_8",
			"55galDrum_9",
			"55galDrum_10",
			"55galDrum_11",
			"55galDrum_12",
			"Truck_01_Barrel1",
			"Truck_01_Barrel2",
			"Truck_01_Barrel3",
			"Truck_01_Barrel4",
			"Truck_01_Barrel5",
			"Truck_01_Barrel6",
			"Truck_01_Barrel7",
			"Truck_01_Barrel8",
			"Truck_01_Barrel9",
			"Truck_01_Barrel10",
			"Truck_01_Barrel11",
			"Truck_01_Barrel12",
			"BarrelColorBaseSlot"
		};
	};
	class Proxywooden_case: ProxyVehiclePart
	{
		model="\DZ\gear\camping\wooden_case.p3d";
		inventorySlot[]=
		{
			"Truck_01_WoodenCrate1",
			"Truck_01_WoodenCrate2",
			"Truck_01_WoodenCrate3",
			"Truck_01_WoodenCrate4",
			"Truck_01_WoodenCrate5",
			"Truck_01_WoodenCrate6",
			"WoodenCrate",
			"woodencrate_1",
			"woodencrate_2",
			"woodencrate_3",
			"woodencrate_4"
		};
	};
	class ProxyspawnWeapon: ProxyVehiclePart
	{
		model="\DZ\data\proxies\spawnWeapon.p3d";
		inventorySlot[]=
		{
			"Shoulder"
		};
	};
	class ProxyspawnItemBackpack: ProxyVehiclePart
	{
		model="\DZ\data\proxies\spawnItemBackpack.p3d";
		inventorySlot[]=
		{
			"Back"
		};
	};
	class Proxysea_chest: ProxyVehiclePart
	{
		model="\DZ\gear\camping\sea_chest.p3d";
		inventorySlot[]=
		{
			"sea_chest",
			"sea_chest_1",
			"sea_chest_2",
			"sea_chest_3",
			"sea_chest_4"
		};
	};
	class ProxyPart
	{
		scope=2;
		simulation="ProxyInventory";
		model="";
		inventorySlot="";
		autocenter=0;
		animated=0;
		shadow=1;
		reversed=1;
	};
};
class CfgSoundShaders
{
	class baseEnginekamaz_65228_SoundShader
	{
		range=80;
	};
	class kamaz_65228_Engine_Ext_Rpm0_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Rpm0",
				1
			}
		};
		frequency="1 * ((850 + ((rpm - 850)/(8000/5600))) max 850) / 850";
		volume="0.75 * 1 * engineOn * 0.4 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) + 2.5*50),(((850+1200)/2) - 50)]) * ((1 - 0.25*doors) max campos)";
	};
	class kamaz_65228_Engine_Ext_Rpm1_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Rpm1",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 1200";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.6 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) - 2.5*50),(((850+1200)/2) + 50)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) + 2.5*150),(((1200+1700)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class kamaz_65228_Engine_Offload_Ext_Rpm1_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Offload_Rpm1",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 1200";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.6 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) - 2.5*50),(((850+1200)/2) + 50)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) + 2.5*150),(((1200+1700)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class kamaz_65228_Engine_Ext_Rpm2_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Rpm2",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 1700";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.85 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) - 2.5*150),(((1200+1700)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) + 2.5*150),(((1700+2300)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class kamaz_65228_Engine_Offload_Ext_Rpm2_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Offload_Rpm2",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 1700";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.85 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) - 2.5*150),(((1200+1700)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) + 2.5*150),(((1700+2300)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class kamaz_65228_Engine_Ext_Rpm3_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Rpm3",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 2300";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) - 2.5*150),(((1700+2300)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3150)/2) + 2.5*200),(((2300+3150)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class kamaz_65228_Engine_Offload_Ext_Rpm3_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Offload_Rpm3",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 2300";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) - 2.5*150),(((1700+2300)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3150)/2) + 2.5*200),(((2300+3150)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class kamaz_65228_Engine_Ext_Rpm4_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Rpm4",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 3150";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3150)/2) - 2.5*200),(((2300+3150)/2) + 200)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3150+4400)/2) + 2.5*200),(((3150+4400)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class kamaz_65228_Engine_Offload_Ext_Rpm4_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Offload_Rpm4",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 3150";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3150)/2) - 2.5*200),(((2300+3150)/2) + 200)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3150+4400)/2) + 2.5*200),(((3150+4400)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class kamaz_65228_Engine_Ext_Rpm5_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Rpm5",
				2
			}
		};
		frequency="(1 * (850 + ((rpm - 850)/(8000/5600))) / 4400) min (8000/5600)";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3150+4400)/2) - 2.5*200),(((3150+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class kamaz_65228_Engine_Offload_Ext_Rpm5_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Offload_Rpm5",
				2
			}
		};
		frequency="(1 * (850 + ((rpm - 850)/(8000/5600))) / 4400) min (8000/5600)";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3150+4400)/2) - 2.5*200),(((3150+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class kamaz_65228_Engine_Ext_Broken_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_Engine_Ext_Broken",
				2
			}
		};
		frequency=0.89999998;
		volume="0.75 * 1 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3150+4400)/2) - 2.5*200),(((3150+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos) * (rpm factor[6000,6200])";
	};
	class kamaz_65228_Engine_Start_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_engine_start",
				1
			}
		};
		volume=0.34999999;
	};
	class kamaz_65228_Engine_Stop_SoundShader: baseEnginekamaz_65228_SoundShader
	{
		samples[]=
		{
			
			{
				"kamaz_65228\sounds\kamaz_65228_engine_stop",
				1
			}
		};
		volume=0.34999999;
	};
};
class CfgSoundSets
{
	class baseEngine_EXT_SoundSet
	{
		sound3DProcessingType="Vehicle_Ext_3DProcessingType";
		distanceFilter="softVehiclesDistanceFreqAttenuationFilter";
		volumeCurve="vehicleEngineAttenuationCurve";
		volumeFactor=1;
		spatial=1;
		loop=1;
	};
	class basekamaz_65228_Engine_EXT_SoundSet
	{
		sound3DProcessingType="Vehicle_Ext_3DProcessingType";
		distanceFilter="softVehiclesDistanceFreqAttenuationFilter";
		volumeCurve="vehicleEngineAttenuationCurve";
		volumeFactor=1;
		spatial=1;
		loop=0;
	};
	class kamaz_65228_Engine_Ext_Rpm0_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Ext_Rpm0_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_Offload_Ext_Rpm1_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Offload_Ext_Rpm1_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_Ext_Rpm1_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Ext_Rpm1_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_Ext_Rpm2_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Ext_Rpm2_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_Offload_Ext_Rpm2_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Offload_Ext_Rpm2_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_Ext_Rpm3_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Ext_Rpm3_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_Offload_Ext_Rpm3_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Offload_Ext_Rpm3_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_Ext_Rpm4_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Ext_Rpm4_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_Offload_Ext_Rpm4_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Offload_Ext_Rpm4_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_Ext_Rpm5_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Ext_Rpm5_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_Offload_Ext_Rpm5_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Offload_Ext_Rpm5_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_Ext_Broken_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Ext_Broken_SoundShader"
		};
		volumeFactor=1;
	};
	class kamaz_65228_Engine_start_SoundSet: basekamaz_65228_Engine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Start_SoundShader"
		};
		frequencyFactor=0.94999999;
		startDelay=0.75;
		positionOffset[]={0,0,1};
	};
	class kamaz_65228_Engine_failed_start_SoundSet: basekamaz_65228_Engine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Failed_Start_SoundShader"
		};
		frequencyFactor=0.94999999;
		startDelay=0.75;
		positionOffset[]={0,0,1};
	};
	class kamaz_65228_Engine_ext_stop_SoundSet: basekamaz_65228_Engine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"kamaz_65228_Engine_Stop_SoundShader"
		};
		frequencyFactor=0.94999999;
		positionOffset[]={0,0,1};
	};
};
