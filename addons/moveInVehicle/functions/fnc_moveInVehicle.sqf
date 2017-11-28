/*
  * Author: Brandon (TCVM)
  * Determines which function to use to put the first value in the vehicle array
  *
  * Arguments:
  * 0. Group or Unit <GROUP, OBJECT>
  * 1. Array of vehicles that can be added to <ARRAY>
  *
  * Return Value:
  * Successfully added first parameter to a vehicle
  *
  * Example:
  * [OPF_GROUP_ASL] call potato_moveInVehicle_fnc_moveInVehicle;
  * [OPF_|UNIT_A1_FTL] call potato_moveInVehicle_fnc_moveInVehicle;
  *
  * Public: Yes
  */
#include "script_component.hpp"
params["_object", "_vehicles"];

if (typeName _object == "GROUP") exitWith {
    [_object, _vehicles] call FUNC(moveGroupInVehicle);
};
if (typeName _object == "OBJECT") exitWith {
    [_object, _vehicles] call FUNC(moveUnitInVehicle);
};

systemChat text format["[POTATO] Can't move %1 into vehicle, it is not valid", str(_object)];
diag_log text format["[POTATO] Can't move %1 into vehicle, it is not valid", str(_object)];
false

