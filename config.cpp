// Corrected DayZ 1.28 Configuration for kamaz 65228

class cfgVehicles {
    class BaseCar;
    class KAMAZ : BaseCar {
        // Proper slot name matching
        
        class Transport {
            inventorySlots[] = {"slot_hood", "slot_trunk", "slot_doors", "slot_cargo"};
            cargoSlots[] = {"cargo_1", "cargo_2"};
        };

        // Corrected selection values
        selectionHood = "doors_hood";

        // Fixed DamageSystem inheritance
        class DamageSystem : BaseCar {
            class Health {
                hitPoints = 100;
                // Additional health configurations
            };
        };

        // Proper inventory slot assignments
        class Slots {
            class slot_hood {
                type = 1;
            };
            class slot_trunk {
                type = 2;
            };
            class slot_doors {
                type = 3;
            };
            class slot_cargo {
                type = 4;
            };
        };
    };
};

// All wheel/door/cargo definitions with matching names and selections
class cfgWeapons {
    class BaseWeapon;
    class KAMAZ_Wheel : BaseWeapon {
        displayName = "KAMAZ Wheel";
    };
    class KAMAZ_Door : BaseWeapon {
        displayName = "KAMAZ Door";
    };
    class KAMAZ_Cargo : BaseWeapon {
        displayName = "KAMAZ Cargo";
    };
}