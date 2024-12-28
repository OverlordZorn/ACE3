#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = ECSTRING(common,ACETeam);
        authors[] = {"OverlordZorn [CVO]"};
        url = ECSTRING(main,URL);

        VERSION_CONFIG;
        requiredVersion = REQUIRED_VERSION;

        requiredAddons[] = {
            "ace_interact_menu"
        };
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};

#include "CfgFunctions.hpp"
#include "XEH\CfgXEH.hpp"

#include "Baseclass.hpp"

#include "CfgVehicles.hpp"

class CfgWeapons
{
    #include "compat_vanilla\Uniforms.hpp"
};