class cfgPatches
{
	class MG8_ericj_skins_a164
	{
		units[] =
		{
			"Plane_CAS_USAF_01",
			"Plane_CAS_USAF_02",
			"Plane_CAS_JAWS_01",
			"Plane_CAS_CAN_01",
			"Plane_CAS_58FS_01",
			"Plane_CAS_Euro_01",
			"Plane_CAS_EuroShark_01"
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
			"EricJ_wipeout"
		};
		author = "Zabuza";
	};
};

class CfgVehicles
{
	class B_Plane_CAS_01_F;
	class Plane_CAS_USAF_01 : B_Plane_CAS_01_F
	{
		weapons[] =
		{
			"ej_master_arms_safe",
			"Gatling_30mm_Plane_CAS_01_F",
			"Missile_AA_04_Plane_CAS_01_F",
			"Missile_AGM_02_Plane_CAS_01_F", 
			"Rocket_04_HE_Plane_CAS_01_F",
			"Rocket_04_AP_Plane_CAS_01_F",
			"Bomb_04_Plane_CAS_01_F",
			"EricJ_CMFlareLauncher"
		};
		magazines[] = 
		{
			"MG8_1174Rnd_Gau8_30mm",
			"2Rnd_Missile_AA_04_F",
			"6Rnd_Missile_AGM_02_F",
			"4Rnd_Bomb_04_F",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};

	class Plane_CAS_USAF_02 : B_Plane_CAS_01_F
	{
		weapons[] =
		{
			"ej_master_arms_safe",
			"Gatling_30mm_Plane_CAS_01_F",
			"Missile_AA_04_Plane_CAS_01_F",
			"Missile_AGM_02_Plane_CAS_01_F", 
			"Rocket_04_HE_Plane_CAS_01_F",
			"Rocket_04_AP_Plane_CAS_01_F",
			"Bomb_04_Plane_CAS_01_F",
			"EricJ_CMFlareLauncher"
		};
		magazines[] = 
		{
			"MG8_1174Rnd_Gau8_30mm",
			"2Rnd_Missile_AA_04_F",
			"6Rnd_Missile_AGM_02_F",
			"4Rnd_Bomb_04_F",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};

	class Plane_CAS_JAWS_01 : B_Plane_CAS_01_F
	{
		weapons[] =
		{
			"ej_master_arms_safe",
			"Gatling_30mm_Plane_CAS_01_F",
			"Missile_AA_04_Plane_CAS_01_F",
			"Missile_AGM_02_Plane_CAS_01_F", 
			"Rocket_04_HE_Plane_CAS_01_F",
			"Rocket_04_AP_Plane_CAS_01_F",
			"Bomb_04_Plane_CAS_01_F",
			"EricJ_CMFlareLauncher"
		};
		magazines[] = 
		{
			"MG8_1174Rnd_Gau8_30mm",
			"2Rnd_Missile_AA_04_F",
			"6Rnd_Missile_AGM_02_F",
			"4Rnd_Bomb_04_F",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};

	class Plane_CAS_CAN_01 : B_Plane_CAS_01_F
	{
		weapons[] =
		{
			"ej_master_arms_safe",
			"Gatling_30mm_Plane_CAS_01_F",
			"Missile_AA_04_Plane_CAS_01_F",
			"Missile_AGM_02_Plane_CAS_01_F", 
			"Rocket_04_HE_Plane_CAS_01_F",
			"Rocket_04_AP_Plane_CAS_01_F",
			"Bomb_04_Plane_CAS_01_F",
			"EricJ_CMFlareLauncher"
		};
		magazines[] = 
		{
			"MG8_1174Rnd_Gau8_30mm",
			"2Rnd_Missile_AA_04_F",
			"6Rnd_Missile_AGM_02_F",
			"4Rnd_Bomb_04_F",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};

	class Plane_CAS_58FS_01 : B_Plane_CAS_01_F
	{
		weapons[] =
		{
			"ej_master_arms_safe",
			"Gatling_30mm_Plane_CAS_01_F",
			"Missile_AA_04_Plane_CAS_01_F",
			"Missile_AGM_02_Plane_CAS_01_F", 
			"Rocket_04_HE_Plane_CAS_01_F",
			"Rocket_04_AP_Plane_CAS_01_F",
			"Bomb_04_Plane_CAS_01_F",
			"EricJ_CMFlareLauncher"
		};
		magazines[] = 
		{
			"MG8_1174Rnd_Gau8_30mm",
			"2Rnd_Missile_AA_04_F",
			"6Rnd_Missile_AGM_02_F",
			"4Rnd_Bomb_04_F",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};

	class Plane_CAS_Euro_01 : B_Plane_CAS_01_F
	{
		weapons[] =
		{
			"ej_master_arms_safe",
			"Gatling_30mm_Plane_CAS_01_F",
			"Missile_AA_04_Plane_CAS_01_F",
			"Missile_AGM_02_Plane_CAS_01_F", 
			"Rocket_04_HE_Plane_CAS_01_F",
			"Rocket_04_AP_Plane_CAS_01_F",
			"Bomb_04_Plane_CAS_01_F",
			"EricJ_CMFlareLauncher"
		};
		magazines[] = 
		{
			"MG8_1174Rnd_Gau8_30mm",
			"2Rnd_Missile_AA_04_F",
			"6Rnd_Missile_AGM_02_F",
			"4Rnd_Bomb_04_F",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};

	class Plane_CAS_EuroShark_01: B_Plane_CAS_01_F
	{
		weapons[] =
		{
			"ej_master_arms_safe",
			"Gatling_30mm_Plane_CAS_01_F",
			"Missile_AA_04_Plane_CAS_01_F",
			"Missile_AGM_02_Plane_CAS_01_F",
			"Rocket_04_HE_Plane_CAS_01_F",
			"Rocket_04_AP_Plane_CAS_01_F",
			"Bomb_04_Plane_CAS_01_F",
			"EricJ_CMFlareLauncher"
		};
		magazines[] =
		{
			"MG8_1174Rnd_Gau8_30mm",
			"2Rnd_Missile_AA_04_F",
			"6Rnd_Missile_AGM_02_F",
			"4Rnd_Bomb_04_F",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
};