if (isServer) then {

private _repleacearray = [

	["rails_25.p3d", "Land_rails_25", 0],
	["rails_curve_L25_10.p3d", "Land_rails_curve_L25_10", 0],
	["rails_curve_R25_10.p3d", "Land_rails_curve_R25_10", 0],
	["rails_down_25.p3d", "Land_rails_down_25", 0],              
	["rails_down_40.p3d", "Land_rails_down_40", 0],
	["rails_linebreak_concrete.p3d", "Land_rails_linebreak_concrete", 0],
	["rails_linebreak_iron.p3d", "Land_rails_linebreak_iron", 0],
	["rails_passing_10.p3d", "Land_rails_passing_10", 0],			   
	["rails_passing_25.p3d", "Land_rails_passing_25", 0],	
	["rails_turnout_L.p3d", "Land_rails_turnout_L", 0],		
	["rails_turnout_R.p3d", "Land_rails_turnout_R", 0], 
	["rails_up_25.p3d", "Land_rails_up_25", 0], 
	["rails_up_40.p3d", "Land_rails_up_40", 0],
	//["rails_v_LB_RE.p3d", "Land_rails_v_LB_RE", 0], 
	//["rails_v_LE_RB.p3d", "Land_rails_v_LE_RB", 0],
	//["rails_v_SP.p3d", "Land_rails_v_SP", 0],
	//["rails_v1_LB_RE.p3d", "Land_rails_v1_LB_RE", 0],
	//["rails_v1_LE_RB.p3d", "Land_rails_v1_LE_RB", 0],
	["railsN_25.p3d", "Land_railsN_25", 0],
	["railsN_40.p3d", "Land_railsN_40", 0],
	["railsN_curve_L25_5.p3d", "Land_railsN_curve_L25_5", 0],
	["railsN_curve_L25_10.p3d", "Land_railsN_curve_L25_10", 0],
	["railsN_curve_L30_20.p3d", "Land_railsN_curve_L30_20", 0],
	["railsN_curve_R25_5.p3d", "Land_railsN_curve_R25_5", 0],
	["railsN_curve_R25_10.p3d", "Land_railsN_curve_R25_10", 0],
	["railsN_curve_R30_20.p3d", "Land_railsN_curve_R30_20", 0],
	["railsN_turnout_L.p3d", "Land_railsN_turnout_L", 0],
	["railsN_turnout_R.p3d", "Land_railsN_turnout_R", 0]
];

{
	private _a = ((getModelInfo _x) select 0);
	private _c = _repleacearray select {_a == _x select 0};
	
	if !( _c isEqualTo []) then {
	
		private _Replacement = ([(_c select 0) select 1] call BIS_fnc_simpleObjectData) select 1;

		private _position = getPosWorld _x;
		private _vectorDirUp = [vectorDir _x, vectorUp _x];

		hideObjectGlobal  _x;
		private _myReplacement = createSimpleObject [_Replacement, _position];
		_myReplacement setVectorDirAndUp _vectorDirUp;
		_myReplacement enableSimulationGlobal false;
	};

} forEach nearestTerrainObjects 
	[
		[worldSize/2, worldSize/2],
		["Railway"],
		worldSize
	];
};
