/*
  * Author: Brandon (TCVM)
  * Determines which function to use to put the first value in the vehicle array
  *
  * Arguments:
  * 0. Unit <OBJECT>
  * 1. Array of vehicles that can be added to <ARRAY>
  *
  * Return Value:
  * Successfully unit to a vehicle
  *
  * Example:
  * [OPF_UNIT_A1_FTL] call potato_utilityFunctions_fnc_moveUnitInVehicle;
  *
  * Public: Yes
  */
#include "script_component.hpp"
params["_unit", "_vehicles"];

{
    if (_unit moveInAny _x) exitWith {true};
} forEach _vehicles;
systemChat format["[POTATO-MoveGroupInVehicle] Not enough space in vehicles to fit %1", str(_unit)];
diag_log text format["[POTATO-MoveGroupInVehicle] Not enough space in vehicles to fit %1", str(_unit)];
false

