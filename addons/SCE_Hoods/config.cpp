#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Armst_Hood
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F"};
	};
};
class CfgVehicleClasses
{
	class Armst_Hood
	{
		displayName = "Hood";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;

    class armst_Hood_band: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood";
		model = "\SCE_Hoods\models\Hood2";
		picture = "\SCE_Hoods\ui\hood_band.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_kap_co.paa"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformmodel = "\SCE_Hoods\models\Hood2";
			armor = 1;
			passThrough = 0.30;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_kap_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 2;
					passThrough = 0.5;
				};
			};
		};
	};
    class armst_Hood_band_2: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood";
		model = "\SCE_Hoods\models\Hood2";
		picture = "\SCE_Hoods\ui\hood_band.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_kap_co2.paa"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformmodel = "\SCE_Hoods\models\Hood2";
			armor = 1;
			passThrough = 0.30;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_kap_co2.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 2;
					passThrough = 0.5;
				};
			};
		};
	};
    class armst_Hood_band_3: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood";
		model = "\SCE_Hoods\models\Hood2";
		picture = "\SCE_Hoods\ui\hood_band.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_kap_co3.paa"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformmodel = "\SCE_Hoods\models\Hood2";
			armor = 1;
			passThrough = 0.30;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_kap_co3.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 2;
					passThrough = 0.5;
				};
			};
		};
	};
    class armst_Hood_band_4: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood";
		model = "\SCE_Hoods\models\Hood2";
		picture = "\SCE_Hoods\ui\hood_band.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_kap_co4.paa"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformmodel = "\SCE_Hoods\models\Hood2";
			armor = 1;
			passThrough = 0.30;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_kap_co4.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 2;
					passThrough = 0.5;
				};
			};
		};
	};
	class armst_Hood_band_5: ItemCore
	{
		scope = 1;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood";
		model = "\SCE_Hoods\models\Hood2";
		picture = "\SCE_Hoods\ui\hood_band.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\head_DED_black.paa"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformmodel = "\SCE_Hoods\models\Hood2";
			armor = 1;
			passThrough = 0.30;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\head_DED_black.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 26;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class armst_Hood_band_loner_tan: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tan)";
		model = "\SCE_Hoods\models\Hood2";
		picture = "\SCE_Hoods\ui\hood_band.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_kap_tan_co.paa"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformmodel = "\SCE_Hoods\models\Hood2";
			armor = 1;
			passThrough = 0.30;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_kap_tan_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 2;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class armst_Hood_band_loner_green: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Green)";
		model = "\SCE_Hoods\models\Hood2";
		picture = "\SCE_Hoods\ui\hood_band.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_kap_green_co.paa"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformmodel = "\SCE_Hoods\models\Hood2";
			armor = 1;
			passThrough = 0.30;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\bandos_tan_green_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 2;
					passThrough = 0.5;
				};
			};
		};
	};
	
	//gol_hoods
	
	class armst_Hood_closed_loner1: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner1-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner1-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_loner2: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner2.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner2-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner2-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_loner3: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner3.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner3-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner3-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_loner4: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner4.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner4-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner4-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_loner5: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner5.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner5-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner5-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_loner6: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner6.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner6-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner6-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_loner7: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner7.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner7-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner7-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_loner8: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner8.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner8-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner8-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_loner9: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner9.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner9-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner9-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_loner10: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner10.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner10-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner10-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_loner11: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner11.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner11-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner11-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_clearsky: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\clearsky.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\clearsky-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\clearsky-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_dolg1: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\dolg1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-b-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-b-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_dolg2: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\dolg2.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-r-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-r-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_freedom1: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\freedom1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom1-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom1-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_freedom2: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\freedom2.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom2-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom2-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_mech: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\mech.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mech-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mech-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_merc: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\merc.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\merc-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\merc-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_military: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\military.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\military-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\military-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_neutral: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\neutral.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\neutral-closed.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\neutral-closed.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_mono: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mono_Full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mono_Full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_mono: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mono_Full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mono_Full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_closed_mono: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Back)";
		model = "\SCE_Hoods\models\Hood_closed";
		picture = "\SCE_Hoods\ui\loner1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mono_Full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_closed";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mono_Full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_loner1: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner1-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner1-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_loner2: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner2.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner2-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner2-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_loner3: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner3.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner3-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner3-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_loner4: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner4.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner4-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner4-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_loner5: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner5.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner5-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner5-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_loner6: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner6.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner6-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner6-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_loner7: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner7.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner7-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner7-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_loner8: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner8.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner8-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner8-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_loner9: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner9.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner9-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner9-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_loner10: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner10.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner10-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner10-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_loner11: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\loner11.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner11-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner11-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_clearsky: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\clearsky.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\clearsky-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\clearsky-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_dolg1: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\dolg1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-b-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-b-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_dolg2: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\dolg2.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-r-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-r-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_freedom1: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\freedom1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom1-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom1-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_freedom2: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\freedom2.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom2-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom2-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_mech: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\mech.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mech-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mech-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_merc: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\merc.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\merc-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\merc-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_military: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\military.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\military-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\military-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_full_neutral: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Tied)";
		model = "\SCE_Hoods\models\Hood_full";
		picture = "\SCE_Hoods\ui\neutral.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\neutral-full.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_full";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\neutral-full.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_loner1: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner1-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner1-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_loner2: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner2.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner2-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner2-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_loner3: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner3.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner3-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner3-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_loner4: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner4.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner4-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner4-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_loner5: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner5.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner5-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner5-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_loner6: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner6.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner6-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner6-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_loner7: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner7.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner7-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner7-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_loner8: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner8.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner8-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner8-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_loner9: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner9.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner9-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner9-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_loner10: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner10.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner10-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner10-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_loner11: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\loner11.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner11-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\loner11-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_clearsky: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\clearsky.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\clearsky-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\clearsky-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_dolg1: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\dolg1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-b-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-b-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_dolg2: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\dolg2.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-r-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\dolg-r-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_freedom1: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\freedom1.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom1-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom1-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_freedom2: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\freedom2.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom2-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\freedom2-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_mech: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\mech.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mech-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\mech-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_merc: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\merc.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\merc-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\merc-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_military: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\military.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\military-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\military-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	class armst_Hood_mid_neutral: ItemCore
	{
		scope = 2;
		author = "ArmSTALKER";
		weaponPoolAvailable = 1;
		displayName = "Hood (Open)";
		model = "\SCE_Hoods\models\Hood_mid";
		picture = "\SCE_Hoods\ui\neutral.paa";
                 hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\neutral-mid.paa"};
                hiddenSelections[] = {"Camo"};
                
				
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\SCE_Hoods\models\Hood_mid";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
             hiddenSelectionsTextures[] = {"\SCE_Hoods\textures\neutral-mid.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
};
