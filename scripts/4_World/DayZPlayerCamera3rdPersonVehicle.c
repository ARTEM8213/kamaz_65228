modded class DayZPlayerCamera3rdPersonVehicle extends DayZPlayerCameraBase
{
	void DayZPlayerCamera3rdPersonVehicle (DayZPlayer pPlayer, HumanInputController pInput)
	{
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "kamaz_65228")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance 		= 11.0; 
		m_CameraOffsetMS	= "0.0 1.55 0.0";
		}

		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "kamaz_65228_camo")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance 		= 11.0; 
		m_CameraOffsetMS	= "0.0 1.55 0.0";
		}

		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "BTR_80_P")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance 		= 9.0; 
		m_CameraOffsetMS	= "0.0 1.55 0.0";
		}

		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "BTR_80_P_camo")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance 		= 9.0; 
		m_CameraOffsetMS	= "0.0 1.55 0.0";
		}

		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "BTR_80_P_camo2")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance 		= 9.0; 
		m_CameraOffsetMS	= "0.0 1.55 0.0";
		}

		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "BTR_80_camo2")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance 		= 9.0; 
		m_CameraOffsetMS	= "0.0 1.55 0.0";
		}

		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "BTR_80_rust")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance 		= 9.0; 
		m_CameraOffsetMS	= "0.0 1.55 0.0";
		}

		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "BTR_80_P_rust")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance 		= 9.0; 
		m_CameraOffsetMS	= "0.0 1.55 0.0";
		}		
	}
}
