class CfgVehicles {
    class Wheeled_APC_F;
    class rhsusf_stryker_base: Wheeled_APC_F {
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
    class rhsusf_stryker_m1126_m2_base: rhsusf_stryker_m1126_base {};
    // CEV
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
};