/*
  * Author: Brandon (TCVM)
  * Determines which function to use to put the first value in the vehicle array
  *
  * Arguments:
  * 0. Group <GROUP>
  * 1. Array of vehicles that can be added to <ARRAY>
  *
  * Return Value:
  * Successfully added group to a vehicle
  *
  * Example:
  * [OPF_GROUP_ASL] call potato_utilityFunctions_fnc_moveGroupInVehicle;
  *
  * Public: Yes
  */
#include "script_component.hpp"
params["_group", "_vehicles"];

{
    [_x, _vehicles] call FUNC(moveUnitInVehicle);
} forEach units _group;

