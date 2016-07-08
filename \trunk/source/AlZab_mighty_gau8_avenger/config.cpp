class cfgPatches
{
	class AlZab_mighty_gau8_avenger
	{
		units[] = {"B_Plane_CAS_01_F"};
		weapons[] = {};
		requiredVersion = 1.24;
		requiredAddons[] = {"A3_Weapons_F", "A3_Air_F", "A3_Air_F_EPC"};
		author[] = {"[W] Alexus, [W] Zabuza"};
	};
};

class CfgFunctions
{
	class AlZab_mighty_gau8_avenger
	{
		tag = "ZAB";
		class mighty_gau8_avenger
		{
			file = "\AlZab_mighty_gau8_avenger\functions";
			class effectFiredGau8 {};
		};
	};
};

class CfgVehicles
{
	class Air;
	class Plane;
	class Plane_Base_F;
	class Plane_CAS_01_base_F;
	class B_Plane_CAS_01_F : Plane_CAS_01_base_F
	{
		magazines[] = {"1174Rnd_GAU8_30mm_Plane_CAS_01_F", "2Rnd_Missile_AA_04_F", "6Rnd_Missile_AGM_02_F", "4Rnd_Bomb_04_F", "7Rnd_Rocket_04_HE_F", "7Rnd_Rocket_04_AP_F", "240Rnd_CMFlare_Chaff_Magazine"};
	};
};

class cfgWeapons
{
	class CannonCore;
	class Gatling_30mm_Plane_CAS_01_F : CannonCore
	{
		displayName = "GAU-8";
		magazines[] = {"1174Rnd_GAU8_30mm_Plane_CAS_01_F"};
		canLock = 2;
		dispersion = 0.006;
		modes[] = {"burstLO", "burstHI", "close", "short", "medium", "far"};
		
		class GunParticles {
			class Effect {
				effectName = "MachineGun3";
				positionName = "Gatling_barrels_end";
				directionName = "Gatling_barrels_start";
			};
		};
		
		class burstBase: CannonCore
		{
			dispersion = 0.006;
			soundContinuous = 0;
			initSpeed = 1030;
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			autoFire = 0;
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			flash = "gunfire";
			flashSize = 0.1;
			soundBurst = 1;
			recoil = "Empty";
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 10;
		};
		
		class burstLO : burstBase
		{
			displayName = "LO";
			textureType = "burst";
			sounds[] = {StandardSound};
 			class StandardSound
			{
				begin1[] = {"\AlZab_mighty_gau8_avenger\sounds\weapon\GAU8_LO", 6.581072, 1, 4500};
				soundBegin[] = {"begin1", 1};
				weaponSoundEffect = "DefaultRifle";
			};
			multiplier = 2;
			burst = 27;
			reloadTime = 0.037;
		};
		
		class burstHI : burstBase
		{
			displayName = "HI";
			textureType = "fullAuto";
			sounds[] = {StandardSound};
 			class StandardSound
			{
				begin1[] = {"\AlZab_mighty_gau8_avenger\sounds\weapon\GAU8_HI", 6.581072, 1, 4500};
				soundBegin[] = {"begin1", 1};
				weaponSoundEffect = "DefaultRifle";
			};
			multiplier = 3;
			burst = 35;
			reloadTime = 0.0128;
		};

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

class cfgMagazines
{
	class Default;
	class CA_Magazine;
	class VehicleMagazine;
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;

	class 1174Rnd_GAU8_30mm_Plane_CAS_01_F : 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		initSpeed = 1030;
		tracersEvery = 0;
		count = 1174;
		nameSound = "cannon";
		ammo = "GAU8_30mm_Plane_CAS_01_F";
	};
};

class cfgAmmo
{
	class BulletCore;
	class BulletBase;
	class Gatling_30mm_HE_Plane_CAS_01_F;

