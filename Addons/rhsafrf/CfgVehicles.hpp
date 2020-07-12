class CfgVehicles {
    // 2S1
    class Tank_F;
    class rhs_2s1tank_base: Tank_F {
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

    // 2S3
    class rhs_2s3tank_base: Tank_F {
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

    // ZSU-23-4
    class APC_Tracked_02_base_F;
    class rhs_zsutank_base: APC_Tracked_02_base_F {
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

    // BTR-70/80
    class Wheeled_APC_F;
    class rhs_btr_base: Wheeled_APC_F {
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
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard";
                shortName = "Dash";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", {"turret", {1}}};
                intercom[] = {"CrewIntercom"};
            };
        };
    };
    // BTR-60
    class rhs_btr60_base: rhs_btr_base {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard";
                shortName = "Dash";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", {"turret", {1}}};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    // BMD-1/2
    class rhs_bmd_base: Tank_F {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"driver", "gunner", {"turret", {0}, {1}, {2}}};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard";
                shortName = "Dash";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", {"turret", {1}}};
                intercom[] = {"CrewIntercom"};
            };
        };
    };
    // 2S25 Sprut-SD
    class rhs_a3spruttank_base: Tank_F {
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
    // BMD-4
    class rhs_bmd4_vdv: rhs_a3spruttank_base {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"driver", "gunner", {"turret", {0,0}, {1}, {2}}};
                limitedPositions[] = {{"turret", {3}, {4}, {5}}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {{"turret", {3}, {4}, {5}}};
                limitedPositions[] = {"driver", "gunner", {"turret", {0,0}, {1}, {2}}};
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
                allowedPositions[] = {"gunner", {"turret", {0,0}}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };

    // BMP-1
    class rhs_bmp1tank_base: Tank_F {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"driver", "gunner", {"turret", {0}, {1}}};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard";
                shortName = "Dash";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", {"turret", {1}}};
                intercom[] = {"CrewIntercom"};
            };
        };
    };
    // BMP-2
    class rhs_bmp_base: rhs_bmp1tank_base {};
    class rhs_bmp1_vdv: rhs_bmp_base {};
    class rhs_bmp2e_vdv: rhs_bmp1_vdv {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"driver", "gunner", {"turret", {0}, {0,0}}};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard";
                shortName = "Dash";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", {"cargo", 6}};
                intercom[] = {"CrewIntercom"};
            };
        };
    };
    // BMP-2K
    class rhs_bmp2_vdv: rhs_bmp2e_vdv {};
    class rhs_bmp2k_vdv: rhs_bmp2_vdv {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"driver", "gunner", "commander"};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {{"cargo", "all"}};
                limitedPositions[] = {"driver", "gunner", "commander"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard";
                shortName = "Dash";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", {"cargo", 2}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2 {
                displayName = "Rear Compartment";
                shortName = "Rear";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"commander", {"cargo", "all"}};
                disabledPositions[] = {{"cargo", 2}};
                intercom[] = {"PaxIntercom"};
            };
        };
    };
    // PRP-3 FO
    class rhs_prp3_vdv: rhs_bmp1_vdv {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew", {"turret", "all"}, {"ffv", {0}, {1}}};
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
    // BRM-1K RV
    class rhs_brm1k_base: rhs_bmp2e_vdv {
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
                allowedPositions[] = {"gunner", "commander", {"turret", "all"}};
                disabledPositions[] = {{"turret", {2}, {3}}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };

    // BMP-3
    class rhs_bmp3tank_base: Tank_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew", {"turret", {1}, {2}}};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = $STR_ACRE_sys_intercom_passengerIntercom;
                shortName = $STR_ACRE_sys_intercom_shortPassengerIntercom;
                allowedPositions[] = {{"cargo", "all"}};
                limitedPositions[] = {"crew", {"turret", {1}, {2}}};
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
                allowedPositions[] = {"gunner", "commander"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };

    // 9K79 (SS-21 Scarab)
    class Truck_F;
    class OTR21_Base: Truck_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = $STR_ACRE_sys_intercom_crewIntercom;
                shortName = $STR_ACRE_sys_intercom_shortCrewIntercom;
                allowedPositions[] = {"crew", {"cargo", "all"}};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard";
                shortName = "Dash";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                intercom[] = {"CrewIntercom"};
            };
        };
    };

    // T-14
    class rhs_t14_base: Tank_F {
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

    // T-72B
    class rhs_a3t72tank_base: Tank_F {
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
                displayName = "Turret Rack";
                shortName = "Rack";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"gunner", "commander"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };
    // T-72B3/T-90
    class rhs_t72bd_tv: rhs_a3t72tank_base {
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

    // T-80
    class rhs_tank_base: Tank_F {
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
                displayName = "Turret Rack";
                shortName = "Rack";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"gunner", "commander"};
                intercom[] = {"CrewIntercom"};
            };
        };
    };
    // T-80BK
    class rhs_t80b: rhs_tank_base {};
    class rhs_t80bk: rhs_t80b {
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
    // T-80BVK
    class rhs_t80bv: rhs_t80b {};
    class rhs_t80bvk: rhs_t80bv {
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
    // T-80UK
    class rhs_t80a: rhs_t80bv {};
    class rhs_t80u: rhs_t80a {};
    class rhs_t80uk: rhs_t80u {
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
    // T-80UM
    class rhs_t80um: rhs_t80u {
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

    // Mi-24
    class Heli_Attack_02_base_F;
    class RHS_Mi24_base: Heli_Attack_02_base_F {
        acre_hasInfantryPhone = 0;
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
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };

    // Mi-8/Mi-17
    class Heli_Light_02_base_F;
    class RHS_Mi8_base: Heli_Light_02_base_F {
        acre_hasInfantryPhone = 0;
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
                allowedPositions[] = {"driver", "copilot"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };

    // Ka-52
    class RHS_Ka52_base: Heli_Attack_02_base_F {
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

    // Mi-28
    class rhs_mi28_base: Heli_Attack_02_base_F {
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

    // Ka-60
    class O_Heli_Light_02_unarmed_F;
    class rhs_ka60_grey: O_Heli_Light_02_unarmed_F {
        acre_hasInfantryPhone = 0;
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
                allowedPositions[] = {"driver", "copilot"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };
};