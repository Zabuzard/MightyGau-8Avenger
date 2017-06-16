class cfgPatches
{
	class MG8_firewill
	{
		units[] = {"FIR_A10A_Base", "FIR_A10C_Base"};
		weapons[] = {};
		requiredVersion = 1.70;
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_Air_F",
			"A3_Air_F_EPC",
			"A3_Air_F_EPC_Plane_CAS_01",
			"MG8_core",
			"FIR_A10A_F",
			"FIR_A10C_F"
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
	class FIR_A10A_Base : Plane_CAS_01_base_F
	{
		weapons[] =
		{
			"FIR_MasterArm",
			"Gatling_30mm_Plane_CAS_01_F",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"MG8_1174Rnd_Gau8_30mm",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
	};

	class FIR_A10C_Base : Plane_CAS_01_base_F
	{
		weapons[] =
		{
			"FIR_MasterArm",
			"Gatling_30mm_Plane_CAS_01_F",
			"FIR_CMLauncher"
		};
		magazines[] =
		{
			"MG8_1174Rnd_Gau8_30mm",
			"FIR_240rnd_CMFlare_Chaff_Magazine"
		};
	};
};