class CfgPatches
{
	class MG8_core
	{
		name = "Mighty GAU-8/A Avenger";
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
		author = "Zabuza";
		authors[] = {"Zabuza"};
	};
};

class CfgFunctions
{
	class MG8_core
	{
		tag = "MG8";
		class core
		{
			file = "\MG8_core\functions";
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
			"MG8_1174Rnd_Gau8_30mm",
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
			"MG8_1174Rnd_Gau8_30mm",
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
		magazines[] = {"MG8_1174Rnd_Gau8_30mm"};
		modes[] =
		{
			"MG8_autoHi",
			"MG8_close",
			"MG8_near", 
			"MG8_short", 
			"MG8_medium",
			"MG8_far"
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

		class MG8_autoBase
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

		class MG8_autoHi : MG8_autoBase
		{
			displayName = "HI";
			textureType = "fullAuto";
			sounds[] = {StandardSound};
 			class StandardSound
			{
				begin1[] = {"\MG8_core\sounds\weapon\seamless", 7, 1, 6500};
				soundBegin[] = {"begin1", 1};
			};
			burst = 35;
			multiplier = 2;
			reloadTime = 0.0128;
		};

		class MG8_aiBase : MG8_autoHi
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
		};

		class MG8_close: MG8_aiBase
		{
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.34999999;
			midRange = 200;
			midRangeProbab = 0.88;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
		};
		
		class MG8_near: MG8_close
		{
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.34999999;
			midRange = 150;
			midRangeProbab = 0.88;
			maxRange = 300;
			maxRangeProbab = 0.30000001;
		};

		class MG8_short: MG8_close
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.30000001;
			midRange = 400;
			midRangeProbab = 0.88;
			maxRange = 600;
			maxRangeProbab = 0.30000001;
		};

		class MG8_medium: MG8_close
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.30000001;
			midRange = 700;
			midRangeProbab = 0.77999997;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};

		class MG8_far: MG8_close
		{
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.60000002;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
	};
};

class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class VehicleMagazine;
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;

	class MG8_1174Rnd_Gau8_30mm : 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		ammo = "MG8_Gau8_30mm";
		count = 1174;
		initSpeed = 1030;
		muzzleImpulseFactor = 0;
		nameSound = "cannon";
		tracersEvery = 0;
	};
};

class CfgAmmo
{
	class BulletCore;
	class BulletBase;
	class Gatling_30mm_HE_Plane_CAS_01_F;

	class MG8_Gau8_30mm : Gatling_30mm_HE_Plane_CAS_01_F
	{
		airFriction = -0.00036;
		caliber = 4.17;
		craterEffects = "HEShellCrater";
		explosionEffects = "MG8_ShellImpact";
		explosionSoundEffect = "DefaultExplosion";
		explosive = 0.35;
		hit = 300;
		indirectHit = 100;
		indirectHitRange = 3.5;
		multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
		muzzleEffect = "MG8_fnc_effectFiredGau8";
		soundHit1[] = {"\MG8_core\sounds\ammo\Gau8_ground_impact1", 2.562278, 1, 1500};
		soundHit2[] = {"\MG8_core\sounds\ammo\Gau8_ground_impact2", 2.562278, 1, 1500};
		SoundSetExplosion[] = {"MG8_Gau8_Exp_SoundSet"};
		airLock = 1;
		irLock = 1;
		laserLock = 1;
		nvLock = 1;
	};
};

