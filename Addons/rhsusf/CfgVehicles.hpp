class CfgVehicles {
    class Wheeled_APC_F;
    class rhsusf_stryker_base: Wheeled_APC_F {
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"CrewIntercom"};
        acre_infantryPhoneControlActions[] = {"CrewIntercom"};
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "commander", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "commander", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };
    // ICV
    class rhsusf_stryker_m1126_base: rhsusf_stryker_base {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew", {"ffv", {1}}};
                masterPositions[] = {"gunner", {"ffv", {1}}};
                limitedPositions[] = {{"ffv", {2}, {3}}};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"gunner", {"ffv", {1}}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"gunner", {"ffv", {1}}};
                intercom[] = {"CrewIntercom"};
            };
        };
    };
    // RV
    class rhsusf_stryker_m1127_base: rhsusf_stryker_m1126_base {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                masterPositions[] = {"gunner"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", {3}, {4}}};
                numLimitedPositions = 3;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"gunner"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };
    // CEV
    class rhsusf_stryker_m1126_m2_base: rhsusf_stryker_m1126_base {};
    class rhsusf_stryker_m1132_m2_base: rhsusf_stryker_m1126_m2_base {
        class AcreIntercoms: AcreIntercoms {};
        class AcreRacks: AcreRacks {};
    };
    // ATGM
    class rhsusf_stryker_m1134_base: rhsusf_stryker_m1126_m2_base {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew", {"ffv", "all"}};
                masterPositions[] = {{"ffv", {1}}};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC110";
                mountedRadio = "ACRE_PRC152";
                allowedPositions[] = {{"ffv", {1}}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {{"ffv", {1}}};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    // Bradley
    class APC_Tracked_03_base_F;
    class RHS_M2A2_Base: APC_Tracked_03_base_F {
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"CrewIntercom"};
        acre_infantryPhoneControlActions[] = {"CrewIntercom"};
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"commander", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"commander", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    // M1117 ASV
    class rhsusf_M1117_base: Wheeled_APC_F {
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"CrewIntercom"};
        acre_infantryPhoneControlActions[] = {"CrewIntercom"};
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"commander", "driver"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"commander", "driver"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    // M1
    class MBT_01_base_F;
    class rhsusf_m1a1tank_base: MBT_01_base_F {
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"CrewIntercom"};
        acre_infantryPhoneControlActions[] = {"CrewIntercom"};
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"commander", "gunner", {"turret", "all"}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"commander", "gunner", {"turret", "all"}};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    // M113

    


    // UH-60
    class Heli_Transport_01_base_F;
    class RHS_UH60_Base: Heli_Transport_01_base_F {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 4;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    // CH-47
    class Heli_Transport_02_base_F;
    class RHS_CH_47F_base: Heli_Transport_02_base_F {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 4;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    // AH-64
    class Heli_Attack_01_base_F;
    class RHS_AH64_base: Heli_Attack_01_base_F {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    // AH-1
    class RHS_AH1Z_base: Heli_Attack_01_base_F {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    // UH-1
    class Heli_Light_03_base_F;
    class RHS_UH1_Base: Heli_Light_03_base_F {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 4;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    //CH-53
    class Helicopter_Base_H;
    class rhsusf_CH53E_USMC: Helicopter_Base_H {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 4;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    // H-6
    class RHS_MELB_base: Helicopter_Base_H {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 4;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Radio";
                shortName = "Upper";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Radio";
                shortName = "Lower";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };
};