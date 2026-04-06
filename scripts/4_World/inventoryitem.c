modded class SeaChest extends Container_Base
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};

modded class Shovel extends Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};

modded class WoodAxe extends Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};

modded class Barrel_ColorBase extends Container_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		//AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
};

modded class CanisterGasoline extends Bottle_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};

class kamaz_65228_Wheel extends CarWheel
{
	override void EEKilled(Object killer)
	{
		string newWheel = "";
		switch( GetType() )
		{
			case "kamaz_65228_Wheel":
				newWheel = "kamaz_65228_Wheel_destroyed";
			break;
		}
		if ( newWheel != "" )
		{
			ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
			lambda.SetTransferParams(true, true, true);
			GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
		}
	}

	override int GetMeleeTargetType()
	{
		return EMeleeTargetType.NONALIGNABLE;
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionDetach);
		AddAction(ActionAttachOnSelection);
	}
}
class kamaz_65228_wheel_destroyed  extends ItemBase {};
class kamaz_65228_doors_driver extends CarDoor {};
class kamaz_65228_doors_codriver extends CarDoor {};
class kamaz_65228_doors_hood extends CarDoor {};
class kamaz_65228_doors_trunk extends CarDoor {};
