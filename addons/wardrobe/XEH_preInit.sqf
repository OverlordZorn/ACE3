#include "script_component.hpp"

[
    QSET(enable_action),
    "CHECKBOX",
    SETLSTRING(enable_action),
    [LSTRING(set_cat_main)],
    true,
    1,
    {},
    false
] call CBA_fnc_addSetting;

[
    QSET(enable_contextMenu),
    "CHECKBOX",
    SETLSTRING(enable_contextMenu),
    [LSTRING(set_cat_main)],
    true,
    1,
    FUNC(enable_contextMenu),
    true
] call CBA_fnc_addSetting;