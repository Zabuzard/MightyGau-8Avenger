private ["_sh","_i","_no"];
_sh = nearestobject [_this select 0, _this select 4];

_i=1;
_no=8+random 1;
while {_i<_no}
do
{
	drop [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 8], "", "Billboard", 1, 10, [0, 0, 0],
	[-1.5+random 2.5,1+_i,-1.5 + random 2.5], 1, 1, 0.80, 0.08, [_i,10,13 + random 1],
	[[0.9, 0.9, 0.9, 0.1 + random 0.07],[1, 1, 1, 0]],
	[2,0.7,0.5],1,0,"","",_sh];
	_i=_i+1;
};