	class GAU8_30mm_Plane_CAS_01_F : Gatling_30mm_HE_Plane_CAS_01_F
	{
		laserLock = 1;
		hit = 300;
		indirectHit = 100;
		indirectHitRange = 3.5;
		caliber = 4.17;
		airFriction = -0.00036;
		explosive = 0.35;
		soundHit1[] = {"\AlZab_mighty_gau8_avenger\sounds\ammo\GAU8_Hit1", 3.162278, 1, 2000};
		multiSoundHit[] = {"soundHit1", 1};
		explosionSoundEffect = "DefaultExplosion";
		explosionEffects = "Gau8ShellImpact";
		muzzleEffect = "ZAB_fnc_effectFiredGau8";
		craterEffects = "HEShellCrater";
	};
};

class Gau8ShellImpact
{
	class LightExp
	{
		simulation = "light";
		type = "Gau8ShellExplLght";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "Gau8ShellExplCldlt";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExpSpark {
		simulation = "particles";
		type = "Gau8ShellSprksCldlt";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "Gau8ShellSmkCldlt";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MedDust1
	{
		simulation = "particles";
		type = "Gau8ShellDstCldlt";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class BigDirt1
	{
		simulation = "particles";
		type = "Gau8ShellDrtCldlt";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class cfgCloudlets
{
	class Gau8DefaultCldlt
	{
		angle = 0;
		animationName = "";
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		beforeDestroyScript = "";
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		colorCoef[] = {1, 1, 1, 1};
		colorVar[] = {0, 0, 0, 0};
		lifeTimeVar = 0;
		MoveVelocityVarConst[] = {0, 0, 0};
		onTimerScript = "";
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 1;
		particleFSNtieth = 16;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleType = "Billboard";
		position[] = {0, 0, 0};
		positionVar[] = {0, 0, 0};
		positionVarConst[] = {0, 0, 0};
		randomDirectionIntensity = 0;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 0;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 0;
		rotationVelocityVar = 0;
		sizeCoef = 1;
		timerPeriod = 1;
	};
	class Gau8ShellExplCldlt : Gau8DefaultCldlt
	{
		angleVar = 1;
		color[] =
		{
			{1, 1, 1, -6},
			{1, 1, 1, 0}
		};
		interval = 0.03;
		lifeTime = 0.5;
		moveVelocity[] = {0, 1, 0};
		MoveVelocityVar[] = {0.2, 0.5, 0.2};
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		positionVar[] = {0.4, 0.1, 0.4};
		randomDirectionIntensity = 0.2;
		randomDirectionPeriod = 0.2;
		rotationVelocityVar = 90;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 4", "0.0125 * intensity + 1"};
		sizeVar = 0.5;
		volume = 7.9;
		weight = 10;
	};
	class Gau8ShellSprksCldlt : Gau8DefaultCldlt
	{
		angleVar = 360;
		animationSpeed[] = {1000};
		color[] =
		{
			{1, 1, 1, -50}
		};
		interval = 0.003;
		lifeTime = 4;
		lifeTimeVar = 1;
		moveVelocity[] = {0, 5, 0};
		MoveVelocityVar[] = {4, 2, 4};
		particleFSFrameCount = 2;
		particleFSIndex = 13;
		particleFSLoop = 0;
		positionVar[] = {2, 0.5, 2};
		rotationVelocity = 1;
		rotationVelocityVar = 2;
		rubbing = 0;
		size[] = {0.5, 0.4, 0.4, 0.4, 0.4, 0.3, 0.3, 0.3, 0.2, 0.1};
		sizeVar = 0;
		timerPeriod = 0;
		volume = 8;
		weight = 24;
	};
	class Gau8ShellSmkCldlt : Gau8DefaultCldlt
	{
		angleVar = 360;
		animationSpeed[] = {1.5, 0.5, 0.25, 0.25};
		circleRadius = 2;
		circleVelocity[] = {0.3, 0, 0.3};
		color[] =
		{
			{0.5, 0.5, 0.5, 0.4},
			{0.5, 0.5, 0.5, 0.22},
			{0.6, 0.6, 0.6, 0.09},
			{0.8, 0.8, 0.8, 0.01}
		};
		colorVar[] = {0, 0, 0, 0.3};
		interval = 0.007;
		lifeTime = 6;
		lifeTimeVar = 1.5;
		moveVelocity[] = {0, 12, 0};
		MoveVelocityVar[] = {0.5, 12, 0.5};
		particleFSFrameCount = 48;
		particleFSIndex = 7;
		positionVar[] = {0.2, 0.2, 0.2};
		randomDirectionIntensity = 0.1;
		randomDirectionIntensityVar = 0.05;
		randomDirectionPeriod = 0.2;
		randomDirectionperiodVar = 0.2;
		rotationVelocity = 1;
		rotationVelocityVar = 120;
		rubbing = 0.5;
		size[] = {6, 20};
		sizeVar = 0.3;
		volume = 1;
		weight = 3;
	};
	class Gau8ShellDstCldlt : Gau8DefaultCldlt
	{
		angleVar = 0;
		animationSpeed[] = {1000};
		circleRadius = 5;
		circleVelocity[] = {1, 1, 1};
		color[] =
		{
			{0.08, 0.067, 0.052, 0},
			{0.6, 0.5, 0.4, 0.5},
			{0.6, 0.5, 0.4, 0.4},
			{0.6, 0.5, 0.4, 0.3},
			{0.6, 0.5, 0.4, 0.15},
			{0.6, 0.5, 0.4, 0}
		};
		interval = 0.03;
		lifeTime = 30;
		lifeTimeVar = 5;
		moveVelocity[] = {0, 1, 0};
		MoveVelocityVar[] = {0.1, 1, 0.1};
		particleFSFrameCount = 13;
		particleFSIndex = 12;
		particleFSLoop = 0;
		positionVar[] = {2, 1, 2};
		rotationVelocity = 1;
		rotationVelocityVar = 20;
		rubbing = 0.01;
		size[] = {18, 22};
		sizeVar = 0.3;
		volume = 0.04;
		weight = 0.053;
	};
	class Gau8ShellDrtCldlt : Gau8DefaultCldlt
	{
		angleVar = 1;
		animationSpeed[] = {1000};
		color[] =
		{
			{0.6, 0.6, 1, 1},
			{0.6, 0.6, 1, 0}
		};
		interval = "0.01 * interval + 0.01";
		lifeTime = 5;
		lifeTimeVar = 1.5;
		moveVelocity[] = {0, "0.1 * intensity + 10", 0};
		MoveVelocityVar[] = {2, 4, 2};
		particleFSFrameCount = 9;
		particleFSIndex = 12;
		particleFSLoop = 0;
		rotationVelocity = 1;
		rubbing = 0;
		size[] = {6, 12};
		sizeVar = 0.2;
		timerPeriod = 0.1;
		volume = 0.1;
		weight = 24;
	};
};

class CfgLights
{
	class Gau8ShellExplLght
	{
		ambient[] = {0,0,0,0};
		blinking = "false";
		brightness = 200;
		color[] = {255,220,80};
		diffuse[] = {255,210,80};
		drawLight = 0;
		flareSize = 20;
		flareMaxDistance = 4000;
		intensity = 600;
		position[] = {0,50,0};
		size = 1;
		useFlare = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 0;
			hardLimitEnd = 0;
		};
	};
};