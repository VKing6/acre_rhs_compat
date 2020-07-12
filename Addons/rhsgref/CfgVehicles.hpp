class CfgVehicles {
    class Wheeled_APC_F;
    class rhsgref_BRDM2: Wheeled_APC_F {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_intercom;
                shortName = $STR_ACRE_sys_intercom_intercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "commander"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };
    class rhsgref_BRDM2_ATGM: rhsgref_BRDM2 {
        class AcreRacks: AcreRacks {
            class Rack_1: Rack_1 {
                allowedPositions[] = {"driver", "gunner"};
            };
            class Rack_2: Rack_2 {
                allowedPositions[] = {"driver", "gunner"};
            };
        };
    };
};