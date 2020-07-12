class CfgVehicles {
    // Strykers
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
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
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
                allowedPositions[] = {"driver", "commander", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
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
                limitedPositions[] = {{"cargo", "all"}, {"ffv", {2}, {3}}};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {{"cargo", "all"}, {"ffv", {2}, {3}}};
                limitedPositions[] = {"crew", {"ffv", {1}}};
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
                allowedPositions[] = {"gunner", {"ffv", {1}}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
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
                limitedPositions[] = {{"cargo", "all"}, {"ffv", {3}, {4}}};
                numLimitedPositions = 3;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {{"cargo", "all"}, {"ffv", {3}, {4}}};
                limitedPositions[] = {"crew"};
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
                allowedPositions[] = {"gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
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
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC110";
                mountedRadio = "ACRE_PRC152";
                allowedPositions[] = {{"ffv", {1}}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
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
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
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
                allowedPositions[] = {"commander", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
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
                allowedPositions[] = {{"cargo", "all"}};
                limitedPositions[] = {"crew"};
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
                allowedPositions[] = {"commander", "driver"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };

    // Abrams
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
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"commander", "gunner", {"turret", "all"}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };

    // M113
    class APC_Tracked_02_base_F;
    class rhsusf_m113tank_base: APC_Tracked_02_base_F {
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"CrewIntercom"};
        acre_infantryPhoneControlActions[] = {"CrewIntercom"};
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 3;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
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
                allowedPositions[] = {"driver"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };

    // Caiman MRAP (M1220/M1230)
    class Truck_01_base_F;
    class rhsusf_caiman_base: Truck_01_base_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_intercom;
                shortName = $STR_ACRE_sys_intercom_intercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 12;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", {"cargo", 0, 1, 8}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };
    // CROWS
    class rhsusf_caiman_GPK_base: rhsusf_caiman_base {};
    class rhsusf_M1220_M2_usarmy_d: rhsusf_caiman_GPK_base {};
    class rhsusf_M1220_M153_M2_usarmy_d: rhsusf_M1220_M2_usarmy_d {
        class AcreIntercoms: AcreIntercoms {
            class CrewIntercom: CrewIntercom {
                allowedPositions[] = {"crew"};
            };
        };
        class AcreRacks: AcreRacks {
            class Rack_1: Rack_1 {
                allowedPositions[] = {"driver", "gunner", {"cargo", 0, 7}};
            };
            class Rack_2: Rack_2 {
                allowedPositions[] = {"driver", "gunner", {"cargo", 0, 7}};
            };
        };
    };
    // Ambulance
    class rhsusf_M1220_usarmy_d: rhsusf_caiman_base {};
    class rhsusf_M1230a1_usarmy_d: rhsusf_M1220_usarmy_d {
        class AcreRacks: AcreRacks {
            class Rack_1: Rack_1 {
                allowedPositions[] = {"driver", {"cargo", 0}};
            };
            class Rack_2: Rack_2 {
                allowedPositions[] = {"driver", {"cargo", 0}};
            };
        };
    };

    // RG-33L MRAP (M1232/M1237)
    class MRAP_01_base_F;
    class rhsusf_RG33L_base: MRAP_01_base_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_intercom;
                shortName = $STR_ACRE_sys_intercom_intercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 12;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", {"cargo", 0}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };

    // RG-33 MRAP (M1238)
    class MRAP_01_base_F;
    class rhsusf_RG33_base: MRAP_01_base_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_intercom;
                shortName = $STR_ACRE_sys_intercom_intercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 12;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew", {"cargo", 0, 1, 4}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };
    class rhsusf_RG33_CROWS_base: rhsusf_RG33_base {
        class AcreRacks: AcreRacks {
            class Rack_1: Rack_1 {
                allowedPositions[] = {"crew", {"cargo", 0, 3}};
            };
            class Rack_2: Rack_2 {
                allowedPositions[] = {"crew", {"cargo", 0, 3}};
            };
        };
    };

    // RG-33L M1239
    class rhsusf_M1239_base: MRAP_01_base_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_intercom;
                shortName = $STR_ACRE_sys_intercom_intercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {{"cargo", 0, 1}, {"ffv", {0}}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };
    class rhsusf_M1239_CROWS_base: rhsusf_M1239_base {
        class AcreRacks: AcreRacks {
            class Rack_1: Rack_1 {
                allowedPositions[] = {"gunner", {"cargo", 0, 1}};
            };
            class Rack_2: Rack_2 {
                allowedPositions[] = {"gunner", {"cargo", 0, 1}};
            };
        };
    };

    // MATV MRAP (M1240/M1245)
    class rhsusf_MATV_base: MRAP_01_base_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_intercom;
                shortName = $STR_ACRE_sys_intercom_intercom;
                allowedPositions[] = {"crew", {"cargo", "all"}};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {{"turret", "all"}, {"cargo", 1}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };
    class rhsusf_MATV_armed_base: rhsusf_MATV_base {};
    class rhsusf_MATV_OGPK_base: rhsusf_MATV_armed_base {
        class AcreRacks: AcreRacks {
            class Rack_1: Rack_1 {
                allowedPositions[] = {{"turret", {1}}, {"cargo", 1}};
            };
            class Rack_2: Rack_2 {
                allowedPositions[] = {{"turret", {1}}, {"cargo", 1}};
            };
        };
    };
    class rhsusf_MATV_CROWS_base: rhsusf_MATV_armed_base {
        class AcreRacks: AcreRacks {
            class Rack_1: Rack_1 {
                allowedPositions[] = {{"turret", {1}}, {"cargo", 0}};
            };
            class Rack_2: Rack_2 {
                allowedPositions[] = {{"turret", {1}}, {"cargo", 0}};
            };
        };
    };
    class rhsusf_MATV_SOF_CROWS_base: rhsusf_MATV_CROWS_base {
        class AcreRacks: AcreRacks {
            class Rack_1: Rack_1 {
                allowedPositions[] = {{"turret", {1}}, {"cargo", 1}};
            };
            class Rack_2: Rack_2 {
                allowedPositions[] = {{"turret", {1}}, {"cargo", 1}};
            };
        };
    };

    // Cougar MRAP (CAT 1)
    class rhsusf_Cougar_base: MRAP_01_base_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_intercom;
                shortName = $STR_ACRE_sys_intercom_intercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 12;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC110";
                mountedRadio = "ACRE_PRC152";
                allowedPositions[] = {{"cargo", 0, 4}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };

    // MRZR4
    class rhsusf_mrzr_base: MRAP_01_base_F {
        class AcreIntercoms {};
        class AcreRacks {};
    };

    // HMMWV
    class rhsusf_hmmwe_base: MRAP_01_base_F {
        class AcreIntercoms {};
        class AcreRacks {
            class Rack_1 {
                displayName = "Dash Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", {"ffv", {0}}};
            };
            class Rack_2 {
                displayName = "Dash Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC110";
                allowedPositions[] = {"driver", {"ffv", {0}}};
            };
        };
    };

    // M142 HIMARS
    class rhsusf_himars_base: Truck_01_base_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };

    // M109
    class MBT_01_arty_base_F;
    class rhsusf_m109tank_base: MBT_01_arty_base_F {
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
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"gunner", "commander"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };


    // Mk V Special Operations Craft
    class RHS_Ship;
    class rhsusf_mkvsoc: RHS_Ship {
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
                allowedPositions[] = {{"cargo", "all"}};
                limitedPositions[] = {"crew"};
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
                allowedPositions[] = {"driver", "commander", {"turret", {5}}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };


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
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
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
                allowedPositions[] = {"driver", "copilot"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
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
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
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
                allowedPositions[] = {"driver", "copilot"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
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
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
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
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
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
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
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
                allowedPositions[] = {"driver", "copilot", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
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
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
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
                allowedPositions[] = {"driver", "copilot", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
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
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_2: Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };
};