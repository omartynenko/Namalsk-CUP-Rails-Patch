class CfgPatches
{
	class ocp_searchNreplace_Namalsk_CUP
	{
		fileName = "ocp_searchNreplace_Namalsk_CUP.pbo";
		requiredAddons[] = {"A3_Data_F","A3_Ui_F","A3_Functions_F","A3_UiFonts_F","CUP_Core"};
		requiredVersion = 0.1;
		units[] = {"Land_rails_25","Land_rails_curve_L25_10","Land_rails_curve_R25_10","Land_rails_down_25","Land_rails_down_40","Land_rails_linebreak_concrete","Land_rails_linebreak_iron","Land_rails_passing_10","Land_rails_passing_25","Land_rails_turnout_L","Land_rails_turnout_R","Land_rails_up_25","Land_rails_up_40","Land_rails_v_LB_RE","Land_rails_v_LE_RB","Land_rails_v_SP","Land_rails_v1_LB_RE","Land_rails_v1_LE_RB","Land_railsN_25","Land_railsN_40","Land_railsN_curve_L25_5","Land_railsN_curve_L25_10","Land_railsN_curve_L30_20","Land_railsN_curve_R25_5","Land_railsN_curve_R25_10","Land_railsN_curve_R30_20","Land_railsN_turnout_L","Land_railsN_turnout_R"};
		weapons[] = {};
		vehicles[] = {};
		author = "DonkeyPunch Community Gaming";
	};
};
class CfgFunctions
{
	class ocp_searchNreplace
	{
		class bootstrap 
		{
			file = "\ocp_searchNreplace_Namalsk_CUP\bootstrap";
			class postInit 
			{
				postInit = 1;
			};
		};
	};
};
class CfgVehicles
{
	class Land_Mil_Barracks_i;
	class Land_budova4_winter: Land_Mil_Barracks_i
	{
		scope = 1;
		//model = "\nst\ns_a2\Mil_Barracks_i.p3d";
		model = "\CA\Structures\Mil\Mil_Barracks_i.p3d";
	};
	class House;
	class CUP_A1_Buildings;
	class CUP_A1_budova3 : CUP_A1_Buildings
	{
		//model = "ca\buildings\budova3.p3d";
		model = "\nst\ns_structures\budova3.p3d";
	};
	class Land_Budova3: House
	{
		//model = "\ca\buildings\budova3.p3d";
		model = "\nst\ns_structures\budova3.p3d";
	};
	class Land_cwr2_Budova3: CUP_A1_budova3
	{
		//model = "\ca\buildings\budova3.p3d";
		model = "\nst\ns_structures\budova3.p3d";
	};
	class Land_Dum_mesto2: House
	{
		//model = "\ca\buildings\Dum_mesto2.p3d";
		model = "\ca\buildings\afDum_mesto2.p3d";
		scope = 1;
		displayName = "Burned Out Painted Brick Building (Three Floors)";
		editorPreview = "cup\terrains\cup_terrains_editor_c\data\land_afdum_mesto2.jpg";
	};
	class Land_Budova1: House
	{
		//model = "\ca\buildings\budova1.p3d";
		model = "\nst\ns_jbad\mil\ns_Jbad_mil_barracks.p3d";
		class HitPoints
		{
			class Glass_1_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_1";
				visual = "Glass_1_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_1_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_2_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_2";
				visual = "Glass_2_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_2_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_3_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_3";
				visual = "Glass_3_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_3_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_4_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_4";
				visual = "Glass_4_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_4_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_5_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_5";
				visual = "Glass_5_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_5_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_6_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_6";
				visual = "Glass_6_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_6_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_7_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_7";
				visual = "Glass_7_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_7_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_8_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_8";
				visual = "Glass_8_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_8_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_9_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_9";
				visual = "Glass_9_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_9_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_10_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_10";
				visual = "Glass_10_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_10_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_10_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_11_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_11";
				visual = "Glass_11_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_11_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1ND";
						position = "Glass_11_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2ND";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3ND";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4ND";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5ND";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6ND";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7ND";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SD";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SD";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SD";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SD";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SD";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SD";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SD";
					};
				};
			};
			class Glass_12_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_12";
				visual = "Glass_12_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_12_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1ND";
						position = "Glass_12_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2ND";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3ND";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4ND";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5ND";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6ND";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7ND";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SD";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SD";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SD";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SD";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SD";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SD";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SD";
					};
				};
			};
			class Glass_13_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_13";
				visual = "Glass_13_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_13_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_13_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_14_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_14";
				visual = "Glass_14_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_14_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_14_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_15_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_15";
				visual = "Glass_15_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_15_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_15_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
		};
		class AnimationSources
		{
			class Door_1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
				soundPosition = "Door_1";
			};
			class Door_2: Door_1
			{
				soundPosition = "Door_2";
			};
			class Glass_1_source
			{
				source = "Hit";
				hitpoint = "Glass_1_hitpoint";
				raw = 1;
			};
			class Glass_2_source: Glass_1_source
			{
				hitpoint = "Glass_2_hitpoint";
			};
			class Glass_3_source: Glass_1_source
			{
				hitpoint = "Glass_3_hitpoint";
			};
			class Glass_4_source: Glass_1_source
			{
				hitpoint = "Glass_4_hitpoint";
			};
			class Glass_5_source: Glass_1_source
			{
				hitpoint = "Glass_5_hitpoint";
			};
			class Glass_6_source: Glass_1_source
			{
				hitpoint = "Glass_6_hitpoint";
			};
			class Glass_7_source: Glass_1_source
			{
				hitpoint = "Glass_7_hitpoint";
			};
			class Glass_8_source: Glass_1_source
			{
				hitpoint = "Glass_8_hitpoint";
			};
			class Glass_9_source: Glass_1_source
			{
				hitpoint = "Glass_9_hitpoint";
			};
			class Glass_10_source: Glass_1_source
			{
				hitpoint = "Glass_10_hitpoint";
			};
			class Glass_11_source: Glass_1_source
			{
				hitpoint = "Glass_11_hitpoint";
			};
			class Glass_12_source: Glass_1_source
			{
				hitpoint = "Glass_12_hitpoint";
			};
			class Glass_13_source: Glass_1_source
			{
				hitpoint = "Glass_13_hitpoint";
			};
			class Glass_14_source: Glass_1_source
			{
				hitpoint = "Glass_14_hitpoint";
			};
			class Glass_15_source: Glass_1_source
			{
				hitpoint = "Glass_15_hitpoint";
			};
		};
		class UserActions
		{
			class CloseDoor_1
			{
				condition = "((this animationPhase 'Door_1') >= 0.5)";
				displayName = "Close Doors";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyForPlayer = 0;
				position = "Door_1";
				priority = 0.2;
				radius = 1.5;
				statement = "([this, 'Door_1','Door_1_Handle','Door_1_Handle_2','Door_2'] execVM '\nst\ns_jbad\mil\Scripts\DoorsOneHandle_close.sqf')";
			};
			class OpenDoor_1
			{
				condition = "((this animationPhase 'Door_1') < 0.5)";
				displayName = "Open Doors";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyForPlayer = 0;
				position = "Door_1";
				priority = 0.4;
				radius = 1.5;
				statement = "([this, 'Door_1','Door_1_Handle','Door_1_Handle_2','Door_2'] execVM '\nst\ns_jbad\mil\Scripts\DoorsOneHandle_open.sqf')";
			};
		};
	};
	class Land_Bouda1: House
	{
		//model = "\ca\buildings\bouda1.p3d";
		model = "\nst\ns_structures\seb_bouda1.p3d";
		class AnimationSources
		{
			class dvere_sebb1
			{
				animPeriod = 2;
			};
		};
		class UserActions
		{
			class CloseDoors1
			{
				condition = "this animationPhase 'dvere_sebb1' >= 0.5";
				displayName = "Close door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyForPlayer = 1;
				position = "osa_dvere_sebb1";
				radius = 2.5;
				statement = "this animate ['dvere_sebb1', 0]";
			};
			class OpenDoors1
			{
				condition = "this animationPhase 'dvere_sebb1' < 0.5";
				displayName = "Open door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyForPlayer = 0;
				position = "osa_dvere_sebb1";
				radius = 2.5;
				statement = "this animate ['dvere_sebb1', 1]";
			};
		};
	};
	class Land_Bouda3: House
	{
		//model = "\ca\buildings\bouda3.p3d";
		model = "\nst\ns_structures\seb_bouda3.p3d";
	};
	class Land_Bouda_plech: House
	{
		//model = "\ca\buildings\bouda_plech.p3d";
		model = "\nst\ns_structures\seb_bouda_plech.p3d";
	};
	class Land_Budova5: House
	{
		//model = "\ca\buildings\budova5.p3d";
		model = "\nst\ns_jbad\mil\ns_Jbad_mil_Guardhouse.p3d";
		class HitPoints
		{
			class Glass_1_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_1";
				visual = "Glass_1_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_1_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1ND";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2ND";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3ND";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4ND";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5ND";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6ND";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7ND";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SD";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SD";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SD";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SD";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SD";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SD";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SD";
					};
				};
			};
			class Glass_2_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_2";
				visual = "Glass_2_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_2_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_3_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_3";
				visual = "Glass_3_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_3_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_4_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_4";
				visual = "Glass_4_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_4_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_5_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_5";
				visual = "Glass_5_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_5_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_6_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_6";
				visual = "Glass_6_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_6_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_7_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_7";
				visual = "Glass_7_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_7_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2NN";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3NN";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4NN";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5NN";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6NN";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7NN";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SN";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SN";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SN";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SN";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SN";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SN";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SN";
					};
				};
			};
			class Glass_8_hitpoint
			{
				armor = 0.01;
				material = -1;
				name = "Glass_8";
				visual = "Glass_8_hide";
				passThrough = 0;
				radius = 0.175;
				convexComponent = "Glass_8_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation = "particles";
						type = "BrokenGlass1ND";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					class BrokenGlass2: BrokenGlass1
					{
						type = "BrokenGlass2ND";
					};
					class BrokenGlass3: BrokenGlass1
					{
						type = "BrokenGlass3ND";
					};
					class BrokenGlass4: BrokenGlass1
					{
						type = "BrokenGlass4ND";
					};
					class BrokenGlass5: BrokenGlass1
					{
						type = "BrokenGlass5ND";
					};
					class BrokenGlass6: BrokenGlass1
					{
						type = "BrokenGlass6ND";
					};
					class BrokenGlass7: BrokenGlass1
					{
						type = "BrokenGlass7ND";
					};
					class BrokenGlass1S: BrokenGlass1
					{
						type = "BrokenGlass1SD";
					};
					class BrokenGlass2S: BrokenGlass1
					{
						type = "BrokenGlass2SD";
					};
					class BrokenGlass3S: BrokenGlass1
					{
						type = "BrokenGlass3SD";
					};
					class BrokenGlass4S: BrokenGlass1
					{
						type = "BrokenGlass4SD";
					};
					class BrokenGlass5S: BrokenGlass1
					{
						type = "BrokenGlass5SD";
					};
					class BrokenGlass6S: BrokenGlass1
					{
						type = "BrokenGlass6SD";
					};
					class BrokenGlass7S: BrokenGlass1
					{
						type = "BrokenGlass7SD";
					};
				};
			};
		};
		class AnimationSources
		{
			class Door_1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
				soundPosition = "Door_1";
			};
			class Door_2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 5;
			};
			class Glass_1_source
			{
				source = "Hit";
				hitpoint = "Glass_1_hitpoint";
				raw = 1;
			};
			class Glass_2_source: Glass_1_source
			{
				hitpoint = "Glass_2_hitpoint";
			};
			class Glass_3_source: Glass_1_source
			{
				hitpoint = "Glass_3_hitpoint";
			};
			class Glass_4_source: Glass_1_source
			{
				hitpoint = "Glass_4_hitpoint";
			};
			class Glass_5_source: Glass_1_source
			{
				hitpoint = "Glass_5_hitpoint";
			};
			class Glass_6_source: Glass_1_source
			{
				hitpoint = "Glass_6_hitpoint";
			};
			class Glass_7_source: Glass_1_source
			{
				hitpoint = "Glass_7_hitpoint";
			};
			class Glass_8_source: Glass_1_source
			{
				hitpoint = "Glass_8_hitpoint";
			};
		};
		class UserActions
		{
			class CloseDoor_1
			{
				condition = "((this animationPhase 'Door_1') >= 0.5)";
				displayName = "Close Doors";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyForPlayer = 0;
				position = "Door_1";
				priority = 0.2;
				radius = 1.5;
				statement = "([this, 'Door_1','Door_1_Handle','Door_1_Handle_2'] execVM '\nst\ns_jbad\mil\Scripts\Door_close.sqf')";
			};
			class CloseDoor_2
			{
				condition = "((this animationPhase 'Door_2') >= 0.5)";
				displayName = "Use Computer and Close Cell Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyForPlayer = 1;
				position = "Door_2";
				priority = 0.2;
				radius = 1.5;
				statement = "([this, 'ns_jbad_keyboard','ns_jbad_electric_door_open','Door_2'] execVM '\nst\ns_jbad\mil\Scripts\Cell_Door_Close.sqf')";
			};
			class OpenDoor_1
			{
				condition = "((this animationPhase 'Door_1') < 0.5)";
				displayName = "Open Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyForPlayer = 0;
				position = "Door_1";
				priority = 0.4;
				radius = 1.5;
				statement = "([this, 'Door_1','Door_1_Handle','Door_1_Handle_2'] execVM '\nst\ns_jbad\mil\Scripts\Door_open.sqf')";
			};
			class OpenDoor_2
			{
				condition = "((this animationPhase 'Door_2') < 0.5)";
				displayName = "Use Computer and Open Cell Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyForPlayer = 1;
				position = "Door_2";
				priority = 0.4;
				radius = 1.5;
				statement = "([this, 'ns_jbad_keyboard','ns_jbad_electric_door_open','Door_2'] execVM '\nst\ns_jbad\mil\Scripts\Cell_Door_Open.sqf')";
			};
		};
	};
	class Land_rails_25: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_25.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_curve_L25_10: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_curve_L25_10.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_curve_R25_10: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_curve_R25_10.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_down_25: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_down_25.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_down_40: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_down_40.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_linebreak_concrete: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_linebreak_concrete.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_linebreak_iron: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_linebreak_iron.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_passing_10: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_passing_10.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_passing_25: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_passing_25.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_turnout_L: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_turnout_L.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_turnout_R: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_turnout_R.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_up_25: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_up_25.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_up_40: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_up_40.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_v_LB_RE: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_v_LB_RE.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_v_LE_RB: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_v_LE_RB.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_v_SP: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_v_SP.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_v1_LB_RE: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_v1_LB_RE.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_rails_v1_LE_RB: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\rails_v1_LE_RB.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_railsN_25: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\railsN_25.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_railsN_40: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\railsN_40.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_railsN_curve_L25_5: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\railsN_curve_L25_5.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_railsN_curve_L25_10: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\railsN_curve_L25_10.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_railsN_curve_L30_20: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\railsN_curve_L30_20.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_railsN_curve_R25_5: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\railsN_curve_R25_5.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_railsN_curve_R25_10: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\railsN_curve_R25_10.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_railsN_curve_R30_20: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\railsN_curve_R30_20.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_railsN_turnout_L: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\railsN_turnout_L.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
	class Land_railsN_turnout_R: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\Ca\Structures\Rail\Railway\railsN_turnout_R.p3d";
		icon = "iconObject_1x5";
		editorCategory = "EdCat_CUP_Structures_EU";
		editorSubcategory = "EdSubcat_Trains";
	};
};
