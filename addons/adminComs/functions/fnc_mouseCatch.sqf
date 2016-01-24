//potato_adminComs_fnc_mouseCatch

#include "script_component.hpp"
TRACE_1("params",_this);

disableSerialization;

_chatList = (findDisplay 49) displayCtrl 840431;
_replyButton = (findDisplay 49) displayCtrl 840432;

if (!([] call EFUNC(core,isAuthorized))) exitWith {
    _chatList ctrlShow false;
    _chatList ctrlEnable false;
    _replyButton ctrlShow false;
    _replyButton ctrlEnable false;
};

_chatList ctrlShow true;
_chatList ctrlEnable true;
_replyButton ctrlShow true;
_replyButton ctrlEnable true;

lbClear _chatList;

_index = -1;
{
    _x params ["_time", "_msg", "_from", "_to"];
    _min = floor (_time / 60);
    _sec = floor (_time % 60);
    _min = if (_min < 10) then {format ["0%1", _min]} else {_min};
    _sec = if (_sec < 10) then {format ["0%1", _sec]} else {_sec};
    _log = format ["%1:%2 [%3>%4] %5", _min, _sec, _from, _to, _msg];
    _index = _chatList lbAdd _log;
    _chatList lbSetTooltip [_index, _msg];
} forEach GVAR(logs);

_index = _chatList lbAdd "";
_chatList lbSetCurSel _index;

_replyButton ctrlSetText "Reply: ";
