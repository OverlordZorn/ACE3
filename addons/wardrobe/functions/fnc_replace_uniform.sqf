#include "../script_component.hpp"

/*
 * Author: OverlordZorn
 * Function to replace a persons Uniform while maintaining the content of the uniform.
 *
 * Arguments:
 * 0: Unit <Object>
 * 1: Current Variant <CONFIG>
 * 2: Desired Variant <CONFIG>
 * 2: Type of Wearable Container <STRING>
 *
 * Return Value:
 * none
 *
 * Example:
 * [_player, _cfg_origin, _cfg_tgt, _case] call ace_wardrobe_fnc_replace_uniform
 *
 * Public: No
 */

params ["_player", "_cfg_origin", "_cfg_tgt", "_case"];


toFixed 0;
private _magazineDetails = (magazinesAmmoFull _player) apply { [_x#0, _x#-2, _x#-1] };
private _loadout = [_player] call CBA_fnc_getLoadout;


//// Handle Special Cases - Pre Replace
// ACE Intel Items
private _hasDocument = _magazineDetails findIf { _x#0 == "acex_intelitems_document"} > -1;
private _hasNotepad =  _magazineDetails findIf { _x#0 == "acex_intelitems_notepad" } > -1;
private _hasPhoto =    _magazineDetails findIf { _x#0 == "acex_intelitems_photo"   } > -1;
if (_hasDocument) then { _hasDocument = [_player, "acex_intelitems_document" ] call FUNC(getMagIDs) apply { [_x] call FUNC(getIndexFromMagID) } };
if (_hasNotepad)  then { _hasNotepad  = [_player, "acex_intelitems_notepad" ]  call FUNC(getMagIDs) apply { [_x] call FUNC(getIndexFromMagID) } };
if (_hasPhoto)    then { _hasPhoto    = [_player, "acex_intelitems_photo" ]    call FUNC(getMagIDs) apply { [_x] call FUNC(getIndexFromMagID) } };


//// Replace Wearable
// Change Wearable
switch (_case) do {
    case "UNIFORM":  { _loadout # 0 # 3 set [0, configName _cfg_tgt]; };
    case "VEST":     { _loadout # 0 # 4 set [0, configName _cfg_tgt]; };
    case "BACKPACK": { _loadout # 0 # 5 set [0, configName _cfg_tgt]; };
    default { ERROR_1("Case undefined: %1",_case); };
};

// Apply new Loadout
[_player, _loadout] call CBA_fnc_setLoadout;

//// Handle Special Cases - Post Replace
// ACE Intel Items
if (_hasDocument isEqualType []) then { { [_x, _hasDocument # _forEachIndex] call FUNC(setIndexForMagID); } forEach ( [_player, "acex_intelitems_document" ] call FUNC(getMagIDs) ); };
if (_hasNotepad  isEqualType []) then { { [_x, _hasNotepad  # _forEachIndex] call FUNC(setIndexForMagID); } forEach ( [_player, "acex_intelitems_notepad"  ] call FUNC(getMagIDs) ); };
if (_hasPhoto    isEqualType []) then { { [_x, _hasPhoto    # _forEachIndex] call FUNC(setIndexForMagID); } forEach ( [_player, "acex_intelitems_photo"    ] call FUNC(getMagIDs) ); };