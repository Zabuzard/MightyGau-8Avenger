class cfgPatches
{
	class AlZab_mighty_gau8_rhs_a10a
	{
		units[] = {"RHS_A10"};
		weapons[] = {};
		requiredVersion = 1.24;
		requiredAddons[] = {"A3_Weapons_F", "A3_Air_F", "AlZab_mighty_gau8_avenger", "RHS_US_A2_AirImport"};
		author[] = {"[W] Alexus, [W] Zabuza"};
	};
};

class CfgVehicles
{
	class Air;
	class Plane;
	class Plane_Base_F;
	class Plane_CAS_01_base_F;
	class RHS_A10 : Plane_CAS_01_base_F
	{
		weapons[] = {
			"Gatling_30mm_Plane_CAS_01_F",
			"rhs_weap_SidewinderLauncher",
			"rhs_weap_agm65",
			"rhs_weap_FFARLauncher",
			"rhs_weap_gbu12",
			"CMFlareLauncher"
		};
		magazines[] = {
			"rhs_mag_agm65",
			"rhs_mag_agm65",
			"rhs_mag_Sidewinder_2",
			"rhs_mag_gbu12_4",
			"rhs_mag_ANALQ131",
			"rhs_mag_FFAR_14",
			"1174Rnd_GAU8_30mm_Plane_CAS_01_F",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
};