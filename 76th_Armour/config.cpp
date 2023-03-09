class CfgPatches
{
	class 76th_Music
	{
		name = "76th JTF Armour";
		author = "Mesa";
		requiredVersion = 1.00;
		requiredAddons[] = 
		{
			"A3_Supplies_F_Exp"
		};
		units[] = {};
		weapons[] = {};
      	worlds[] = {};
	};
};
class CfgVehicles
{
	#include "LooseDepends.hpp"
	class 76th_Zeus_Bag: B_Bergen_dgtl_f
	{
		scope=2;
		scopeArsenal=2;
		displayName="[76th] Invisible Backpack";
		maximumLoad=1000;
		mass=1;
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
};