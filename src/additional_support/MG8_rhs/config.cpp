class cfgPatches
{
	class MG8_rhs_a10a
	{
		units[] =
		{
			"RHS_A10",
			"RHS_A10_AT"
		};
		weapons[] = {};
		requiredVersion = 1.70;
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_Air_F",
			"A3_Air_F_EPC",
			"A3_Air_F_EPC_Plane_CAS_01",
			"MG8_core",
			"RHS_US_A2_AirImport",
			"rhsusf_a2port_air",
			"rhsusf_main"
		};
		author = "Zabuza";
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
			"rhsusf_weap_CMFlareLauncher"
		};
		magazines[] =
		{
			"MG8_1174Rnd_Gau8_30mm",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};

	class RHS_A10_AT : RHS_A10
	{
		weapons[] =
		{
			"rhs_weap_MASTERSAFE",
			"Gatling_30mm_Plane_CAS_01_F",
			"rhsusf_weap_CMFlareLauncher"
		};
		magazines[] =
		{
			"MG8_1174Rnd_Gau8_30mm",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
};