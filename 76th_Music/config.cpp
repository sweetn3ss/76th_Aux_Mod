class CfgPatches
{
	class 76th_Music
	{
		name = "76th JTF Music";
		author = "Mesa";
		requiredVersion = 1.00;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
      	worlds[] = {};
	};
};
class CfgMusic
{
	#include "mute.hpp"
	#include "foreplay.hpp"
	#include "sex.hpp"
	#include "hatefuck.hpp"
	#include "pscig.hpp"
};
class CfgMusicClasses
{
	class ssjtfmusic_foreplay
	{
		displayName = "[76th] Foreplay";
	};
	class ssjtfmusic_sex
	{
		displayName = "[76th] Sex";
	};
	class ssjtfmusic_hatefucking
	{
		displayName = "[76th] Hate Fucking";
	};
	class ssjtfmusic_pscig
	{
		displayName = "[76th] Post-Sex Cigarette";
	};
	class ssjtfmusic_virgin
	{
		displayName = "[76th] Virgin";
	};
};