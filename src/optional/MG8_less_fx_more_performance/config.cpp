class cfgPatches
{
	class MG8_less_fx_more_performance
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.70;
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_Air_F",
			"A3_Air_F_EPC",
			"A3_Air_F_EPC_Plane_CAS_01",
			"MG8_core",
		};
		author = "Zabuza";
	};
};

class MG8_ShellImpact
{
	class ExpSpark {
		simulation = "particles";
		type = "MG8_ShellNoCldlt";
		position[] = {0,0,0};
		intensity = 0;
		interval = 0;
		lifeTime = 0;
	};
	class MedDust1
	{
		simulation = "particles";
		type = "MG8_ShellNoCldlt";
		position[] = {0,0,0};
		intensity = 0;
		interval = 0;
		lifeTime = 0;
	};
	class BigDirt1
	{
		simulation = "particles";
		type = "MG8_ShellNoCldlt";
		position[] = {0,0,0};
		intensity = 0;
		interval = 0;
		lifeTime = 0;
	};
};

class CfgCloudlets
{
	class MG8_DefaultCldlt;
	class MG8_ShellNoCldlt : MG8_DefaultCldlt
	{
		angleVar = 0;
		color[] = {{1, 1, 1, 1}};
		interval = 0;
		lifeTime = 0;
		moveVelocity[] = {0, 0, 0};
		MoveVelocityVar[] = {0, 0, 0};
		rubbing = 0;
		size[] = {0};
		sizeVar = 0;
		volume = 0;
		weight = 0;
	};
};