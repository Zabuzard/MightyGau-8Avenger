class cfgPatches
{
	class AlZab_mighty_gau8_rhs_a10a
	{
		units[] =
		{
			"RHS_A10",
			"RHS_A10_AT"
		};
		weapons[] = {};
		requiredVersion = 1.24;
		requiredAddons[] = {"A3_Weapons_F", "A3_Air_F", "A3_Air_F_EPC", "AlZab_mighty_gau8_avenger", "RHS_US_A2_AirImport", "rhsusf_a2port_air", "rhsusf_main"};
		author = "[W] Zabuza";
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
		weapons[] =
		{
			"rhs_weap_MASTERSAFE",
			"Gatling_30mm_Plane_CAS_01_F",
			"rhs_weap_SidewinderLauncher",
			"rhs_weap_agm65",
			"rhs_weap_FFARLauncher",
			"rhs_weap_gbu12",
			"rhsusf_weap_CMFlareLauncher"
		};
		magazines[] =
		{
			"rhs_pod_empty",
			"rhs_pod_lau68",
			"rhs_pod_AGM65",
			"rhs_mag_gbu12",
			"rhs_mag_gbu12",
			"rhs_pod_empty",
			"rhs_mag_gbu12",
			"rhs_mag_gbu12",
			"rhs_pod_AGM65",
			"rhs_pod_lau68",
			"rhs_mag_ANALQ131",
			"rhs_mag_Sidewinder_a10_2",
			"rhs_mag_FFAR_A10_14",
			"rhs_mag_agm65",
			"rhs_mag_agm65",
			"1174Rnd_GAU8_30mm_Plane_CAS_01_F",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
	
	class RHS_A10_AT : RHS_A10
	{
		weapons[] =
		{
			"rhs_weap_MASTERSAFE",
			"Gatling_30mm_Plane_CAS_01_F",
			"rhs_weap_SidewinderLauncher",
			"rhs_weap_agm65",
			"rhs_weap_FFARLauncher",
			"rhs_weap_gbu12",
			"rhsusf_weap_CMFlareLauncher"
		};
		magazines[] =
		{
			"rhs_pod_empty",
			"rhs_pod_lau68",
			"rhs_pod_agm65x3_rack",
			"rhs_mag_gbu12",
			"rhs_mag_gbu12",
			"rhs_pod_empty",
			"rhs_mag_gbu12",
			"rhs_mag_gbu12",
			"rhs_pod_agm65x3_rack",
			"rhs_pod_lau68",
			"rhs_mag_ANALQ131",
			"rhs_mag_Sidewinder_a10_2",
			"rhs_mag_FFAR_A10_14",
			"rhs_pod_empty_agm65",
			"rhs_pod_empty_agm65",
			"rhs_mag_agm65_x3",
			"rhs_mag_agm65_x3",
			"rhs_mag_agm65_x3",
			"rhs_mag_agm65_x3",
			"rhs_mag_agm65_x3",
			"rhs_mag_agm65_x3",
			"1174Rnd_GAU8_30mm_Plane_CAS_01_F",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
};