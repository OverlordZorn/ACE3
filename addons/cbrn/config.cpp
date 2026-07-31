#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {QGVAR(moduleSettings)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common", "ace_interact_menu"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"JetfireBlack", "OverlordZorn"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"

#include "ACE_CBRN_PPE.hpp"
