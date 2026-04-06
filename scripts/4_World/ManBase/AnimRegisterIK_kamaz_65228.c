modded class ModItemRegisterCallbacks
{
	override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
		super.RegisterHeavy(pType, pBehavior);
	
		
		pType.AddItemInHandsProfileIK("kamaz_65228_wheel", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,			"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_driver.anm");
		
		pType.AddItemInHandsProfileIK("kamaz_65228_wheel_destroyed", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,				"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
		
		pType.AddItemInHandsProfileIK("kamaz_65228_doors_driver", 	"dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,	"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_driver.anm");
		
    	pType.AddItemInHandsProfileIK("kamaz_65228_doors_codriver", 				"dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,	"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_codriver.anm");
		
		pType.AddItemInHandsProfileIK("kamaz_65228_doors_trunk", 	"dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,	"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_driver.anm");
		
		pType.AddItemInHandsProfileIK("kamaz_65228_doors_hood", 	"dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,	"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_driver.anm");
		
		
    }	
}