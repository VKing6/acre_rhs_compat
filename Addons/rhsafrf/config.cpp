class CfgPatches {
    class vk_acre_rhs_compat_rhsafrf {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.64;
        requiredAddons[] = {
            "rhs_c_bmd","rhs_c_bmp","rhs_c_bmp3","rhs_c_sprut",
            "rhs_c_a2port_armor","rhs_c_2s1","rhs_c_2s3","rhs_c_t14","rhs_c_t72","rhs_c_tanks",
            "rhs_c_btr","rhs_c_rva",
            "rhs_c_a2port_air","rhs_c_mi28","rhs_c_a3retex"
        };
        author = "VKing";
    };
};

#include "CfgVehicles.hpp"