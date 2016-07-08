class cfgPatches
{
	class AlZab_mighty_gau8_sti_a10a
	{
		units[] = {"STI_A10A"};
		weapons[] = {};
		requiredVersion = 1.24;
		requiredAddons[] = {"A3_Weapons_F", "A3_Air_F", "A3_Air_F_EPC", "AlZab_mighty_gau8_avenger", "sti_a10"};
		author[] = {"[W] Alexus, [W] Zabuza"};
	};
};

class CfgVehicles
{
	class Air;
	class Plane;
	class Plane_Base_F;
	class STI_A10A: Plane_Base_F
	{
		weapons[] =
		{
			"sti_w_master_arms_safe",
			"Gatling_30mm_Plane_CAS_01_F",
			"sti_w_FFARLauncher",
			"sti_w_AGM65KLauncher",
			"sti_w_AGM65DLauncher",
			"sti_w_Mk82BombLauncher",
			"sti_w_GBU12LGBLaucher",
			"sti_w_aim9mLaucher",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"1174Rnd_GAU8_30mm_Plane_CAS_01_F",
			"sti_m_14Rnd_FFAR",
			"sti_m_ANALQ131",
			"sti_m_ffarpod_x7",
			"sti_m_lau88_x1",
			"sti_m_bru42_x1",
			"sti_m_GBU12_x1",
			"sti_m_empty",
			"sti_m_GBU12_x1",
			"sti_m_bru42_x1",
			"sti_m_lau88_x1",
			"sti_m_ffarpod_x7",
			"sti_m_lau114_x1",
			"sti_m_empty",
			"sti_m_empty",
			"sti_m_empty",
			"sti_m_MK82_x1",
			"sti_m_MK82_x1",
			"sti_m_MK82_x1",
			"sti_m_empty",
			"sti_m_empty",
			"sti_m_empty",
			"sti_m_empty",
			"sti_m_empty",
			"sti_m_empty",
			"sti_m_MK82_x1",
			"sti_m_MK82_x1",
			"sti_m_MK82_x1",
			"sti_m_empty",
			"sti_m_empty",
			"sti_m_empty",
			"sti_m_empty",
			"sti_m_empty",
			"sti_m_agm65d_x1",
			"sti_m_agm65d_x1",
			"sti_m_agm65k_x1",
			"sti_m_agm65k_x1",
			"sti_m_aim9m_x1",
			"sti_m_aim9m_x1",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
};