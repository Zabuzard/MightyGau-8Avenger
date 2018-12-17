class cfgPatches
{
	class MG8_cup_a10c2
	{
		units[] =
		{
			"CUP_B_A10_DYN_USA"
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
			"CUP_AirVehicles_Core",
			"CUP_Creatures_Military_USArmy",
			"CUP_AirVehicles_A10"
		};
		author = "Zabuza";
	};
};

class CfgVehicles
{
	class Air;
	class Plane;
	class CUP_A10_Base;
	class CUP_B_A10_DYN_USA: CUP_A10_Base
	{
		weapons[] =
		{
			"CUP_weapon_mastersafe",
			"Gatling_30mm_Plane_CAS_01_F",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"MG8_1174Rnd_Gau8_30mm"
		};
	};
};