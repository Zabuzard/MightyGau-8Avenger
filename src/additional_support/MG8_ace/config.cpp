class cfgPatches
{
	class MG8_ace_a10c
	{
		units[] = {};
		weapons[] = {"Gatling_30mm_Plane_CAS_01_F"};
		requiredVersion = 1.70;
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_Air_F",
			"A3_Air_F_EPC",
			"A3_Air_F_EPC_Plane_CAS_01",
			"MG8_core",
			"ace_aircraft"
		};
		author = "Zabuza";
	};
};

class CfgWeapons
{
	class CannonCore;
	class Gatling_30mm_Plane_CAS_01_F : CannonCore
	{
		modes[] =
		{
			"MG8_autoHi",
			"MG8_close",
			"MG8_near", 
			"MG8_short", 
			"MG8_medium",
			"MG8_far"
		};
	};
};