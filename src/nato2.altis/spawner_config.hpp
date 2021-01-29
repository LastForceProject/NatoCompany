/*
class SpawnerClass - Название спавнера, используеться как аргумент для вызова функции
{
	conditionToAccess - СТРОКА - Условие для доступа к спавнеру (строка которая при компиляции в код должна возвращать true или false). Если True игрок получит доступ к спавнеру.
	
	vehicles - МАССИВ МАССИВОВ - Массив с доступной техникой.
	|- 0 - СТРОКА - Название техники которое будет отображаться в панели спавнера
	|- 1 - СТРОКА - Класснейм
	|- 2 - СТРОКА - Название переменной, где будет храниться кол-во использованной техники (в будущем будет определяться автоматически)
	|- 3 - ЧИСЛО  - Максимальное и изначально доступное число техники
	|- 4 - СТРОКА - НЕОБЯЗАТЕЛЕН -  Путь до картинки в меню (если не указывать будет использован баннер проекта)
	|- 4 - СТРОКА - НЕОБЯЗАТЕЛЕН -  Описание техники, которое отображаеться в правой части дисплея (если не указывать, описание будет пустым)
	spawnPoints - ARRAY OF ARRAYS - Spawn positions (markers/positions)
	|- 0 - STRING - Display name in the dialog
	|- 1 - МАССИВ ЗНАЧЕНИЙ - Точки спавна типа МАССИВ {x, y, z} или СТРОКА название предмета (обычно косилки) на карте, на месте которого будет появляться техника
	|- 2 - БУЛЕВО - True или False - Пока не знаю зачем, поэтому по используйте true

};

ПРИМЕР:
class MySuperSpawner
{	
	conditionToAccess = "true"; // 'SCHTAMP' in name player // Будет True только в том случае, если в имени игрока будет слово SCHTAMP

	vehicles[] = // (У последнего элемента массива не должно быть запятой)
	{
		{
			"Название техники 1",
			"класснейм_техники_1",
			"название_переменной_1",
			999, // начальное число техники == 999
			"путь/до/картинки.paa",
			"Мое самое лучшее описание этой техники."
		},
		{
			"Название техники 2",
			"класснейм_техники_2",
			"название_переменной_2"
		} // <=== вот тут не должно быть запятой
		
	};
	spawnpoints[] = 
	{
		{"Название моей точки спавна 1",{"название_моего_предмета_1", {x,y,z}},true}
	};
};
*/

class MainSpawn
{	
	conditionToAccess = "true";

	vehicles[] = 
	{
		{"=====Наземная техника=====","","","","",""},
		{
		"M1A2 SEPv1d",
		"rhsusf_m1a2sep1d_usarmy",
		"land_count_spawn_1",
		6
		},
		{
		"M2A2",
		"RHS_M2A2",
		"land_count_spawn_1",
		6
		},
		{
		"M1126",
		"rhsusf_stryker_m1126_m2_d",
		"land_count_spawn_1",
		6
		},
		{
		"m1132",
		"rhsusf_stryker_m1132_m2_d",
		"land_count_spawn_1",
		6
		},
		{
		"M1129",
		"CUP_B_M1129_MC_MK19_Desert",
		"land_count_spawn_1",
		6
		},
		{
		"Baggy",
		"rhsusf_mrzr4_d",
		"land_count_spawn_1",
		6
		},
		{
		"M998",
		"rhsusf_m998_d_4dr",
		"land_count_spawn_1",
		6
		},
		{
		"M1025 M2",
		"rhsusf_m1025_d_m2",
		"land_count_spawn_1",
		6
		},
		{
		"M1025",
		"rhsusf_m1025_d",
		"land_count_spawn_1",
		6
		},
		{
		"M1078A1P2",
		"rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy",
		"land_count_spawn_1",
		6
		}
	};
	spawnpoints[] = 
	{
		{"Стоянка #1",{"land_spawn_0"},true},
		{"Стоянка #2",{"land_spawn_1"},true},
		{"Стоянка #3",{"land_spawn_2"},true},
		{"Стоянка #4",{"land_spawn_3"},true}
	};
};

class BigSpawn
{	
	conditionToAccess = "true";

	vehicles[] = 
	{
		{"=====Крупногабаритная техника=====","","","","",""},
		
	};
	spawnpoints[] = 
	{
		{"Место для большой техники #1",{"big_spawn_1"},true}
	};
};

class AirSpawn
{	
	conditionToAccess = "true";

	vehicles[] = 
	{
		{"=====Воздушная техника=====","","","","",""},
		{
		"MH60S",
		"vtx_MH60S_Pylons",
		"air_count_spawn_1",
		6
		},
		{
		"AH1Z",
		"RHS_AH1Z_wd",
		"air_count_spawn_1",
		6
		},
		{
		"CH53E",
		"rhsusf_CH53E_USMC",
		"air_count_spawn_1",
		6
		},
		{
		"CH53E Cargo",
		"rhsusf_CH53e_USMC_cargo",
		"air_count_spawn_1",
		6
		},
		{
		"CH53E GAU21",
		"rhsusf_CH53E_USMC_GAU21",
		"air_count_spawn_1",
		6
		},
		{
		"EA18G",
		"FLAN_EA18G",
		"air_count_spawn_1",
		6
		},
		{
		"FA18F",
		"JS_JC_FA18F",
		"air_count_spawn_1",
		6
		},
		{
		"MH605",
		"vtx_MH60S",
		"air_count_spawn_1",
		6
		},
		{
		"MH605 GAU21L",
		"vtx_MH60S_GAU21L",
		"air_count_spawn_1",
		6
		},
		{
		"MH605 Pylons GAU21L",
		"vtx_MH60S_Pylons_GAU21L",
		"air_count_spawn_1",
		6
		},
		{
		"MQ81U",
		"FIR_MQ81U_DarkGreyCamo",
		"air_count_spawn_1",
		6
		},
		{
		"MV22",
		"CUP_B_MV22_USMC",
		"air_count_spawn_1",
		6
		},
		{
		"MV22 VIV",
		"CUP_B_MV22_VIV_USMC",
		"air_count_spawn_1",
		6
		},
		{
		"MV22 Ramp Gun",
		"CUP_B_MV22_USMC_RAMPGUN",
		"air_count_spawn_1",
		6
		}
	};
	spawnpoints[] = 
	{
		{"Вертолетная площадка #1",{"heli_spwn_0"},true},
		{"Вертолетная площадка #2",{"heli_spwn_1"},true},
		{"Вертолетная площадка #3",{"heli_spwn_2"},true},
		{"Вертолетная площадка #4",{"heli_spwn_3"},true},
		{"Самолетная площадка #1",{"air_spwn_1"},true},
		{"Самолетная площадка #2",{"air_spwn_2"},true},
		{"Самолетная площадка #3",{"air_spwn_3"},true}
	};
};
