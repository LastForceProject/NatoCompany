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
		4
		},
		{
		"M1A1FEP",
		"rhsusf_m1a1fep_d",
		"land_count_spawn_2",
		4
		},
		{
		"M1A1AIM",
		"rhsusf_m1a1aimd_usarmy",
		"land_count_spawn_3",
		4
		},
		{
		"M2A2",
		"RHS_M2A2",
		"land_count_spawn_4",
		4
		},
		{
		"M2A3",
		"RHS_M2A3",
		"land_count_spawn_5",
		4
		},
		{
		"M6A2",
		"RHS_M6",
		"land_count_spawn_6",
		4
		},
		{
		"M113A3 (MEV)",
		"rhsusf_m113d_usarmy_medical",
		"land_count_spawn_7",
		4
		},
		{
		"M113A3 (M2)",
		"rhsusf_m113d_usarmy",
		"land_count_spawn_8",
		4
		},
		{
		"M113A3 (Mk19)",
		"rhsusf_m113d_usarmy_MK19",
		"land_count_spawn_9",
		4
		},
		{
		"M1126 (Mk19)",
		"rhsusf_stryker_m1126_mk19_d",
		"land_count_spawn_10",
		4
		},
		{
		"M1126 (M2)",
		"rhsusf_stryker_m1126_m2_d",
		"land_count_spawn_11",
		4
		},
		{
		"M1126 MGS",
		"CUP_B_M1128_MGS_Desert",
		"land_count_spawn_12",
		4
		},
		{
		"M1132 Stryker M2 Desert",
		"rhsusf_stryker_m1132_m2_d",
		"land_count_spawn_13",
		4
		},
		{
		"M1133 MEV",
		"CUP_B_M1133_MEV_Desert",
		"land_count_spawn_14",
		4
		},
		{
		"M1134",
		"rhsusf_stryker_m1134_d",
		"land_count_spawn_15",
		4
		},
		{
		"LAV-25A1",
		"CUP_B_LAV25M240_desert_USMC",
		"land_count_spawn_16",
		4
		},
		{
		"M998 4DR",
		"rhsusf_m998_d_4dr",
		"land_count_spawn_17",
		6
		},
		{
		"M1025 M2",
		"rhsusf_m1025_d_m2",
		"land_count_spawn_18",
		6
		},
		{
		"M1025",
		"rhsusf_m1025_d",
		"land_count_spawn_19",
		6
		},
		{
		"M1078A1P2 M2 Desert",
		"rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy",
		"land_count_spawn_20",
		6
		},
		{
		"MRZR4 (SF)",
		"rhsusf_mrzr4_d",
		"land_count_spawn_21",
		4
		},
		{
		"M1165A1 (SF)",
		"rhsusf_m1165_asv_m240_usaf_d",
		"land_count_spawn_22",
		4
		},
		{
		"Dingo Bundeswher (SF)",
		"CUP_B_Dingo_GER_Des",
		"land_count_spawn_23",
		4
		},
		{
		"Jackal L2A1 (SF)",
		"CUP_B_Jackal2_L2A1_GB_D",
		"land_count_spawn_24",
		4
		},
		{
		"M1232 (M2)",
		"rhsusf_M1232_M2_usarmy_d",
		"land_count_spawn_25",
		6
		},
		{
		"M1232 (Mk19)",
		"rhsusf_M1232_MK19_usarmy_d",
		"land_count_spawn_26",
		6
		},
		{
		"M1240A1 (M2)",
		"rhsusf_m1240a1_m2_uik_usarmy_d",
		"land_count_spawn_27",
		6
		},
		{
		"M1240A1 (Mk19)",
		"rhsusf_m1240a1_mk19_uik_usarmy_d",
		"land_count_spawn_28",
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
		"air_count_spawn_2",
		6
		},
		{
		"CH53E",
		"rhsusf_CH53E_USMC",
		"air_count_spawn_3",
		6
		},
		{
		"CH53E Cargo",
		"rhsusf_CH53e_USMC_cargo",
		"air_count_spawn_4",
		6
		},
		{
		"CH53E GAU21",
		"rhsusf_CH53E_USMC_GAU21",
		"air_count_spawn_5",
		6
		},
		{
		"EA18G",
		"FLAN_EA18G",
		"air_count_spawn_6",
		6
		},
		{
		"FA18E",
		"JS_JC_FA18E",
		"air_count_spawn_7",
		6
		},
		{
		"MH605",
		"vtx_MH60S",
		"air_count_spawn_8",
		6
		},
		{
		"MH60S GAU21L",
		"vtx_MH60S_GAU21L",
		"air_count_spawn_9",
		6
		},
		{
		"MH605 Pylons GAU21L",
		"vtx_MH60S_Pylons_GAU21L",
		"air_count_spawn_10",
		6
		},
		{
		"MV22",
		"CUP_B_MV22_USMC",
		"air_count_spawn_11",
		6
		},
		{
		"MV22 VIV",
		"CUP_B_MV22_VIV_USMC",
		"air_count_spawn_12",
		6
		},
		{
		"MV22 Ramp Gun",
		"CUP_B_MV22_USMC_RAMPGUN",
		"air_count_spawn_13",
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
