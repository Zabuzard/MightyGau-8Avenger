class CfgPatches
{
	class AlZab_mighty_gau8_avenger
	{
		name="Mighty GAU-8/A Avenger";
		units[] =
		{
			"B_Plane_CAS_01_F",
			"B_Plane_CAS_01_dynamicLoadout_F"
		};
		weapons[] = {"Gatling_30mm_Plane_CAS_01_F"};
		requiredVersion = 1.70;
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_Air_F",
			"A3_Air_F_EPC",
			"A3_Air_F_EPC_Plane_CAS_01"
		};
		author = "[W] Zabuza";
		authors[] =
		{
			"[W] Alexus",
			"[W] Zabuza"
		};
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
		magazines[] =
		{
			"1174Rnd_GAU8_30mm_Plane_CAS_01_F",
			"2Rnd_Missile_AA_04_F",
			"6Rnd_Missile_AGM_02_F",
			"4Rnd_Bomb_04_F",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F",
			"Laserbatteries",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};

	class Plane_CAS_01_dynamicLoadout_base_F;
	class B_Plane_CAS_01_dynamicLoadout_F : Plane_CAS_01_dynamicLoadout_base_F
	{
		magazines[] =
		{
			"1174Rnd_GAU8_30mm_Plane_CAS_01_F",
			"Laserbatteries",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
};

class CfgWeapons
{
	class CannonCore;
	class Gatling_30mm_Plane_CAS_01_F : CannonCore
	{
		canLock = 2;
		dispersion = 0.006;
		displayName = "GAU-8";
		magazines[] = {"1174Rnd_GAU8_30mm_Plane_CAS_01_F"};
		modes[] =
		{
			"autoHI",
			"farGau8",
			"mediumGau8",
			"shortGau8", 
			"closeGau8"
		};

		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun3";
				positionName = "Gatling_barrels_end";
				directionName = "Gatling_barrels_start";
			};
		};

		class autoBase
		{
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 10;
			aiRateOfFire = 0.25;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 500;
			artilleryDispersion = 1;
			artilleryCharge = 1;
			autoFire = 1;
			burstRangeMax = -1;
			canShootInWater = 0;
			dispersion = 0.006;
			ffCount = 6;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			initSpeed = 1030;
			maxRange = 3;
			maxRangeProbab = 0.0040000002;
			midRange = 2;
			midRangeProbab = 0.059999999;
			minRange = 1;
			minRangeProbab = 0.059999999;
			recoil = "Empty";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			requiredOpticType = -1;
			showToPlayer = 1;
			soundBurst = 0;
			soundContinuous = 1;
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";
			sound[] = {"", 10, 1};
			soundBegin[] = {"sound", 1};
			soundBeginWater[] = {"sound", 1};
			soundClosure[] = {"sound", 1};
			soundEnd[] = {"sound", 1};
			soundLoop[] = {};
		};

		class autoHI : autoBase
		{
			displayName = "HI";
			textureType = "fullAuto";
			sounds[] = {StandardSound};
 			class StandardSound
			{
				begin1[] = {"\AlZab_mighty_gau8_avenger\sounds\weapon\GAU8_fadeIn_loop_fadeOut", 4.92341, 1, 4500, {8816, 45548}};
				soundBegin[] = {"begin1", 1};
			};
			burst = 35;
			multiplier = 2;
			reloadTime = 0.0128;
		};

		class aiBase : autoHI
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRangeProbab = 0.95;
			midRangeProbab = 0.90;
			maxRangeProbab = 0.88;
		};

		class closeGau8: aiBase
		{
			minRange = 1;
			midRange = 300;
			maxRange = 600;
		};

		class shortGau8: closeGau8
		{
			minRange = 500;
			midRange = 750;
			maxRange = 1100;
		};

		class mediumGau8: closeGau8
		{
			minRange = 1000;
			midRange = 1500;
			maxRange = 2100;
		};

		class farGau8: closeGau8
		{
			minRange = 2000;
			midRange = 2500;
			maxRange = 3000;
		};
	};
};

class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class VehicleMagazine;
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;

	class 1174Rnd_GAU8_30mm_Plane_CAS_01_F : 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		ammo = "GAU8_30mm_Plane_CAS_01_F";
		count = 1174;
		initSpeed = 1030;
		nameSound = "cannon";
		tracersEvery = 0;
	};
};

class CfgAmmo
{
	class BulletCore;
	class BulletBase;
	class Gatling_30mm_HE_Plane_CAS_01_F;

	class GAU8_30mm_Plane_CAS_01_F : Gatling_30mm_HE_Plane_CAS_01_F
	{
		airFriction = -0.00036;
		caliber = 4.17;
		craterEffects = "HEShellCrater";
		explosionEffects = "Gau8ShellImpact";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.35;
		hit = 300;
		indirectHit = 100;
		indirectHitRange = 3.5;
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		muzzleEffect = "ZAB_fnc_effectFiredGau8";
		soundHit1[] = {"\AlZab_mighty_gau8_avenger\sounds\ammo\GAU8_ground_impact1", 2.562278, 1, 1500};
		soundHit2[] = {"\AlZab_mighty_gau8_avenger\sounds\ammo\GAU8_ground_impact2", 2.562278, 1, 1500};
		SoundSetExplosion[] = {"GAU8_30mm_Exp_SoundSet"};
		airLock = 1;
		irLock = 1;
		laserLock = 1;
		nvLock = 1;
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
	class SmallSmoke1
	{
		simulation = "particles";
		type = "Gau8ShellSmkCldlt";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class CfgCloudlets
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
			{0.3, 0.3, 0.3, 0.7},
			{0.5, 0.5, 0.5, 0.4},
			{0.5, 0.5, 0.5, 0.22},
			{0.6, 0.6, 0.6, 0.09},
			{0.8, 0.8, 0.8, 0.01}
		};
		colorVar[] = {0, 0, 0, 0.4};
		interval = 0.003;
		lifeTime = 4;
		lifeTimeVar = 1.5;
		moveVelocity[] = {0, 15, 0};
		MoveVelocityVar[] = {0.5, 12, 0.5};
		particleFSFrameCount = 48;
		particleFSIndex = 7;
		positionVar[] = {0.2, 0.2, 0.2};
		randomDirectionIntensity = 0.1;
		randomDirectionIntensityVar = 0.05;
		randomDirectionPeriod = 0.2;
		randomDirectionperiodVar = 0.2;
		rotationVelocity = 0.2;
		rotationVelocityVar = 1;
		rubbing = 0.5;
		size[] = {6, 20};
		sizeVar = 0.3;
		volume = 1;
		weight = 2;
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

class CfgSoundSets
{
	class GAU8_30mm_Exp_SoundSet
	{
		distanceFilter = "none";
		doppler = 0;
		loop = 0;
		sound3DProcessingType="ExplosionLight3DProcessingType";
		soundShaders[] =
		{
			"GAU8_30mm_closeExp_SoundShader"
		};
		spatial = 1;
		speedOfSound=1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 1;
	};
};

class CfgSoundShaders
{
	class GAU8_30mm_closeExp_SoundShader
	{
		range = 1500;
		rangeCurve[] =
		{
			{0, 1},
			{800, 0.75},
			{2000, 0}
		};
		samples[] =
		{
			{"\AlZab_mighty_gau8_avenger\sounds\ammo\GAU8_ground_impact1", 1},
			{"\AlZab_mighty_gau8_avenger\sounds\ammo\GAU8_ground_impact2", 1}
		};
		volume = 0.8;
	};
};