class MG8_ShellImpact
{
	class LightExp
	{
		simulation = "light";
		type = "MG8_ShellExplLght";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "MG8_ShellExplCldlt";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExpSpark {
		simulation = "particles";
		type = "MG8_ShellSprksCldlt";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "MG8_ShellSmkCldlt";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MedDust1
	{
		simulation = "particles";
		type = "MG8_ShellDstCldlt";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class BigDirt1
	{
		simulation = "particles";
		type = "MG8_ShellDrtCldlt";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class CfgCloudlets
{
	class MG8_DefaultCldlt
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
	class MG8_ShellExplCldlt : MG8_DefaultCldlt
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
	class MG8_ShellSprksCldlt : MG8_DefaultCldlt
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
	class MG8_ShellSmkCldlt : MG8_DefaultCldlt
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
	class MG8_ShellDstCldlt : MG8_DefaultCldlt
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
	class MG8_ShellDrtCldlt : MG8_DefaultCldlt
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
	class MG8_ShellExplLght
	{
		ambient[] = {0, 0, 0, 0};
		blinking = "false";
		brightness = 200;
		color[] = {255, 220, 80};
		diffuse[] = {255, 210, 80};
		drawLight = 0;
		flareSize = 20;
		flareMaxDistance = 4000;
		intensity = 600;
		position[] = {0, 50, 0};
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
	class MG8_Gau8_Exp_SoundSet
	{
		distanceFilter = "none";
		doppler = 0;
		loop = 0;
		occlusionFactor = 0.2;
		obstructionFactor = 0;
		sound3DProcessingType="MG8_Exp_Med_Mono_Processor";
		soundShaders[] =
		{
			"MG8_Gau8_Close_Exp_SoundShader",
			"MG8_Gau8_Distant_Exp_SoundShader",
			"MG8_Gau8_Far_Exp_SoundShader"
		};
		spatial = 1;
		speedOfSound = 1;
		volumeCurve = "MG8_Exp_Med_Curve";
		volumeFactor = 1;
	};
};

class CfgSoundShaders
{
	class MG8_Gau8_Close_Exp_SoundShader
	{
		range = 300;
		rangeCurve[] =
		{
			{0, 1},
			{50, 1},
			{70, 0.8},
			{150, 0.8},
			{299.5, 0.7},
			{300, 0}
		};
		samples[] =
		{
			{"\MG8_core\sounds\ammo\Gau8_ground_impact_close1", 1},
			{"\MG8_core\sounds\ammo\Gau8_ground_impact_close2", 1}
		};
		volume = 1;
	};
	class MG8_Gau8_Distant_Exp_SoundShader
	{
		range = 600;
		rangeCurve[] =
		{
			{0, 0},
			{299.5, 0},
			{300, 0.8},
			{599.5, 0.5},
			{600, 0}
		};
		samples[] =
		{
			{"\MG8_core\sounds\ammo\Gau8_ground_impact_distant1", 1},
			{"\MG8_core\sounds\ammo\Gau8_ground_impact_distant2", 1}
		};
		volume = 1;
	};
	class MG8_Gau8_Far_Exp_SoundShader
	{
		range = 1500;
		rangeCurve[] =
		{
			{0, 0},
			{599.5, 0},
			{600, 0.8},
			{1499.5, 0.5},
			{1500, 0}
		};
		samples[] =
		{
			{"\MG8_core\sounds\ammo\Gau8_ground_impact_far1", 1},
			{"\MG8_core\sounds\ammo\Gau8_ground_impact_far2", 1}
		};
		volume = 1;
	};
};

class CfgSoundCurves
{
	class MG8_Exp_Med_Curve
	{
		points[] =
		{
			{0, 1},
			{0.002, 0.98},
			{0.007, 0.9},
			{0.1, 0.8},
			{0.8, 0.1},
			{0.9, 0.05},
			{1, 0}
		};
	};
};

class CfgSound3DProcessors
{
	class MG8_Exp_Med_Mono_Processor
	{
		innerRange = 1500;
		radius = 0;
		range = 1500;
		rangeCurve = "MG8_Exp_Med_Curve";
		type = "emitter";
	};
};

class CfgUnitInsignia
{
	class MG8_patch
	{
		displayName = "Mighty Gau-8 Avenger";
		author = "Zabuza";
		texture = "\MG8_core\img\MG8_patch.paa";
		textureVehicle = "";
	};
};
