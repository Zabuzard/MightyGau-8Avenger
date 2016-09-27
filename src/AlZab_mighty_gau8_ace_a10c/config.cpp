class cfgPatches
{
	class AlZab_mighty_gau8_ace_a10c
	{
		units[] = {};
		weapons[] = {"Gatling_30mm_Plane_CAS_01_F"};
		requiredVersion = 1.62;
		requiredAddons[] = {"A3_Weapons_F", "A3_Air_F", "A3_Air_F_EPC", "AlZab_mighty_gau8_avenger", "ace_aircraft"};
		author = "[W] Zabuza";
	};
};

class CfgWeapons
{
	class CannonCore;
	class Gatling_30mm_Plane_CAS_01_F : CannonCore
	{
		modes[] =
		{
			"burstLO",
			"burstHI",
			"close",
			"short", 
			"medium",
			"far"
		};
		
		class BurstBase;
		class burstHI;
		class close: burstHI
		{
			showToPlayer = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 400;
			minRange = 0;
			midRange = 200;
			maxRange = 400;
			minRangeProbab = 0.04;
			midRangeProbab = 0.2;
			maxRangeProbab = 0.1;
		};

		class short: burstHI
		{
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 600;
			minRange = 200;
			midRange = 500;
			maxRange = 800;
			minRangeProbab = 0.1;
			midRangeProbab = 0.2;
			maxRangeProbab = 0.1;
		};

		class medium: burstHI
		{
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 800;
			minRange = 600;
			midRange = 800;
			maxRange = 1000;
			minRangeProbab = 0.1;
			midRangeProbab = 0.2;
			maxRangeProbab = 0.1´;
		};

		class far: burstHI
		{
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 1000;
			minRange = 800;
			minRangeProbab = 0.1;
			midRange = 1000;
			midRangeProbab = 0.2;
			maxRange = 1500;
			maxRangeProbab = 0.4;
		};
	};
};