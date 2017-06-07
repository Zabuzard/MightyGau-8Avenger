class cfgPatches
{
	class AlZab_mighty_gau8_fullerpj_a10c2
	{
		units[] = {"USAF_A10"};
		weapons[] = {};
		requiredVersion = 1.70;
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_Air_F",
			"A3_Air_F_EPC",
			"A3_Air_F_EPC_Plane_CAS_01",
			"AlZab_mighty_gau8_avenger",
			"USAF_A10"
		};
		author = "[W] Zabuza";
	};
};

class CfgVehicles
{
	class Air;
	class Plane;
	class USAF_A10 : Plane
	{
		weapons[]=
		{
			"USAF_MASTER_ARM_SAFE_A10C",
			"Gatling_30mm_Plane_CAS_01_F",
			"USAF_Countermeasures_A10C",
			"USAF_GBU12_Launcher",
			"USAF_AGM65_Launcher",
			"USAF_AGM65E_Launcher",
			"USAF_MK82_Launcher",
			"USAF_AIM9X_Launcher",
			"USAF_FFARLauncher_unguided"
		};
		magazines[]=
		{
			"1174Rnd_GAU8_30mm_Plane_CAS_01_F",
			"240Rnd_CMFlare_Chaff_Magazine",
			"USAF_1Rnd_ANALQ131",
			"USAF_1Rnd_FFARPOD7",
			"USAF_1Rnd_LAU88",
			"USAF_1Rnd_MK82RACK",
			"USAF_1Rnd_GBU12",
			"USAF_1Rnd_GBU12",
			"USAF_1Rnd_GBU12",
			"USAF_1Rnd_MK82RACK",
			"USAF_1Rnd_LAU88",
			"USAF_1Rnd_FFARPOD7",
			"USAF_1Rnd_DUALRAIL",
			"USAF_1Rnd_AGM65",
			"USAF_1Rnd_AGM65",
			"USAF_1Rnd_AGM65",
			"USAF_1Rnd_MK82",
			"USAF_1Rnd_MK82",
			"USAF_1Rnd_MK82",
			"USAF_empty",
			"USAF_empty",
			"USAF_empty",
			"USAF_empty",
			"USAF_empty",
			"USAF_empty",
			"USAF_1Rnd_MK82",
			"USAF_1Rnd_MK82",
			"USAF_1Rnd_MK82",
			"USAF_1Rnd_AGM65E",
			"USAF_1Rnd_AGM65E",
			"USAF_1Rnd_AGM65E",
			"USAF_empty",
			"USAF_empty",
			"USAF_empty",
			"USAF_empty",
			"USAF_empty",
			"USAF_empty",
			"USAF_1Rnd_AIM9X",
			"USAF_1Rnd_AIM9X",
			"USAF_19Rnd_HYDRA70_unguided"
		};
	};
};