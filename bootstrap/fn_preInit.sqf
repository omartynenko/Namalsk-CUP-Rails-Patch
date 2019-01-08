/*
 * Pre-Initialization
 *
 * www.DonkeyPunch.INFO
 * © 2015 DirtySanchez
 *
 * 
 */
private _server = (!hasInterface || isServer);
private _client = (isPlayer && hasInterface);
private _hc = (!hasInterface && !isDedicated);

if(_server)then{};
if(_client)then{};
if(_hc)exitWith{};
