/*
 * Post-Initialization
 *
 * www.DonkeyPunch.INFO
 * © 2015 DirtySanchez
 *
 * 
 */
 /*
include map content.
Call compile preprocess'ing them is MUCH better. 
Creating spawn/execvm's IS BAD unless the script is a long running one.
If you try call compile and it all goes to shit, use execvm =P
*/

diag_log "Starting OCP search and replace Server-Editor-SP";

if(!hasInterface && !isDedicated)exitWith{};

if(!hasInterface || isServer)then{call compile preprocessFileLineNumbers "\ocp_searchNreplace_Namalsk_CUP\mapedits\eXpochSearchNDestroy.sqf";};
