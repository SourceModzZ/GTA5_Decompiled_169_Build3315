#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	char* sLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 3;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 1092616192;
	var uLocal_45 = 1101004800;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 3;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	BOOL bLocal_73 = 0;
	BOOL bLocal_74 = 0;
	BOOL bLocal_75 = 0;
	BOOL bLocal_76 = 0;
	BOOL bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 2;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 2;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 2;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = 0;
	char* sLocal_102 = 0;
	char* sLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = -1;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 1000;
	var uLocal_114 = 1000;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
#endregion

void main() // Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_83 = -1;
	sLocal_101 = "PMDL_OBJ";
	sLocal_102 = "PMDL_LOC";
	sLocal_103 = "PMDL_BCK";
	unk_0x925970A93719CADE(1);

	if (unk_0x96CFB880BAC634CE(3))
	{
		func_143(2);
		func_115();
	}

	iLocal_34 = func_113();

	while (true)
	{
		switch (iLocal_35)
		{
			case 0:
				if (!bLocal_74)
					func_108();
				else
					func_107();
			
				if (bLocal_73)
				{
					bLocal_75 = true;
					iLocal_35 = 1;
				}
				break;
		
			case 1:
				if (!func_106())
				{
					switch (iLocal_36)
					{
						case 0:
							func_103();
							break;
					
						case 1:
							if (iLocal_34 == 5 || iLocal_34 == 6)
								func_67();
							else
								func_66();
							break;
					
						case 2:
							func_9();
						
							if (iLocal_34 < 3)
							{
								func_7();
							}
							else if (iLocal_34 > 6)
							{
								func_7();
								func_2();
							}
							break;
					
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x153
{
	func_143(2);
	func_115();
	return;
}

void func_2() // Position - 0x164
{
	int num;
	int num2;

	if (unk_0xFC8BFE4B41177C22(iLocal_94))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_94, 0))
		{
			num = 200;
			num2 = unk_0x8D91ADE44AC79BC9(iLocal_94) - 800;
		
			if (unk_0xD1F1A906BA9226BE(iLocal_94))
				unk_0xD25E9BDC14A0B649(iLocal_94, unk_0x8D91ADE44AC79BC9(iLocal_94) - 5, 0, 0);
		
			if (num2 <= 0)
				iLocal_36 = 4;
			else if (num2 < 75)
				func_3(num2, num, "PMDL_DMG", 6, 0, 1, 2);
			else
				func_3(num2, num, "PMDL_DMG", 1, 0, 1, 2);
		}
		else
		{
			iLocal_36 = 4;
		}
	}
	else
	{
		iLocal_36 = 4;
	}

	return;
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1E8
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	return;
}

void func_4(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39) // Position - 0x230
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_6(0, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1670224.f_1 = 1;
		func_5(0, num);
		Global_1670224.f_1177[num] = iParam0;
		Global_1670224.f_1177.f_11[num] = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_1670224.f_1177.f_22[num /*16*/], sParam2, 64);
		Global_1670224.f_1177.f_194[num] = iParam3;
		Global_1670224.f_1177.f_183[num] = iParam4;
		Global_1670224.f_1177.f_227[num] = iParam5;
		Global_1670224.f_1177.f_238[num /*3*/] = fParam6;
		Global_1670224.f_1177.f_238[num /*3*/].f_1 = fParam7;
		Global_1670224.f_1177.f_269[num] = iParam8;
		Global_1670224.f_1177.f_280[num] = iParam9;
		Global_1670224.f_1177.f_323[num] = iParam10;
		Global_1670224.f_1177.f_334[num] = iParam11;
		Global_1670224.f_1177.f_345[num] = iParam12;
		Global_1670224.f_1177.f_356[num] = iParam13;
		Global_1670224.f_1172 = 1;
		Global_1670224.f_1177.f_367[num] = iParam14;
		Global_1670224.f_1177.f_378[num] = iParam15;
		Global_1670224.f_1177.f_389[num] = iParam16;
		Global_1670224.f_1177.f_400[num] = iParam17;
		Global_1670224.f_1177.f_411[num] = iParam18;
		Global_1670224.f_1177.f_422[num] = iParam19;
		Global_1670224.f_1177.f_433[num] = iParam20;
		Global_1670224.f_1177.f_444[num] = iParam21;
		Global_1670224.f_1177.f_455[num] = iParam22;
		Global_1670224.f_1177.f_466[num] = iParam23;
		Global_1670224.f_1177.f_477[num] = iParam24;
		Global_1670224.f_1177.f_205[num] = iParam25;
		Global_1670224.f_1177.f_216[num] = iParam39;
		Global_1670224.f_1177.f_488[num] = iParam26;
		Global_1670224.f_1177.f_499[num] = iParam27;
		Global_1670224.f_1177.f_510[num] = iParam28;
		Global_1670224.f_1177.f_521[num] = iParam29;
		Global_1670224.f_1177.f_532[num] = iParam30;
		Global_1670224.f_1177.f_543[num] = iParam31;
		Global_1670224.f_1177.f_554[num] = iParam32;
		Global_1670224.f_1177.f_565[num] = iParam33;
		Global_1670224.f_1177.f_576[num] = iParam34;
		Global_1670224.f_1177.f_587[num] = iParam35;
		Global_1670224.f_1177.f_598[num] = iParam36;
		Global_1670224.f_1177.f_609[num] = iParam37;
		Global_1670224.f_1177.f_620[num] = iParam38;
	}

	return;
}

void func_5(int iParam0, int iParam1) // Position - 0x4F7
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_1670224.f_7064[iParam0], iParam1);
	return;
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x510
{
	return IS_BIT_SET(Global_1670224.f_7064[iParam0], iParam1);
}

void func_7() // Position - 0x526
{
	int num;

	num = iLocal_78 - unk_0x1DD05E817C89C737();

	if (num < 0)
		num = 0;

	if (unk_0x1DD05E817C89C737() >= iLocal_82)
		func_8(num, "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	else
		func_8(num, "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);

	switch (iLocal_79)
	{
		case 0:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 10000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 1:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 9000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 2:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 8000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 3:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 7000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 4:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 6000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 5:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 5000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 6:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 4500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 7:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 4000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 8:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 3500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 9:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 3000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 10:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 2500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 11:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 2000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 12:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 1500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 13:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 1000)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 14:
			if (unk_0x1DD05E817C89C737() >= iLocal_78 - 500)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 15:
			if (unk_0x1DD05E817C89C737() >= iLocal_78)
			{
				unk_0xBF3D28CA44F3BE2D(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 16:
			break;
	}

	if (unk_0x1DD05E817C89C737() >= iLocal_78)
		iLocal_36 = 3;

	return;
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x816
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_6(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1670224.f_1 = 1;
		func_5(7, num);
		Global_1670224.f_4714[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1670224.f_4714.f_11[num /*16*/], sParam1, 64);
		Global_1670224.f_4714.f_172[num] = iParam2;
		Global_1670224.f_4714.f_216[num] = iParam3;
		Global_1670224.f_4714.f_183[num] = iParam4;
		Global_1670224.f_4714.f_194[num] = iParam5;
		Global_1670224.f_4714.f_249[num] = iParam6;
		Global_1670224.f_4714.f_260[num] = iParam7;
		Global_1670224.f_4714.f_205[num] = iParam8;
		Global_1670224.f_4714.f_314[num] = iParam9;
		Global_1670224.f_4714.f_325[num] = iParam10;
		Global_1670224.f_4714.f_357[num] = iParam11;
		Global_1670224.f_4714.f_238[num] = iParam12;
		Global_1670224.f_4714.f_271[num] = iParam13;
		Global_1670224.f_4714.f_368[num] = iParam14;
		Global_1670224.f_4714.f_379[num] = iParam15;
		Global_1670224.f_4714.f_390[num] = iParam16;
		Global_1670224.f_4714.f_227[num] = iParam17;
	}

	return;
}

void func_9() // Position - 0x973
{
	int i;
	int j;

	if (iLocal_34 >= 3 && iLocal_34 <= 4)
	{
		for (i = 0; i < iLocal_91; i = i + 1)
		{
			if (!bLocal_76)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_91[i]))
				{
					if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uLocal_62, 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 2, 0);
						unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
						unk_0x446468040E515438(unk_0x259BE71D8A81D4FA(), 0f);
						bLocal_76 = true;
					}
				}
			}
			else if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_91[i]))
				{
					unk_0xD844F5E50DAB6FF7(iLocal_91[i], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
					unk_0x44FB298D6382876D(iLocal_91[i], 1);
					unk_0xF09E30AF1B8FB379(&iLocal_91[i]);
				}
			
				if (unk_0xFC8BFE4B41177C22(uLocal_95))
					unk_0x68298CA6191CDFDB(&uLocal_95);
			}
		}
	}

	if (func_22(&uLocal_37, uLocal_65, Global_23, 1, iLocal_94, sLocal_102, "", sLocal_103, true, 0, true, -1))
	{
		func_19(iLocal_94, 10.5f, 2, 1056964608, 0, true, false);
		unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 2000, 0);
		unk_0xF04751F8E604D487(iLocal_94, 0);
		func_14(&uLocal_37, true, false);
		func_13();
	}

	for (j = 0; j < iLocal_88; j = j + 1)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_88[j]))
		{
			if (!unk_0xC450B06E5AAA0985(uLocal_97[j]))
			{
				uLocal_97[j] = func_10(iLocal_88[j], true, 145);
				unk_0xB5396F1FB088FE38(&uLocal_118);
				unk_0x092B9247AF00F5CF(0, 0, 0);
				unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x93C0674FC00824D0(uLocal_118);
				unk_0x4BD42B0527065BB6(iLocal_88[j], uLocal_118);
				unk_0xD0557B139A542F12(&uLocal_118);
				unk_0x44FB298D6382876D(iLocal_88[j], 1);
			}
		
			if (!unk_0xFAA48325A90263BE(iLocal_88[j], unk_0x4A8C381C258A124D(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0xC450B06E5AAA0985(uLocal_97[j]))
					unk_0xFE54B8568B2ABD12(&uLocal_97[j]);
			
				unk_0xD844F5E50DAB6FF7(iLocal_88[j], unk_0x4A8C381C258A124D(), 1000f, -1, 0, 0);
				unk_0x44FB298D6382876D(iLocal_88[j], 1);
				unk_0xF09E30AF1B8FB379(&iLocal_88[j]);
			}
		}
		else if (unk_0xC450B06E5AAA0985(uLocal_97[j]))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_97[j]);
		}
	}

	return;
}

int func_10(int iParam0, BOOL bParam1, int iParam2) // Position - 0xB9D
{
	int num;

	num = func_11(iParam0, !bParam1, false);

	if (iParam2 != 145 && unk_0xC450B06E5AAA0985(num) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
		unk_0x594D5D0D7071B0DE(num, &(Global_2169[iParam2 /*29*/].f_3));

	return num;
}

int func_11(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xBE7
{
	int num;

	if (!unk_0xFC8BFE4B41177C22(iParam0))
		return 0;

	num = unk_0x18E23E031A9B798F(iParam0);

	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(num, unk_0x76CD105BCAC6EB9F() ? 1f : 1f);
	
		if (!bParam2)
			unk_0x6A52036D51C7E18E(num, bParam1);
		else
			unk_0x61183D6239A9D7B8(num, 2);
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(num, unk_0x76CD105BCAC6EB9F() ? 0.7f : 0.7f);
		unk_0x6A52036D51C7E18E(num, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(num, unk_0x76CD105BCAC6EB9F() ? 0.7f : 0.7f);
	}

	return num;
}

var func_12(BOOL bParam0, var uParam1, var uParam2) // Position - 0xC8B
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_13() // Position - 0xCA2
{
	func_143(1);
	func_115();
	return;
}

void func_14(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCB3
{
	int i;

	if (IS_BIT_SET(uParam0->f_13, 30))
		bParam1 = true;

	func_18(uParam0);

	for (i = 0; i < 3; i = i + 1)
	{
		if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
			unk_0xFE54B8568B2ABD12(&uParam0->f_1[i]);
	
		func_17(i, uParam0);
		func_16(i, uParam0);
	}

	for (i = 0; i < 31; i = i + 1)
	{
		if (i != 8)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), i);
			unk_0x8744D2E3FC95740E(&(uParam0->f_14), i);
		}
	}

	if (unk_0xC450B06E5AAA0985(*uParam0))
		unk_0xFE54B8568B2ABD12(uParam0);

	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
		{
			unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[i], 1);
			unk_0xD9757FAB956617BA(uParam0->f_17[i], 1);
		
			if (bParam2)
			{
				unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 32, 1);
				unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 305, 0);
			}
		
			unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 268, 0);
		
			if (bParam1)
				if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()) && uParam0->f_17[i] != unk_0x4A8C381C258A124D())
					unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
		
			if (!IS_BIT_SET(uParam0->f_13, 29))
				unk_0x96A0632EBDD87FA3(uParam0->f_17[i], 0, -1, 0);
		
			uParam0->f_17[i] = 0;
		}
	}

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 1);
		unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 1);
	}

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		if (bParam2)
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 1);

	uParam0->f_21 = 0;
	return;
}

var func_15() // Position - 0xE5E
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

void func_16(int iParam0, var uParam1) // Position - 0xE6E
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 17);
			break;
	
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 18);
			break;
	
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 19);
			break;
	}

	return;
}

void func_17(int iParam0, var uParam1) // Position - 0xEB6
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 14);
			break;
	
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 15);
			break;
	
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 16);
			break;
	}

	return;
}

void func_18(var uParam0) // Position - 0xEFE
{
	if (unk_0xC450B06E5AAA0985(uParam0->f_5))
		unk_0xFE54B8568B2ABD12(&(uParam0->f_5));

	return;
}

int func_19(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xF19
{
	func_21(bParam5, bParam6);
	func_20(iParam0);

	if (unk_0x1DD05E817C89C737() - Global_30 > 500)
		unk_0xE5EE5C9DDF05D925(iParam0, fParam1, iParam2, iParam4);

	Global_30 = unk_0x1DD05E817C89C737();

	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= iParam3)
			return 1;

	return 0;
}

void func_20(int iParam0) // Position - 0xF70
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		if (unk_0xA03728CC57F6DD36(iParam0))
			if (unk_0x772683F12F46CE82(iParam0))
				unk_0x5B29AF88D03CEB7A(iParam0, 0);

	return;
}

void func_21(BOOL bParam0, BOOL bParam1) // Position - 0xF9C
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);

	if (bParam0)
		unk_0x66EFB3D6110055C4(0, 75, 1);

	unk_0x66EFB3D6110055C4(0, 80, 1);

	if (!bParam1)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}

	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
	return;
}

BOOL func_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, BOOL bParam12, int iParam13, BOOL bParam14, int iParam15) // Position - 0x10ED
{
	return func_23(uParam0, uParam1, uParam4, func_65(), func_65(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_64(), func_64(), func_64(), func_64(), sParam10, false, bParam12, sParam11, false, iParam13, bParam14, iParam15, 0, 0, 0, true, 1065353216);
}

BOOL func_23(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, BOOL bParam25, BOOL bParam26, char* sParam27, BOOL bParam28, int iParam29, BOOL bParam30, int iParam31, int iParam32, int iParam33, int iParam34, BOOL bParam35, int iParam36) // Position - 0x113C
{
	var unk;
	BOOL flag;
	int i;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	unk2 = { uParam1 + { 1f, 0f, 0f } };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_63(uParam0);
	func_62(uParam0);
	func_61();

	if (func_45(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, false, false, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_44(sParam20);
		func_44(sParam21);
		func_44(sParam22);
		func_44(sParam23);
	
		if (unk_0x9390801B06EE998F())
		{
			flag = false;
		
			if (unk_0xD9F5E1FEFD1329E4(iParam18, 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam18, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
				
					if (!IS_BIT_SET(uParam0->f_13, 9))
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
				
					if (IS_BIT_SET(uParam0->f_13, 23))
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 23);
				
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					flag = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_42(uParam0, iParam29))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
				
					if (!IS_BIT_SET(uParam0->f_13, 9))
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
				
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					flag = true;
				}
			}
			else
			{
				flag = true;
			}
		
			if (flag)
			{
				func_44(sParam24);
				func_44(sParam27);
				func_44("MORE_SEATS" /*A vehicle with more seats is needed.*/);
			
				if (bParam26 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						func_44(sParam19);
					}
				
					if (unk_0xC450B06E5AAA0985(*uParam0))
						unk_0xFE54B8568B2ABD12(uParam0);
				
					if (!func_38(uParam0, 1) && !func_37(uParam0) && !IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_35(uParam0, "LOSE_WANTED" /*Lose the Cops.*/, false);
						
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
								func_33(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
						}
					
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 0);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(uParam0->f_13, 0))
					{
						func_44("LOSE_WANTED" /*Lose the Cops.*/);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 1);
					}
				
					if (IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!func_38(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
								func_33(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
						
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
						}
					}
				
					if (!unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						if (unk_0xC450B06E5AAA0985(*uParam0))
							unk_0xFE54B8568B2ABD12(uParam0);
					
						uParam0->f_5 = func_32(unk2, 0);
					
						if (!(iParam31 == -1))
							unk_0x4C905FB262965D5D(uParam0->f_5, iParam31);
					
						if (bParam35)
							func_31(uParam0->f_5, uParam0);
					}
					else if (!func_30(unk2, unk_0x3CF9D442F2C902BD(uParam0->f_5), 0.1f, false))
					{
						unk_0xDABC73EF230B6665(uParam0->f_5, unk2);
					
						if (bParam35)
							func_31(uParam0->f_5, uParam0);
					}
				
					if (!func_38(uParam0, 2))
					{
						if (!IS_BIT_SET(uParam0->f_13, 2))
						{
							func_35(uParam0, sParam19, false);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 2);
						}
					}
				
					if (iParam14 == 4 || iParam14 == 5)
						if (IS_BIT_SET(uParam0->f_13, 13))
							iParam13 = 0;
				
					flag = false;
					num = 0;
					num2 = 0;
				
					if (iParam14 == 1 || iParam14 == 3 || iParam14 == 5)
						num = 1;
				
					if (iParam14 == 2 || iParam14 == 3)
						num2 = 1;
					else if (iParam14 == 4 || iParam14 == 5)
						num2 = 2;
				
					if (bParam28)
					{
						unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uParam1, uParam4, iParam13, num, num2);
					
						if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), uParam7, uParam10, iParam36, 0, num, num2))
							flag = true;
					}
					else if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), uParam1, uParam4, iParam13, num, num2))
					{
						flag = true;
					}
				
					if (flag)
					{
						flag = true;
					
						for (i = 0; i < 3; i = i + 1)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
								
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[i], unk, 0))
										flag = false;
								}
								else if (iParam18 != 0)
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[i], iParam18, 0))
										flag = false;
								}
								else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()) || !func_28(uParam0->f_17[i], 1))
								{
									flag = false;
								}
							}
						}
					
						if (flag)
						{
							if (func_25(uParam0))
							{
								func_44(sParam19);
								func_44(sParam24);
								func_44(sParam20);
								func_44(sParam21);
								func_44(sParam22);
								func_44(sParam23);
								func_44("LOSE_WANTED" /*Lose the Cops.*/);
								func_44("MORE_SEATS" /*A vehicle with more seats is needed.*/);
								func_44(sParam27);
								func_14(uParam0, true, false);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xFC8BFE4B41177C22(iParam18))
			{
				if (bParam26 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) && !IS_BIT_SET(uParam0->f_13, 9) && !IS_BIT_SET(uParam0->f_13, 22))
				{
					func_44(sParam24);
					func_44(sParam27);
				
					if (unk_0xC450B06E5AAA0985(uParam0->f_5) || unk_0xC450B06E5AAA0985(*uParam0))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						unk_0xFE54B8568B2ABD12(uParam0);
						func_44(sParam19);
					}
				
					if (!func_38(uParam0, 1) && !func_37(uParam0) && !IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_35(uParam0, "LOSE_WANTED" /*Lose the Cops.*/, false);
						
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
								func_33(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
						}
					
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 0);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(uParam0->f_13, 0))
					{
						func_44("LOSE_WANTED" /*Lose the Cops.*/);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 1);
					}
				
					if (IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!func_38(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
								func_33(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
						
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
						}
					}
				
					if (unk_0xD9F5E1FEFD1329E4(iParam18, 0))
					{
						if (!unk_0xC450B06E5AAA0985(*uParam0))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_5))
							{
								unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
								func_44(sParam19);
							}
						
							*uParam0 = func_24(iParam18, false, false);
							unk_0xF55F62DA99DB0C2F(*uParam0, 2);
						
							if (!IS_BIT_SET(uParam0->f_13, 4))
								func_31(*uParam0, uParam0);
						}
					
						if (!func_38(uParam0, 2))
						{
							if (!IS_BIT_SET(uParam0->f_13, 3))
							{
								func_35(uParam0, sParam24, false);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (IS_BIT_SET(uParam0->f_13, 9))
							{
								if (!unk_0xFF692AB7350A74D7(sParam27))
								{
									if (!IS_BIT_SET(uParam0->f_13, 4))
									{
										func_35(uParam0, sParam27, false);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
									}
								}
								else if (!IS_BIT_SET(uParam0->f_13, 4))
								{
									func_35(uParam0, sParam24, false);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							
								if (!IS_BIT_SET(uParam0->f_13, 23))
								{
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
										func_33(uParam0->f_17[0], "GET_IN_CAR", 3);
								
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_5))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
					func_44(sParam19);
				}
			
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_38(uParam0, 2))
						{
							if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
							{
								if (!IS_BIT_SET(uParam0->f_13, 13))
								{
									num3 = 0;
									num4 = 0;
								
									for (i = 0; i < 3; i = i + 1)
									{
										if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
											num3 = num3 + 1;
									}
								
									num4 = unk_0xC5935DFB3F39785A(0, num3);
								
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[num4]))
										func_33(uParam0->f_17[num4], "NEED_A_BIGGER_VEHICLE", 3);
								
									func_35(uParam0, "MORE_SEATS" /*A vehicle with more seats is needed.*/, false);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
								}
							}
							else if (!IS_BIT_SET(uParam0->f_13, 3))
							{
								func_35(uParam0, sParam24, false);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (!IS_BIT_SET(uParam0->f_13, 4))
							{
								if (IS_BIT_SET(uParam0->f_13, 9))
								{
									func_35(uParam0, sParam27, false);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_38(uParam0, 2))
					{
						if (!IS_BIT_SET(uParam0->f_13, 3))
						{
							func_35(uParam0, sParam24, false);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
						}
						else if (IS_BIT_SET(uParam0->f_13, 9))
						{
							if (!unk_0xFF692AB7350A74D7(sParam27))
							{
								if (!IS_BIT_SET(uParam0->f_13, 4))
								{
									func_35(uParam0, sParam27, false);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
							else if (!IS_BIT_SET(uParam0->f_13, 4))
							{
								func_35(uParam0, sParam24, false);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (IS_BIT_SET(uParam0->f_13, 0))
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
	
		func_44(sParam19);
		func_44(sParam24);
		func_44(sParam27);
		func_44(sParam24);
		func_44("LOSE_WANTED" /*Lose the Cops.*/);
	
		if (unk_0xC450B06E5AAA0985(uParam0->f_5))
			unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
	
		if (unk_0xC450B06E5AAA0985(*uParam0))
			unk_0xFE54B8568B2ABD12(uParam0);
	}

	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 11);
	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 12);
	return 0;
}

int func_24(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A41
{
	return func_11(iParam0, !bParam1, bParam2);
}

BOOL func_25(var uParam0) // Position - 0x1A54
{
	if (IS_BIT_SET(uParam0->f_13, 12))
		if (func_27(unk_0x4A8C381C258A124D()))
			if (func_26(true, false, true) || IS_BIT_SET(uParam0->f_13, 7))
				return true;
	else if (func_26(true, false, true) || IS_BIT_SET(uParam0->f_13, 7))
		return true;

	return false;
}

BOOL func_26(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1AA9
{
	int num;

	if (unk_0x94A7730DEC6E86C8())
		return false;

	if (bParam0)
		if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			return false;

	num = 0;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			return false;
	
		num = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	
		if (bParam0)
			if (unk_0x1C2F771CDC87A3A5(num, 0))
				return false;
	
		if (bParam2)
			if (!unk_0x1C2F771CDC87A3A5(num, 0))
				if (unk_0xFD5C5BBD1FE92BB7(num, -1, 0) != unk_0x4A8C381C258A124D())
					return false;
	
		if (!unk_0x1C2F771CDC87A3A5(num, 0))
			if (unk_0x032CEF99C0D59B73(num) < 0.95f || unk_0x032CEF99C0D59B73(num) > 1.011f)
				return false;
	}
	else if (bParam1)
	{
		return false;
	}

	if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()))
		return false;

	if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
		return false;

	return true;
}

BOOL func_27(var uParam0) // Position - 0x1B8E
{
	float num;

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		num = unk_0xDF93B3CFAC96698F(uParam0);
	
		if (num > -0.5f && num < 0.5f)
			return true;
	}

	return false;
}

BOOL func_28(var uParam0, int iParam1) // Position - 0x1BC5
{
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && iParam1)
		{
			if (func_29(unk_0x4A8C381C258A124D(), uParam0))
			{
				unk_0x316802E03D8923D8(func_15(), 50f);
				return true;
			}
		}
		else if (unk_0xD11A63E12F198FDB(uParam0, func_15()))
		{
			unk_0x316802E03D8923D8(func_15(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_29(var uParam0, var uParam1) // Position - 0x1C30
{
	var unk;

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (unk_0x27E68848F0E5D7D9(uParam0))
		{
			unk = unk_0x6EF03BE64E058E2F(uParam0, 0);
		
			if (unk_0xD9F5E1FEFD1329E4(unk, 0))
				if (!unk_0x4FAFF4BCB7633475(uParam1))
					if (unk_0xF4244288C3EF3306(uParam1, unk))
						return true;
		}
	}

	return false;
}

BOOL func_30(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x1C78
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (unk_0x1D5CD3EAAA7422B0(fParam0 - uParam3) <= fParam6)
			if (unk_0x1D5CD3EAAA7422B0(fParam0.f_1 - uParam3.f_1) <= fParam6)
				if (unk_0x1D5CD3EAAA7422B0(fParam0.f_2 - uParam3.f_2) <= fParam6)
					return true;
	else if (unk_0x1D5CD3EAAA7422B0(fParam0 - uParam3) <= fParam6)
		if (unk_0x1D5CD3EAAA7422B0(fParam0.f_1 - uParam3.f_1) <= fParam6)
			return true;

	return false;
}

void func_31(var uParam0, var uParam1) // Position - 0x1CF3
{
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if (unk_0xC450B06E5AAA0985(uParam1->f_6))
			unk_0xBC64B805EE071A37(uParam1->f_6, 0);
	
		unk_0x0F20DD0DCEB2959F(0);
		unk_0xC3C7C9791CD79114();
		uParam1->f_6 = uParam0;
		unk_0xBC64B805EE071A37(uParam0, 1);
	}

	return;
}

var func_32(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1D2E
{
	var unk;

	unk = unk_0x34864AB7DA700AA6(uParam0);
	unk_0x5D3946F818C6B331(unk, unk_0x76CD105BCAC6EB9F() ? 1f : 1f);
	unk_0xBC64B805EE071A37(unk, iParam3);
	return unk;
}

void func_33(var uParam0, char* sParam1, int iParam2) // Position - 0x1D5A
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_34(iParam2), 1);
	return;
}

char* func_34(int iParam0) // Position - 0x1D71
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

void func_35(var uParam0, char* sParam1, BOOL bParam2) // Position - 0x1F63
{
	if (!bParam2)
		if (!unk_0xFF692AB7350A74D7(sParam1))
			if (!unk_0x1B79E937E91F40C3(sParam1, ""))
				_SHOW_SUBTITLE_CLEAR_EXISTING(sParam1, 7500, 1);

	uParam0->f_10 = unk_0x1DD05E817C89C737();
	return;
}

void _SHOW_SUBTITLE_CLEAR_EXISTING(char* sParam0, int iParam1, int iParam2) // Position - 0x1F9A
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
	return;
}

BOOL func_37(var uParam0) // Position - 0x1FB3
{
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_16))
		if (unk_0x912159A05BE6B52E(uParam0->f_16))
			return true;

	return false;
}

BOOL func_38(var uParam0, int iParam1) // Position - 0x1FD7
{
	if (iParam1 != 1 || unk_0x5994A2F6D4FFFE4D())
	{
		if (unk_0xFBA523E6F8ACE541())
			return true;
	
		if (func_41(uParam0))
			return true;
	}

	if (iParam1 != 2 || unk_0x5994A2F6D4FFFE4D())
		if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && !func_39())
			return true;

	return false;
}

BOOL func_39() // Position - 0x202F
{
	if (Global_23297 == 1)
		return true;

	return false;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x2046
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
		return true;

	return false;
}

BOOL func_41(var uParam0) // Position - 0x2068
{
	int num;
	int num2;

	num2 = unk_0x1DD05E817C89C737();
	num = num2 - uParam0->f_10;

	if (num < 35)
		return true;

	return false;
}

BOOL func_42(var uParam0, int iParam1) // Position - 0x208B
{
	var unk;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	
		if (func_43(unk, uParam0, iParam1))
			return true;
	}

	return false;
}

BOOL func_43(var uParam0, var uParam1, int iParam2) // Position - 0x20BC
{
	int num;
	int num2;
	int i;

	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		num = 0;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (unk_0xFC8BFE4B41177C22(uParam1->f_17[i]))
				num = num + 1;
		}
	
		num2 = unk_0x2EEC0612337D20CE(uParam0);
	
		if (iParam2 > 0)
			if (num2 >= iParam2)
				if (iParam2 > 1)
					if (!unk_0x22007BC82AF0074B(uParam0, 1))
						return true;
				else
					return true;
		else if (num2 >= num)
			if (num > 1)
				if (!unk_0x22007BC82AF0074B(uParam0, 1))
					return true;
			else
				return true;
	}

	return false;
}

void func_44(char* sParam0) // Position - 0x2150
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
		unk_0x4E8E15513E171E54(sParam0);

	return;
}

BOOL func_45(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, BOOL bParam9, int iParam10, BOOL bParam11, BOOL bParam12, int iParam13, int iParam14, int iParam15, int iParam16, BOOL bParam17) // Position - 0x2168
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	var unk;
	BOOL flag2;
	BOOL flag3;
	int num6;
	int num7;
	var unk5;
	var unk9;
	BOOL flag4;
	var unk13;
	int num8;
	int num9;
	int num10;
	var unk14;
	int num11;
	var unk17;

	num4 = 0;
	unk = 3;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	unk5 = 3;
	unk5[0] = uParam4;
	unk5[1] = uParam5;
	unk5[2] = uParam6;
	unk9 = 3;
	unk9[0] = iParam13;
	unk9[1] = iParam14;
	unk9[2] = iParam15;
	flag = true;
	num = 0;
	num2 = 0;
	num3 = 0;
	unk[0] = 0;
	unk[1] = 0;
	unk[2] = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
			num3 = num3 + 1;
	
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		{
			if (!IS_BIT_SET(uParam0->f_13, 29) && !IS_BIT_SET(uParam0->f_13, 28))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
					unk_0x96A0632EBDD87FA3(uParam0->f_17[i], 1, -1, 0);
			
				if (i == 2)
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 28);
			}
		}
		else if (!IS_BIT_SET(uParam0->f_13, 29) && IS_BIT_SET(uParam0->f_13, 28))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
				unk_0x96A0632EBDD87FA3(uParam0->f_17[i], 0, -1, 0);
		
			if (i == 2)
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 28);
		}
	}

	if (num3 == 0)
		return true;

	if (IS_BIT_SET(uParam0->f_13, 26))
	{
		flag4 = false;
	
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_21))
		{
			num8 = 64;
			num8 = num8 | 65536;
			num8 = num8 | 2048;
			num8 = num8 | 1;
			num8 = num8 | 2;
			num8 = num8 | 4;
			num8 = num8 | 32;
			num8 = num8 | 16;
			num8 = num8 | 8;
			unk13 = unk_0xF0CA45A211FFDCD9(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 50f, 0, num8);
		
			if (unk_0xD9F5E1FEFD1329E4(unk13, 0))
				uParam0->f_21 = unk13;
		}
	
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) || !bParam17)
					{
						if (func_43(uParam0->f_21, uParam0, num3))
						{
							for (i = 0; i < 3; i = i + 1)
							{
								if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
								{
									unk_0x4190C67D524CD0DC(uParam0->f_17[i], 1f);
								
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
										unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
								
									if (unk_0x9B5C1660CCDF7189(uParam0->f_17[i], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7 && !func_60(uParam0->f_17[i], uParam0->f_21))
									{
										if (!unk_0x8BF5256C439DF778(uParam0->f_17[i]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[i]))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[i], 1);
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[i], uParam0->f_21, 60000, i, 1f, 1, 0, 0);
											unk_0x412B9F2CF0E60079(uParam0->f_17[i], i);
										}
									}
								}
							}
						
							return true;
						}
						else
						{
							flag4 = true;
						}
					}
					else
					{
						flag4 = true;
					}
				}
				else
				{
					flag4 = true;
				}
			}
			else
			{
				flag4 = true;
			}
		}
		else
		{
			flag4 = true;
		}
	
		if (flag4)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 26);
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
				{
					if (!unk_0x9D6DF8F3584AAC2B(uParam0->f_17[i]) && !uParam0->f_15)
						unk_0x974022927CB47E68(uParam0->f_17[i]);
				
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
						if (func_58(uParam0, uParam0->f_17[i], uParam8, true))
							unk_0x03AB73582A77DBD3(uParam0->f_17[i], func_15());
				}
			}
		}
	}

	if (!IS_BIT_SET(uParam0->f_13, 26))
	{
		if (!func_57(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && !unk_0xFC8BFE4B41177C22(iParam10))
		{
			num6 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		
			if (unk_0xD9F5E1FEFD1329E4(num6, 0))
			{
				if (!IS_BIT_SET(uParam0->f_13, 13))
				{
					iParam16 == 4 || iParam16 == 5;
				
					if (!func_38(uParam0, 2))
					{
						num9 = 0;
						num10 = 0;
					
						for (i = 0; i < 3; i = i + 1)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
								num9 = num9 + 1;
						}
					
						num10 = unk_0xC5935DFB3F39785A(0, num9);
					
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[num10]))
							func_33(uParam0->f_17[num10], "NEED_A_BIGGER_VEHICLE", 3);
					
						func_35(uParam0, "MORE_SEATS" /*A vehicle with more seats is needed.*/, false);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
					}
				}
			
				flag3 = true;
			}
		}
		else
		{
			flag3 = false;
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 13);
			func_44("MORE_SEATS" /*A vehicle with more seats is needed.*/);
		}
	
		if (!unk_0xFC8BFE4B41177C22(iParam10))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[1]) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[2]))
			{
				if (!IS_BIT_SET(uParam0->f_13, 31))
				{
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && !func_38(uParam0, 2))
					{
						num6 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					
						if (func_56(num6, uParam0))
						{
							func_35(uParam0, "CMN_VEHSUIT" /*~s~Vehicle is not suitable.*/, false);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					unk_0x8744D2E3FC95740E(&(uParam0->f_13), 31);
					func_44("CMN_VEHSUIT" /*~s~Vehicle is not suitable.*/);
				}
			}
		}
	
		if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
			if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
				if (unk_0x875A214D5EBCA509(0, 75))
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
			else if (IS_BIT_SET(uParam0->f_13, 21))
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 21);
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[i]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
				{
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
						unk_0x34A9A872D3C510BF(uParam0->f_17[i], 1);
					else
						unk_0x34A9A872D3C510BF(uParam0->f_17[i], 0);
				
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
					{
						num6 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					
						if (unk_0xD9F5E1FEFD1329E4(num6, 0))
							if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
								if (!func_57(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
									if (!func_55(uParam0->f_17[i]))
										unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
					
						if (num6 != iParam10 && !unk_0x1C2F771CDC87A3A5(num6, 0))
						{
							if (unk_0xF4244288C3EF3306(uParam0->f_17[i], num6))
							{
								if (unk_0x69799E0840A34AFB(num6) && !unk_0xD2A0543EC400E1A5(num6))
								{
									unk14 = { unk_0xD1A6A821F5AC81DB(num6, 1) };
								
									if (unk14.f_2 < -1f)
										unk_0x23EB5FC236231892(uParam0->f_17[i], num6, 64);
								}
							}
						}
					}
				
					flag2 = true;
				
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
					{
						if (unk_0x27E68848F0E5D7D9(uParam0->f_17[i]))
						{
							num6 = unk_0x6EF03BE64E058E2F(uParam0->f_17[i], 0);
						
							if (!unk_0x1C2F771CDC87A3A5(num6, 0))
							{
								if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
								{
									if (num6 != iParam10)
									{
										if (!unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), num6))
										{
											if (unk_0xDF93B3CFAC96698F(num6) > 5f)
												unk_0x23EB5FC236231892(uParam0->f_17[i], num6, 4160);
											else
												unk_0x23EB5FC236231892(uParam0->f_17[i], num6, 64);
										
											flag2 = false;
										}
									}
								}
								else
								{
									if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
										num11 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
								
									if (unk_0xD9F5E1FEFD1329E4(num11, 0))
									{
										if (num6 != num11)
										{
											if (unk_0xDF93B3CFAC96698F(num6) > 5f)
												unk_0x23EB5FC236231892(uParam0->f_17[i], num6, 4160);
											else
												unk_0x23EB5FC236231892(uParam0->f_17[i], num6, 64);
										
											flag2 = false;
										}
									}
								}
							}
						}
					}
				
					if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
					{
						unk17 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
					
						if (unk_0xFC8BFE4B41177C22(unk17))
						{
							if (func_43(unk17, uParam0, 0))
							{
								if (func_54(i, uParam0) || !IS_BIT_SET(uParam0->f_13, 27))
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[i], i);
									func_16(i, uParam0);
									num4 = num4 + 1;
								
									if (num4 >= num3)
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 27);
								}
							}
							else if (!func_54(i, uParam0))
							{
								if (unk_0x4B423FAA24E8ABF0(unk17) == joaat("sentinel2"))
									unk_0x412B9F2CF0E60079(uParam0->f_17[i], 4);
								else
									unk_0x412B9F2CF0E60079(uParam0->f_17[i], 2);
							
								func_53(i, uParam0);
							}
						}
					}
				
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()) && !func_52(uParam0->f_17[i], iParam10) && !func_51(uParam0->f_17[i], iParam10))
					{
						if (func_58(uParam0, uParam0->f_17[i], uParam8, bParam11))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
							{
								if (!unk_0x8BF5256C439DF778(uParam0->f_17[i]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[i]) && !unk_0xE7895DBF72C7F282(uParam0->f_17[i]) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[i]))
								{
									num7 = unk_0x9B5C1660CCDF7189(uParam0->f_17[i], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
								
									if (num7 == 7)
										unk_0x974022927CB47E68(uParam0->f_17[i]);
								
									unk_0x03AB73582A77DBD3(uParam0->f_17[i], func_15());
									flag2 = false;
								}
							}
						}
					
						if (flag2)
						{
							if (!unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
							{
								uParam0->f_11 = unk_0x1DD05E817C89C737();
								uParam0->f_1[i] = func_24(uParam0->f_17[i], false, false);
								unk_0xF55F62DA99DB0C2F(uParam0->f_1[i], 2);
							
								if (bParam9)
									func_31(uParam0->f_1[i], uParam0);
							}
						}
					
						flag = false;
					}
					else if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
					{
						if (func_28(uParam0->f_17[i], 1) || func_52(uParam0->f_17[i], iParam10) || bParam12 || unk_0xD9F5E1FEFD1329E4(iParam10, 0) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
							{
								unk_0xFE54B8568B2ABD12(&uParam0->f_1[i]);
								func_44(unk5[i]);
							}
						}
						else
						{
							if (bParam9)
								func_31(uParam0->f_1[i], uParam0);
						
							flag = false;
						}
					}
					else if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
					{
						if (!unk_0xF4244288C3EF3306(uParam0->f_17[i], iParam10))
						{
							if (unk_0xFAA48325A90263BE(uParam0->f_17[i], iParam10, 20f, 20f, 5f, 0, 1, 0) && !IS_BIT_SET(uParam0->f_13, 11) && !(bParam17 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0)))
							{
								if (unk_0x27E68848F0E5D7D9(uParam0->f_17[i]))
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[i], iParam10, 0))
									{
										if (!func_28(uParam0->f_17[i], 1))
										{
											if (func_27(uParam0->f_17[i]))
											{
												num7 = unk_0x9B5C1660CCDF7189(uParam0->f_17[i], joaat("SCRIPT_TASK_LEAVE_VEHICLE"));
											
												if (num7 == 7)
													unk_0x092B9247AF00F5CF(uParam0->f_17[i], 0, 0);
											}
										}
									}
								}
								else
								{
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
										if (!unk_0xE7895DBF72C7F282(uParam0->f_17[i]) && !unk_0x8BF5256C439DF778(uParam0->f_17[i]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[i]) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[i]) && !unk_0x5B702A5D1F2635BE(iParam10))
											unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
								
									num7 = unk_0x9B5C1660CCDF7189(uParam0->f_17[i], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
								
									if (num7 == 7 && !func_60(uParam0->f_17[i], iParam10))
									{
										if (!unk_0xE7895DBF72C7F282(uParam0->f_17[i]) && !unk_0xE7895DBF72C7F282(unk_0x4A8C381C258A124D()) && !func_50(uParam0->f_17[i], 2f) && !unk_0x8BF5256C439DF778(uParam0->f_17[i]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[i]) && !unk_0x5B702A5D1F2635BE(iParam10))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[i], 1);
										
											if (IS_BIT_SET(uParam0->f_13, 10))
												unk_0x4190C67D524CD0DC(uParam0->f_17[i], 1f);
										
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[i], iParam10, 60000, i, 1073741824, 1, 0, 0);
											unk_0x379E96D5D36B27DC(uParam0->f_17[i], 0);
										}
									}
									else if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
									{
										uParam0->f_1[i] = func_24(uParam0->f_17[i], false, false);
										unk_0xF55F62DA99DB0C2F(uParam0->f_1[i], 2);
										flag = false;
									}
								}
							}
							else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
							{
								if (func_58(uParam0, uParam0->f_17[i], uParam8, bParam11))
								{
									if (!unk_0x8BF5256C439DF778(uParam0->f_17[i]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[i]))
									{
										num7 = unk_0x9B5C1660CCDF7189(uParam0->f_17[i], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
									
										if (num7 == 7)
											unk_0x974022927CB47E68(uParam0->f_17[i]);
									
										unk_0xAAA71DD7E9059338(uParam0->f_17[i], 0);
										unk_0x03AB73582A77DBD3(uParam0->f_17[i], func_15());
									}
								}
							}
						}
						else if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()))
							{
								if (!IS_BIT_SET(uParam0->f_13, 21))
									unk_0x03AB73582A77DBD3(uParam0->f_17[i], func_15());
							}
							else if (IS_BIT_SET(uParam0->f_13, 21))
							{
								unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xD11A63E12F198FDB(uParam0->f_17[i], func_15()) && !unk_0x5B702A5D1F2635BE(iParam10))
						{
							unk_0x5C4B3034CCDA5270(uParam0->f_17[i]);
						}
					}
				}
				else if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
				{
					unk_0xFE54B8568B2ABD12(&uParam0->f_1[i]);
					func_44(unk5[i]);
				}
			}
		}
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
			{
				unk[i] = 1;
				num = num + 1;
			}
		}
	
		if (!func_38(uParam0, 2))
		{
			if (num > 0)
			{
				for (i = 0; i < 3; i = i + 1)
				{
					if (unk[i])
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
						{
							if (func_55(uParam0->f_17[i]) || unk_0xFAA48325A90263BE(uParam0->f_17[i], unk_0x4A8C381C258A124D(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								num = num - 1;
								unk[i] = 0;
							}
						}
					}
					else if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
					{
						!unk_0xFAA48325A90263BE(uParam0->f_17[i], unk_0x4A8C381C258A124D(), uParam0->f_8 * 0.85f, uParam0->f_8 * 0.85f, uParam0->f_8, 0, 1, 0) && !func_55(uParam0->f_17[i]);
					}
				}
			}
		
			num5 = unk_0x1DD05E817C89C737();
		
			if (num5 - uParam0->f_11 > 1500 || num3 == 1)
			{
				if (num > 0)
				{
					if (uParam0->f_12 < num)
					{
						if (num == num3 || num2 + num == num3 && num3 > 1)
						{
							if (!IS_BIT_SET(uParam0->f_13, 5))
							{
								func_35(uParam0, sParam7, false);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 5);
								uParam0->f_12 = num;
							}
							else
							{
								uParam0->f_12 = num;
							}
						}
						else
						{
							for (i = 0; i < 3; i = i + 1)
							{
								if (unk[i])
								{
									if (!func_49(i, uParam0))
									{
										if (!unk_0xFF692AB7350A74D7(unk9[i]))
										{
											if (!unk_0x1B79E937E91F40C3(unk9[i], ""))
											{
												func_47(uParam0, unk5[i], unk9[i], false);
												func_46(i, uParam0);
												uParam0->f_12 = num;
											}
										}
									
										if (!func_49(i, uParam0))
										{
											func_35(uParam0, unk5[i], false);
											func_46(i, uParam0);
											uParam0->f_12 = num;
										}
									}
									else
									{
										uParam0->f_12 = num;
									}
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
	
		unk_0x8744D2E3FC95740E(&(uParam0->f_13), 10);
	
		if (flag && !flag3)
		{
			for (i = 0; i < 3; i = i + 1)
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_1[i]))
				{
					unk_0xFE54B8568B2ABD12(&uParam0->f_1[i]);
					func_44(unk5[i]);
				}
			}
		
			func_44("MORE_SEATS" /*A vehicle with more seats is needed.*/);
			return true;
		}
	}

	return false;
}

void func_46(int iParam0, var uParam1) // Position - 0x31AD
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 14);
			break;
	
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 15);
			break;
	
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 16);
			break;
	}

	return;
}

void func_47(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x31F5
{
	if (!bParam3)
		if (!unk_0xFF692AB7350A74D7(uParam1))
			if (!unk_0x1B79E937E91F40C3(uParam1, ""))
				func_48(uParam1, uParam2, 7500, 1);

	uParam0->f_10 = unk_0x1DD05E817C89C737();
	return;
}

void func_48(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x322E
{
	iParam3 = iParam3;
	unk_0x17EA339F685C42D2(uParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x0A3136AD174470CC(iParam2, 1);
	return;
}

BOOL func_49(int iParam0, var uParam1) // Position - 0x324D
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(uParam1->f_13, 14);
	
		case 1:
			return IS_BIT_SET(uParam1->f_13, 15);
	
		case 2:
			return IS_BIT_SET(uParam1->f_13, 16);
	
		default:
		
	}

	return false;
}

BOOL func_50(var uParam0, float fParam1) // Position - 0x328D
{
	var unk;

	if (unk_0x7F420695E3F776FB(uParam0, 0))
	{
		unk = unk_0x6EF03BE64E058E2F(uParam0, 0);
	
		if (!unk_0x1C2F771CDC87A3A5(unk, 0))
			if (unk_0xDF93B3CFAC96698F(unk) > fParam1)
				return true;
	}

	return false;
}

BOOL func_51(var uParam0, int iParam1) // Position - 0x32C4
{
	int num;

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (!unk_0xD11A63E12F198FDB(uParam0, func_15()))
		{
			num = unk_0x31945A289F1359A1(uParam0);
		
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
				if (unk_0xFAA48325A90263BE(uParam0, iParam1, 20f + 10f, 20f + 10f, 10f, 0, 1, 0))
					if (num == iParam1)
						return true;
		}
	}

	return false;
}

BOOL func_52(var uParam0, int iParam1) // Position - 0x332B
{
	if (!unk_0x4FAFF4BCB7633475(uParam0))
		if (unk_0xFC8BFE4B41177C22(iParam1))
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
				if (unk_0xF4244288C3EF3306(uParam0, iParam1))
					return true;

	return false;
}

void func_53(int iParam0, var uParam1) // Position - 0x3360
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 17);
			break;
	
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 18);
			break;
	
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 19);
			break;
	}

	return;
}

BOOL func_54(int iParam0, var uParam1) // Position - 0x33A8
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(uParam1->f_13, 17);
	
		case 1:
			return IS_BIT_SET(uParam1->f_13, 18);
	
		case 2:
			return IS_BIT_SET(uParam1->f_13, 19);
	
		default:
		
	}

	return false;
}

BOOL func_55(var uParam0) // Position - 0x33E8
{
	var unk;
	var unk2;

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
	
		if (unk_0xD9F5E1FEFD1329E4(unk, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0))
			{
				unk2 = unk_0xCDA725BC2F170795(uParam0);
			
				if (unk_0xD9F5E1FEFD1329E4(unk2, 0))
					if (unk == unk2)
						if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0xFAA48325A90263BE(uParam0, unk2, 20f, 20f, 20f, 0, 1, 0))
							return true;
			}
		}
	}

	return false;
}

BOOL func_56(int iParam0, var uParam1) // Position - 0x3475
{
	int num;
	int num2;
	int i;
	var unk;
	var unk2;
	var unk3;

	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("bus") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("coach"))
		{
			num = 0;
			num2 = 0;
			i = 0;
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam1->f_17[i]))
					num = num + 1;
			}
		
			unk = unk_0xFD5C5BBD1FE92BB7(iParam0, 0, 0);
		
			if (!unk_0x4FAFF4BCB7633475(unk))
				if (unk == uParam1->f_17[0] || unk == uParam1->f_17[1] || unk == uParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			unk2 = unk_0xFD5C5BBD1FE92BB7(iParam0, 1, 0);
		
			if (!unk_0x4FAFF4BCB7633475(unk2))
				if (unk2 == uParam1->f_17[0] || unk2 == uParam1->f_17[1] || unk2 == uParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			unk3 = unk_0xFD5C5BBD1FE92BB7(iParam0, 2, 0);
		
			if (!unk_0x4FAFF4BCB7633475(unk3))
				if (unk3 == uParam1->f_17[0] || unk3 == uParam1->f_17[1] || unk3 == uParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			if (num2 < num)
				return true;
		}
	}

	return false;
}

BOOL func_57(var uParam0) // Position - 0x35D5
{
	var unk;

	if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	
		if (func_43(unk, uParam0, 0))
			return true;
	}

	return false;
}

BOOL func_58(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x3604
{
	var unk;

	if (!unk_0x4FAFF4BCB7633475(uParam1))
	{
		if (unk_0x27E68848F0E5D7D9(uParam1))
		{
			unk = unk_0x6EF03BE64E058E2F(uParam1, 0);
		
			if (!unk_0x1C2F771CDC87A3A5(unk, 0))
				if (unk_0xD9F5E1FEFD1329E4(unk, 0))
					if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk))
						if (func_57(uParam0))
							return true;
					else if (bParam3)
						return true;
				else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uParam1, uParam2, uParam2, 3f, 0, 1, 0))
					return true;
		}
		else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uParam1, uParam2, uParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				unk = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
			
				if (unk_0xFC8BFE4B41177C22(unk))
					if (func_43(unk, uParam0, 0))
						if (unk_0xD9F5E1FEFD1329E4(unk, 0))
							if (func_59(unk))
								return true;
				else
					return true;
			}
			else
			{
				return true;
			}
		}
	}

	return false;
}

BOOL func_59(var uParam0) // Position - 0x36E2
{
	float num;

	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		num = unk_0xDF93B3CFAC96698F(uParam0);
	
		if (num > -0.5f && num < 0.5f)
			return true;
	}

	return false;
}

BOOL func_60(var uParam0, int iParam1) // Position - 0x371A
{
	var unk;

	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
		{
			unk = unk_0xCDA725BC2F170795(uParam0);
		
			if (unk == iParam1)
				return true;
		}
	}

	return false;
}

void func_61() // Position - 0x374A
{
	var unk;
	var unk2;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		unk = unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D());
	
		if (unk_0xD9F5E1FEFD1329E4(unk, 0))
		{
			unk2 = unk_0xFD5C5BBD1FE92BB7(unk, 0, 0);
		
			if (!unk_0x4FAFF4BCB7633475(unk2))
				if (unk2 != unk_0x4A8C381C258A124D())
					if (unk_0x110821AE6C63DD4F(unk2))
						if (!unk_0x2E0309EF5F2EBDB1(unk2, unk_0x4A8C381C258A124D()))
							unk_0xE67051907958B5EB(unk2, unk_0x4A8C381C258A124D(), 2000, 2048, 2);
		}
	}

	return;
}

void func_62(var uParam0) // Position - 0x37B7
{
	int i;

	if (!IS_BIT_SET(uParam0->f_13, 25))
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[i]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
				{
					unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 32, 0);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 305, 1);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[i], 268, 1);
					unk_0x379E96D5D36B27DC(uParam0->f_17[i], 0);
				}
			}
		}
	
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 25);
	}

	return;
}

void func_63(var uParam0) // Position - 0x3857
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_17[i]))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[i]))
			{
				if (unk_0x27E68848F0E5D7D9(uParam0->f_17[i]))
				{
					unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[i], 0);
					unk_0xD9757FAB956617BA(uParam0->f_17[i], 0);
				}
			}
		}
	}

	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 0);
				unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 0);
			}
		}
	}

	return;
}

char* func_64() // Position - 0x38ED
{
	char* unk;

	return unk;
}

Vector3 func_65() // Position - 0x38F7
{
	var unk;

	return unk;
}

void func_66() // Position - 0x3903
{
	int i;

	if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_94, 0))
	{
		if (unk_0xC450B06E5AAA0985(iLocal_100))
			unk_0xFE54B8568B2ABD12(&iLocal_100);
	
		if (iLocal_34 <= 2)
		{
			iLocal_78 = unk_0x91C8345B22D52DEC() * ((60 * iLocal_80) + iLocal_81);
			iLocal_78 = iLocal_78 + unk_0x1DD05E817C89C737();
			iLocal_82 = iLocal_78 - (unk_0x91C8345B22D52DEC() * 30);
		}
		else if (iLocal_34 > 6)
		{
			iLocal_78 = unk_0x91C8345B22D52DEC() * ((60 * iLocal_80) + iLocal_81);
			iLocal_78 = iLocal_78 + unk_0x1DD05E817C89C737();
			iLocal_82 = iLocal_78 - (unk_0x91C8345B22D52DEC() * 30);
		}
		else if (iLocal_34 >= 3 && iLocal_34 <= 4)
		{
			uLocal_95 = unk_0x5779387E956077A6(iLocal_87, uLocal_68, fLocal_72, 1, 1, 0);
			iLocal_91[0] = unk_0x8728A378EF2B46B2(uLocal_95, 6, iLocal_85, -1, 1, 1);
			iLocal_91[1] = unk_0x8728A378EF2B46B2(uLocal_95, 6, iLocal_85, 0, 1, 1);
			unk_0x06CD913C241C765E("rghCop", &uLocal_116);
			unk_0xD414C47AFF81382A(4, uLocal_116, joaat("PLAYER"));
			unk_0xBE8796DB2B90A437(iLocal_91[0], 39, 1);
			unk_0xBE8796DB2B90A437(iLocal_91[1], 39, 1);
		
			for (i = 0; i < iLocal_91; i = i + 1)
			{
				unk_0xB41DEC3AAC1AA107(iLocal_91[i], joaat("WEAPON_PISTOL"), -1, 0, 1);
				unk_0x25DBF9F9C6BDFFEA(iLocal_91[i], 100f);
				unk_0x3CEA1FD137ACE2D9(iLocal_91[i], uLocal_116);
			}
		}
	
		iLocal_36 = 2;
	}

	return;
}

void func_67() // Position - 0x3A35
{
	int i;

	if (!unk_0x1C2F771CDC87A3A5(iLocal_94, 0))
	{
		if (func_102() || unk_0x4FAFF4BCB7633475(iLocal_88[0]))
		{
			for (i = 0; i < iLocal_88; i = i + 1)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_88[i]))
				{
					if (!unk_0xC450B06E5AAA0985(uLocal_97[i]))
					{
						uLocal_97[i] = func_10(iLocal_88[i], true, 145);
						unk_0xBE8796DB2B90A437(iLocal_88[i], 1, 0);
						unk_0xB5396F1FB088FE38(&uLocal_118);
						unk_0x092B9247AF00F5CF(0, 0, 0);
						unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
						unk_0x93C0674FC00824D0(uLocal_118);
						unk_0x4BD42B0527065BB6(iLocal_88[i], uLocal_118);
						unk_0xD0557B139A542F12(&uLocal_118);
					}
				}
				else if (unk_0xC450B06E5AAA0985(uLocal_97[i]))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_97[i]);
				}
			}
		}
		else if (!bLocal_77)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_88[0]))
			{
				if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_88[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0x13DE13EA38996410(iLocal_88[0], iLocal_94, unk_0x4A8C381C258A124D(), 8, 25f, 786469, -1f, -1f, 1);
					bLocal_77 = true;
				}
			}
		}
	
		if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_94, 0))
		{
			if (unk_0xC450B06E5AAA0985(iLocal_100))
				unk_0xFE54B8568B2ABD12(&iLocal_100);
		
			func_101(&uLocal_104, 0, 0);
			iLocal_36 = 2;
		}
		else if (unk_0xC39AE5D390581AD5(iLocal_94, -1, 0) || unk_0x4FAFF4BCB7633475(iLocal_88[0]))
		{
			func_101(&uLocal_104, 0, 0);
		}
		else
		{
			func_68();
		}
	}

	return;
}

void func_68() // Position - 0x3BA3
{
	if (!unk_0x4FAFF4BCB7633475(iLocal_88[0]) && !unk_0x1C2F771CDC87A3A5(iLocal_94, 0))
		if (unk_0xCECDBB848D53DEB2(iLocal_88[0], iLocal_94, 0))
			func_69(&uLocal_104, iLocal_94, 0, 0, true, true, true);

	return;
}

void func_69(var uParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3BE1
{
	func_70(uParam0, iParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_70(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3BFE
{
	func_71(uParam0, iParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_71(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3C1C
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		func_101(uParam0, 0, 0);

	uParam0->f_6 = 2;
	func_72(uParam0, iParam1, uParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_72(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3C54
{
	char* str;
	BOOL flag;

	if (uParam0->f_1 && unk_0xE37AC296E66C33AF())
		if (unk_0x1DD05E817C89C737() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	str = sParam5;

	if (unk_0xFF692AB7350A74D7(str))
		if (!unk_0x76CD105BCAC6EB9F())
			str = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			str = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
		func_99();

	if (func_98(iParam1) && unk_0xE5E2AE8B19267B8A(iParam1))
	{
		flag = false;
	
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			unk_0x7A8C6BB4DA2434F1(unk_0xBD545F8729E9F413(iParam1));
			unk_0x7AA365BA6A18440B(unk_0xBD545F8729E9F413(iParam1), 1);
		
			if (unk_0x731EE2A006FD5120(unk_0xBD545F8729E9F413(iParam1)))
				flag = true;
		}
		else if (unk_0x55B80B6E7AB61270(iParam1))
		{
			unk_0x8FBF79AC214E3747(unk_0xE93EDE86BBB66532(iParam1));
		
			if (unk_0x4F7C7E268667C7B3(unk_0xE93EDE86BBB66532(iParam1)))
				flag = true;
		}
		else if (unk_0xBE79A96C521F4432(iParam1))
		{
			unk_0x33D763C13554690A(unk_0x0646D07BB2D516CD(iParam1));
		
			if (unk_0xF31BAE02C52ADEFD(unk_0x0646D07BB2D516CD(iParam1)))
				flag = true;
		}
	
		if (!unk_0xE37AC296E66C33AF())
		{
			if (func_93(uParam0, bParam7, bParam9, false))
				func_89(uParam0, iParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_77(str))
				{
					if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(str) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (flag && !unk_0x4C705AAF75363287() && bParam8)
						{
							if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
							{
								_DISPLAY_HELP_TEXT(str, -1);
								uParam0->f_3 = str;
							
								if (unk_0x1B79E937E91F40C3("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, str))
									func_75(true);
							}
						}
					}
				}
			}
			else if (func_77(str))
			{
				if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(str))
				{
					if (unk_0xCB5CAFF0A4A8B74B(iParam1) && flag && !unk_0x4C705AAF75363287() && bParam8)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
						{
							_DISPLAY_HELP_TEXT(str, -1);
							uParam0->f_3 = str;
						
							if (unk_0x1B79E937E91F40C3("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, str))
								func_75(true);
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xFF692AB7350A74D7(sParam5))
				if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam5))
					unk_0x428C32CC68809A35(1);
		
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
					if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
						func_101(uParam0, str, 1);
				else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
					if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
						func_101(uParam0, str, 1);
				else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
					if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
						func_101(uParam0, str, 1);
				else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
					if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
						func_101(uParam0, str, 1);
				else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
					if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
						func_101(uParam0, str, 1);
				else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
					func_101(uParam0, str, 1);
		
			if (!func_93(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_74(uParam0))
					func_73(uParam0);
		}
	}
	else
	{
		func_101(uParam0, str, 0);
	}

	return;
}

void func_73(var uParam0) // Position - 0x3FC1
{
	if (func_98(unk_0x4A8C381C258A124D()))
		unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());

	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x0A0A06C514052E80(1);
		unk_0x3C44EF9027A21847(0);
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		unk_0x21172E4DF035B893("FocusIn");
	
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}

	uParam0->f_2 = -1;
	*uParam0 = 1;
	return;
}

BOOL func_74(var uParam0) // Position - 0x402C
{
	int num;

	if (uParam0->f_2 > 0)
	{
		num = uParam0->f_10 / 2;
	
		if (uParam0->f_2 + num > unk_0x1DD05E817C89C737())
			return true;
	}

	return false;
}

int func_75(BOOL bParam0) // Position - 0x4057
{
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_113969.f_10052.f_100 = Global_113969.f_10052.f_100 + 1;
		
			return Global_113969.f_10052.f_100;
	
		case 4:
			if (bParam0)
				Global_113969.f_10052.f_101 = Global_113969.f_10052.f_101 + 1;
		
			return Global_113969.f_10052.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_113969.f_10052.f_102 = Global_113969.f_10052.f_102 + 1;
		
			return Global_113969.f_10052.f_102;
	
		default:
			break;
	}

	return 3;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x4101
{
	unk_0xAC98CA65AD9A3215(text);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

BOOL func_77(char* sParam0) // Position - 0x4118
{
	if (!func_78(true, true, false))
	{
		if (!unk_0xD6F9DEE4765092A9(sParam0) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/))
			unk_0x428C32CC68809A35(1);
	
		return false;
	}

	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_75(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_75(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_75(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_78(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x41B1
{
	var unk;
	int num;

	if (bParam0)
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			return false;

	if (bParam2)
		return true;

	if (unk_0x3555462DB47B7AB1())
		return false;

	if (func_88(0))
		return false;

	if (func_87())
		return false;

	if (unk_0xA43CD45F18522E3F())
		return false;

	if (Global_76498)
		return false;

	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
		return false;

	if (Global_61347)
		return false;

	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
				if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
					return false;
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
					return false;
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
					return false;
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
					return false;
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
					return false;
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
				return false;
		
			if (unk_0xDD851254D8C7D338())
				return false;
		}
	}

	if (func_86() || func_85(*Global_4718592.f_185586) || func_84())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			num = _GET_VEHICLE_SEAT_PED_IS_IN(unk_0x4A8C381C258A124D(), 0);
		
			if (unk_0x333A2A6253C809D2(unk, num) || unk_0x4B423FAA24E8ABF0(unk) == joaat("apc") && num != -1 || unk_0x4B423FAA24E8ABF0(unk) == joaat("akula") && num != -1 || unk_0x4B423FAA24E8ABF0(unk) == joaat("riot2") && num == 0 && func_82(unk, 10) && unk_0x94C9CD3D66808551(unk, 10) != -1)
				return false;
		}
	}

	if (Global_1955929)
		return false;

	if (func_79(unk_0x259BE71D8A81D4FA()))
		return false;

	return true;
}

BOOL func_79(Player plParam0) // Position - 0x440A
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657971[plParam0 /*465*/].f_322.f_8 != -1;
		else if (Global_1575083 && plParam0 == unk_0x259BE71D8A81D4FA() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657971[plParam0 /*465*/].f_322.f_8 != -1;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x4470
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (unk_0x762604C40829DB72(player))
		{
			if (bIsPlaying)
				if (!unk_0x75EAB09F5E974116(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672855.f_3)
					return Global_2672855.f_2;
				else if (Global_2657971[player /*465*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x44D0
{
	return -1;
}

BOOL func_82(var uParam0, int iParam1) // Position - 0x44D9
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		if (unk_0x90E3EAFF8AAA1A42(uParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
			
				default:
					if (unk_0x5B59C12A02157D00(uParam0, iParam1) > 0)
						return true;
					break;
			}
		}
	}

	return false;
}

int _GET_VEHICLE_SEAT_PED_IS_IN(var ped, int includeLastVehicle) // Position - 0x453B
{
	var unk;
	int num;
	int i;
	int num2;

	if (!unk_0x4FAFF4BCB7633475(ped))
	{
		if (unk_0x7F420695E3F776FB(ped, includeLastVehicle))
		{
			unk = unk_0x6EF03BE64E058E2F(ped, includeLastVehicle);
		
			if (unk_0xFC8BFE4B41177C22(unk))
			{
				num = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(unk));
			
				if (num == 1)
				{
					num2 = -1;
					return num2;
				}
			
				for (i = 0; i < num; i = i + 1)
				{
					num2 = i - 1;
				
					if (!unk_0xC39AE5D390581AD5(unk, num2, 0))
						if (unk_0xFD5C5BBD1FE92BB7(unk, num2, 0) == ped)
							return num2;
				}
			}
		}
	}

	return num2;
}

BOOL func_84() // Position - 0x45C0
{
	return Global_2684504.f_19;
}

BOOL func_85(int iParam0) // Position - 0x45CE
{
	return iParam0 == 51;
}

BOOL func_86() // Position - 0x45DB
{
	return Global_2684504.f_18;
}

BOOL func_87() // Position - 0x45E9
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

BOOL func_88(int iParam0) // Position - 0x45FE
{
	if (iParam0 == 1)
		if (Global_20930.f_1 > 3)
			if (IS_BIT_SET(Global_8800, 14))
				return true;
			else
				return false;
		else
			return false;

	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20930.f_1 > 3)
		return true;

	return false;
}

void func_89(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x4655
{
	var unk;
	int num;
	int num2;
	int num3;
	int num4;

	if (Global_1582021 == 1)
		return;

	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
		func_101(uParam0, 0, 0);

	if (func_92(uParam2, 0f, 0f, 0f, false))
	{
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			unk = unk_0xBD545F8729E9F413(iParam1);
		
			if (!unk_0x7F420695E3F776FB(unk, 0))
				if (unk_0x501EBB0523078750(unk))
					if (!func_90())
						uParam2 = { 0f, 0f, 1f };
				else if (unk_0xB98B1A5B59BC5065(unk))
					uParam2 = { 0f, 0f, 1f };
		}
	}

	unk_0x0A0A06C514052E80(0);
	num = uParam0->f_9;
	num2 = uParam0->f_10;

	if (iParam5 == 1726668277)
	{
		if (num < 1500)
			num = 1500;
	
		if (num2 < 1500)
			num2 = 1500;
	}

	unk_0x190BA0A3BB48F7FD(iParam1, uParam2, 1, -1, num, num2, iParam5);
	num3 = 2048;
	num4 = 3;
	unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iParam1, -1, num3, num4);
	unk_0xDCAFFD08A08087EB("FocusIn", 0, 0);
	unk_0xCAC4020CCF361AC8("HINT_CAM_SCENE");
	unk_0xBF3D28CA44F3BE2D(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1DD05E817C89C737();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_90() // Position - 0x4765
{
	return func_91(unk_0x259BE71D8A81D4FA());
}

BOOL func_91(var uParam0) // Position - 0x4775
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(uParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_92(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x4794
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_93(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x47DB
{
	if (uParam0->f_1)
		if (unk_0x1DD05E817C89C737() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
		
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_97(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_74(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
	
		case 1:
			if (unk_0x1DD05E817C89C737() - uParam0->f_4 <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (!func_97(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
	
		case 2:
			if (uParam0->f_6 == 0)
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					if (!func_97(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_96(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_96(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
					uParam0->f_5 = 0;
				else if (!func_97(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (unk_0x1DD05E817C89C737() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
						if (func_95(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_94(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_94(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
						uParam0->f_5 = 0;
					else if (func_95(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_74(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_78(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_99();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_94(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B47
{
	if (!func_78(bParam0, bParam1, bParam2))
		return false;

	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
		
			if (unk_0x61C3701AD6D746B2(0, 80))
				return true;
		}
	}

	return false;
}

BOOL func_95(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B99
{
	if (!func_78(bParam0, bParam1, bParam2))
		return false;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
	
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				unk_0x0A0A06C514052E80(0);
				return true;
			}
		}
	}

	return false;
}

BOOL func_96(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4BE2
{
	if (!func_78(bParam0, bParam1, bParam2))
		return false;

	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
		
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_117)
				return true;
		}
	}

	return false;
}

BOOL func_97(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4C41
{
	if (!func_78(bParam0, bParam1, bParam2))
		return false;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
	
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_117)
			{
				unk_0x0A0A06C514052E80(0);
				return true;
			}
		}
	}

	return false;
}

BOOL func_98(int iParam0) // Position - 0x4C97
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
		if (unk_0x55B80B6E7AB61270(iParam0))
			if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam0), 0))
				return true;
		else if (unk_0x0101C509A6E67F99(iParam0))
			if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam0)))
				return true;
		else if (unk_0xBE79A96C521F4432(iParam0))
			return true;

	return false;
}

void func_99() // Position - 0x4CF2
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x4D02
{
	unk_0x39DCBE5519BD783A(message);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_101(var uParam0, char* sParam1, int iParam2) // Position - 0x4D15
{
	char* str;

	if (unk_0x76CD105BCAC6EB9F())
		if (IS_BIT_SET(Global_2738935.f_4712, 26))
			return;

	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x3C44EF9027A21847(iParam2);
		unk_0x21172E4DF035B893("FocusIn");
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
	
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}

	unk_0x0A0A06C514052E80(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	str = sParam1;

	if (unk_0xFF692AB7350A74D7(str))
		if (!unk_0x76CD105BCAC6EB9F())
			str = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			str = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (!unk_0xFF692AB7350A74D7(uParam0->f_3))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0->f_3))
			unk_0x428C32CC68809A35(1);

	if (!unk_0xFF692AB7350A74D7(str))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
			unk_0x428C32CC68809A35(1);

	return;
}

int func_102() // Position - 0x4DEF
{
	if (unk_0xFC8BFE4B41177C22(iLocal_94))
		if (!unk_0x1C2F771CDC87A3A5(iLocal_94, 0))
			if (unk_0x8D91ADE44AC79BC9(iLocal_94) < 300 || unk_0x4C7724D572378B05(iLocal_94) < 200f || unk_0x5B702A5D1F2635BE(iLocal_94) || unk_0x548F6F43A7CB6F45(iLocal_94, 0, 0) && unk_0x548F6F43A7CB6F45(iLocal_94, 1, 0) || unk_0x548F6F43A7CB6F45(iLocal_94, 4, 0) && unk_0x548F6F43A7CB6F45(iLocal_94, 5, 0) || unk_0x548F6F43A7CB6F45(iLocal_94, 0, 0) && unk_0x548F6F43A7CB6F45(iLocal_94, 4, 0) || unk_0x548F6F43A7CB6F45(iLocal_94, 1, 0) && unk_0x548F6F43A7CB6F45(iLocal_94, 5, 0))
				return 1;

	return 0;
}

void func_103() // Position - 0x4EA7
{
	int i;
	int j;

	iLocal_94 = func_105(0);

	if (!unk_0xD9F5E1FEFD1329E4(iLocal_94, 0))
	{
		iLocal_94 = unk_0x5779387E956077A6(iLocal_86, uLocal_62, fLocal_71, 1, 1, 0);
	
		for (i = 1; i <= 8; i = i + 1)
		{
			unk_0xD772F6AA66750D2B(iLocal_94, i, 1);
		}
	
		if (iLocal_83 != -1)
			unk_0xD772F6AA66750D2B(iLocal_94, iLocal_83, 0);
	}

	unk_0xDC05A8A020E60C86(iLocal_94, 1);
	iLocal_100 = func_104(iLocal_94, false, false);

	if (iLocal_34 != 5 && iLocal_34 != 6)
	{
		if (iLocal_34 > 6)
		{
			unk_0xD0F1DB0E50B367AD(iLocal_94, 0, 0, 0, 0, 1, 0, 0, 0);
			unk_0xBD618A73193F9982(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_94, 0, 0, 0);
		}
	
		_SHOW_SUBTITLE_CLEAR_EXISTING(sLocal_101, 7500, 1);
	}
	else
	{
		iLocal_88[0] = unk_0x8728A378EF2B46B2(iLocal_94, 26, iLocal_84, -1, 1, 1);
		iLocal_88[1] = unk_0x8728A378EF2B46B2(iLocal_94, 26, iLocal_84, 0, 1, 1);
		unk_0x06CD913C241C765E("rghCriminal", &uLocal_117);
		unk_0xD414C47AFF81382A(5, uLocal_117, joaat("PLAYER"));
	
		for (j = 0; j < iLocal_88; j = j + 1)
		{
			unk_0xAAA71DD7E9059338(iLocal_88[j], 1);
			unk_0xB41DEC3AAC1AA107(iLocal_88[j], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, 0, 1);
			unk_0x3CEA1FD137ACE2D9(iLocal_88[j], uLocal_117);
		}
	
		unk_0x7C8E9DE09D4AD3FF(iLocal_88[0], iLocal_94, 25f, 786599);
		_SHOW_SUBTITLE_CLEAR_EXISTING("PMDL_REC", 7500, 1);
	}

	if (!unk_0x1C2F771CDC87A3A5(unk_0xDC8D5832207C2EAD(), 0))
		uLocal_96 = unk_0xDC8D5832207C2EAD();

	iLocal_36 = 1;
	return;
}

int func_104(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4FFA
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_105(int iParam0) // Position - 0x500D
{
	if (unk_0xD9F5E1FEFD1329E4(Global_112676.f_222[iParam0], 0))
	{
		unk_0xEE0BCDB1B5E36BCB(Global_112676.f_222[iParam0], 1, 1);
		return Global_112676.f_222[iParam0];
	}

	return 0;
}

BOOL func_106() // Position - 0x5045
{
	if (unk_0xFC8BFE4B41177C22(iLocal_94))
		if (unk_0xD9F5E1FEFD1329E4(iLocal_94, 0))
			if (!unk_0xFAA48325A90263BE(iLocal_94, unk_0x4A8C381C258A124D(), 300f, 300f, 300f, 0, 1, 0))
				return true;
		else
			return true;

	if (unk_0x4FAFF4BCB7633475(iLocal_88[0]))
		if (unk_0xC450B06E5AAA0985(uLocal_97[0]))
			unk_0xFE54B8568B2ABD12(&uLocal_97[0]);

	return false;
}

void func_107() // Position - 0x50AD
{
	unk_0xEC9DAA34BBB4658C(iLocal_86);
	unk_0xF2CB0224D3BE0B42("PMDL", 0);

	if (iLocal_34 >= 3 && iLocal_34 <= 4)
	{
		unk_0xEC9DAA34BBB4658C(iLocal_85);
		unk_0xEC9DAA34BBB4658C(iLocal_87);
	}
	else if (iLocal_34 == 5 || iLocal_34 == 6)
	{
		unk_0xEC9DAA34BBB4658C(iLocal_84);
	}

	unk_0xCCA6D8A84EE8C88A(joaat("benson"), 1);
	unk_0xCCA6D8A84EE8C88A(joaat("pony2"), 1);

	if (unk_0x6252BC0DD8A320DB(iLocal_86) && unk_0xDCB78A15E5F495DC(0))
		if (iLocal_34 >= 3 && iLocal_34 <= 4)
			if (unk_0x6252BC0DD8A320DB(iLocal_85) && unk_0x6252BC0DD8A320DB(iLocal_87))
				bLocal_73 = true;
		else if (iLocal_34 == 5 || iLocal_34 == 6)
			if (unk_0x6252BC0DD8A320DB(iLocal_84))
				bLocal_73 = true;
		else if (iLocal_34 > 6)
			if (unk_0xD7E1DF759CD0FFF2("Deliveries", 0, -1))
				bLocal_73 = true;
		else
			bLocal_73 = true;

	return;
}

void func_108() // Position - 0x5187
{
	float num;

	uLocal_62 = { func_110(func_112(), iLocal_34) };
	fLocal_71 = func_109(func_112(), iLocal_34);

	if (iLocal_34 > 6)
	{
		sLocal_101 = "PMDL_TRUCK";
		sLocal_102 = "PMDL_BTIM";
		sLocal_103 = "PMDL_BCKT";
		iLocal_86 = joaat("benson");
		iLocal_83 = 2;
	}

	if (func_112() == 10)
	{
		uLocal_65 = { -1161.2133f, -1567.0677f, 3.4234f };
		iLocal_86 = joaat("pony2");
	
		if (iLocal_34 == 0)
		{
			iLocal_80 = 2;
			iLocal_81 = 15;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 1)
		{
			iLocal_80 = 1;
			iLocal_81 = 30;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 2)
		{
			iLocal_80 = 1;
			iLocal_81 = 30;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 3)
		{
			uLocal_68 = { -3121.2615f, 1152.92f, 19.4047f };
			fLocal_72 = 176.4887f;
			iLocal_87 = joaat("police4");
			iLocal_85 = joaat("S_M_Y_Cop_01");
		}
		else if (iLocal_34 == 4)
		{
			uLocal_68 = { 1543.1453f, 2184.3706f, 77.8114f };
			fLocal_72 = 45.3499f;
			iLocal_87 = joaat("police4");
			iLocal_85 = joaat("S_M_Y_Cop_01");
		}
		else if (iLocal_34 >= 5)
		{
			iLocal_84 = joaat("G_M_Y_SalvaGoon_02");
		}
	}
	else if (func_112() == 14)
	{
		uLocal_65 = { -2169.8284f, 4277.365f, 47.9568f };
		num = unk_0xED977E2AE2CB16EE(uLocal_62, uLocal_65, 1);
		iLocal_81 = SYSTEM::ROUND(((num / 16.5f) + 40f) / 2f);
	}
	else if (func_112() == 13)
	{
		uLocal_65 = { -323.356f, 6264.4307f, 30.4463f };
		num = unk_0xED977E2AE2CB16EE(uLocal_62, uLocal_65, 1);
		iLocal_81 = SYSTEM::ROUND(((num / 16.5f) + 40f) / 2f);
	}
	else if (func_112() == 12)
	{
		uLocal_65 = { 198.5282f, 342.2399f, 104.9566f };
		num = unk_0xED977E2AE2CB16EE(uLocal_62, uLocal_65, 1);
		iLocal_81 = SYSTEM::ROUND(((num / 16.5f) + 15f) / 2f);
	}
	else if (func_112() == 11)
	{
		uLocal_65 = { -560.0195f, 301.1481f, 82.1436f };
		num = unk_0xED977E2AE2CB16EE(uLocal_62, uLocal_65, 1);
		iLocal_81 = SYSTEM::ROUND(((num / 16.5f) + 15f) / 2f);
	}

	iLocal_79 = 0;
	bLocal_74 = true;
	return;
}

float func_109(int iParam0, int iParam1) // Position - 0x53B5
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
			
				case 1:
					return 177.9306f;
			
				case 2:
					return 49.6978f;
			
				case 3:
					return 336.9449f;
			
				case 4:
					return 80.1639f;
			
				case 5:
					return 287.983f;
			
				case 6:
					return 46.7895f;
			}
			break;
	
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
			
				case 8:
					return 256.7899f;
			
				case 9:
					return 180.9647f;
			
				case 10:
					return 126.4385f;
			
				case 11:
					return 123.4767f;
			
				case 12:
					return 226.219f;
			
				case 13:
					return 82.6097f;
			}
			break;
	}

	return 0f;
}

Vector3 func_110(int iParam0, int iParam1) // Position - 0x54E5
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128.18756f, 1934.4951f, 194.90749f;
			
				case 1:
					return -179.8744f, 586.4468f, 196.6278f;
			
				case 2:
					return 1390.0889f, -605.923f, 73.3378f;
			
				case 3:
					return -3170.0483f, 1098.809f, 19.7817f;
			
				case 4:
					return 1581.2198f, 2194.629f, 78.1062f;
			
				case 5:
					return 1475.8333f, -113.5801f, 141.794f;
			
				case 6:
					return 1603.0708f, -1793.9147f, 89.0179f;
			}
			break;
	
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642.2169f, 2774.892f, 40.985f;
			
				case 8:
					return -1916.1224f, 2060.3132f, 139.7363f;
			
				case 9:
					return 824.8992f, -1064.1921f, 26.9851f;
			
				case 10:
					return -669.6013f, -1198.6638f, 9.6125f;
			
				case 11:
					return -1465.5795f, -390.7494f, 37.5168f;
			
				case 12:
					return 797.7521f, -1793.0078f, 28.3164f;
			
				case 13:
					return 806.319f, -2017.4514f, 28.2215f;
			}
			break;
	}

	return func_111(iParam0);
}

Vector3 func_111(int iParam0) // Position - 0x56A6
{
	switch (iParam0)
	{
		case 2:
			return 2147.3167f, 4795.2075f, 40.08961f;
	
		case 9:
			return 1524.3289f, -2108.269f, 75.7248f;
	
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
	
		case 1:
			return 898.3718f, -177.07635f, 72.68348f;
	
		case 4:
			return 1191.3021f, 2672.064f, 36.73154f;
	
		case 3:
			return -1584.333f, 5193.4873f, 2.95912f;
	
		case 0:
			return 408.34286f, -1623.8357f, 28.29278f;
	
		case 8:
			return -1339.4886f, -21.19435f, 50.34566f;
	
		case 5:
			return 336.20697f, 172.42506f, 102.20552f;
	
		case 6:
			return 394.54953f, -703.37946f, 28.27281f;
	
		case 7:
			return -1413.1844f, -206.05553f, 46.29474f;
	
		case 11:
			return -560.38086f, 274.54758f, 82.02014f;
	
		case 12:
			return 221.08446f, 340.78488f, 104.58835f;
	
		case 13:
			return -296.71542f, 6259.7324f, 30.49339f;
	
		case 14:
			return -2201.4016f, 4291f, 47.32429f;
	}

	return 10f, 10f, 10f;
}

int func_112() // Position - 0x5859
{
	return Global_112676.f_20;
}

int func_113() // Position - 0x5867
{
	return func_114(Global_112676.f_20, Global_112676.f_29);
}

int func_114(int iParam0, int iParam1) // Position - 0x587F
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				case 3:
					return 3;
			
				case 4:
					return 4;
			
				case 5:
					return 5;
			
				case 6:
					return 6;
			}
			break;
	
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
			
				case 1:
					return 10;
			
				case 2:
					return 11;
			
				case 3:
					return 12;
			
				case 4:
					return 13;
			}
			break;
	
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				case 1:
					return 7;
			}
			break;
	}

	return 0;
}

void func_115() // Position - 0x5987
{
	unk_0xCCA6D8A84EE8C88A(joaat("benson"), 0);
	unk_0xCCA6D8A84EE8C88A(joaat("pony2"), 0);
	unk_0x59E2E0637E7776F3();

	if (bLocal_75)
	{
		if (!unk_0x1C2F771CDC87A3A5(uLocal_96, 0))
			func_116(uLocal_96, 0, 145);
	
		unk_0xF58D3BBA4A469D70(unk_0x259BE71D8A81D4FA());
		func_101(&uLocal_104, 0, 0);
	}

	unk_0xBBC29EBE6E1A48FA();
	return;
}

int func_116(var uParam0, int iParam1, int iParam2) // Position - 0x59D5
{
	var unk;
	var unk2;

	if (iParam1 == 0)
	{
		unk2 = unk_0xED22194AB8539910(uParam0, &unk);
	
		if (!unk_0xD6F9DEE4765092A9(unk2))
			if (unk_0x70E57E9927B6BA58(unk2) == unk_0x70E57E9927B6BA58("vehicle_gen_controller"))
				return 0;
	}

	func_117(uParam0, iParam2);
	return 1;
}

void func_117(var uParam0, int iParam1) // Position - 0x5A15
{
	var unk;
	int i;
	int j;

	if (!func_123(uParam0))
		return;

	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
	{
		unk = unk_0xFD5C5BBD1FE92BB7(uParam0, -1, 0);
	
		if (!unk_0xFC8BFE4B41177C22(unk))
			unk = unk_0x6B854773972E76E4(uParam0, -1);
	
		if (unk_0xFC8BFE4B41177C22(unk) && !unk_0x4FAFF4BCB7633475(unk))
			if (unk_0x4B423FAA24E8ABF0(unk) == joaat("Player_Zero"))
				iParam1 = 0;
			else if (unk_0x4B423FAA24E8ABF0(unk) == joaat("Player_One"))
				iParam1 = 1;
			else if (unk_0x4B423FAA24E8ABF0(unk) == joaat("Player_Two"))
				iParam1 = 2;
	
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
			iParam1 = Global_113969.f_2366.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (unk_0x4B423FAA24E8ABF0(uParam0) == Global_113969.f_32753.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!unk_0xD6F9DEE4765092A9(&(Global_113969.f_32753.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(uParam0), &(Global_113969.f_32753.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_113969.f_32753.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_113969.f_32753.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (unk_0x4B423FAA24E8ABF0(uParam0) == Global_113969.f_32753.f_5600[i /*78*/].f_66)
			if (!unk_0xD6F9DEE4765092A9(&(Global_113969.f_32753.f_5600[i /*78*/].f_1)))
				if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(uParam0), &(Global_113969.f_32753.f_5600[i /*78*/].f_1)))
					Global_113969.f_32753.f_5600[i /*78*/].f_66 = 0;
	}

	Global_113969.f_32753.f_5590 = iParam1;
	Global_79084 = uParam0;
	Global_113969.f_32753.f_5588 = 1;
	func_118(uParam0, &(Global_113969.f_32753.f_5510));
	return;
}

void func_118(var uParam0, var uParam1) // Position - 0x5C17
{
	int i;

	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		func_122(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(uParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(uParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(uParam0);
		unk_0xFF4B16F297D9CB3E(uParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(uParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(uParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(uParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(uParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(uParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(uParam0);
		unk_0x04434FA56DED5500(uParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(uParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (unk_0xF1B79038130E3C08(uParam0, 2))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
	
		if (unk_0xF1B79038130E3C08(uParam0, 3))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
	
		if (unk_0xF1B79038130E3C08(uParam0, 0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
	
		if (unk_0xF1B79038130E3C08(uParam0, 1))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_121(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (unk_0x7943BD10E2A03FAC(uParam0, 0))
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(uParam0);
	
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(uParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(uParam0))
				{
					case 3:
					case 0:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 22);
						break;
				
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
			}
		}
	
		if (!unk_0xE6BE8A525BA6BD44(uParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
	
		if (unk_0xFDA2576D37032738(uParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
	
		if (unk_0xA9D64A14804D119B(uParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(uParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (unk_0x2C0B2BB7913E8DBA(uParam0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
	
		func_120(&uParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (unk_0x5318DF85BEB6B95F(uParam0, i + 1))
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_119(i + 1));
		}
	
		if (unk_0x0BCE48C8677F9824(uParam0, 0))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		else
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
	
		if (unk_0xD130E7CDEE903624(uParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(uParam0, "IgnoredByQuickSave"))
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		else
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
	}

	return;
}

int func_119(int iParam0) // Position - 0x5EC2
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_120(var uParam0, var uParam1, var uParam2) // Position - 0x5F72
{
	int i;
	int num;

	if (!unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
		return 0;

	if (unk_0x90E3EAFF8AAA1A42(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		num = i;
	
		if (num == 17 || num == 18 || num == 19 || num == 20 || num == 21)
		{
			uParam1->[i] = 0;
		
			if (unk_0x1D5A665629D417A7(*uParam0, num))
				uParam1->[i] = 1;
		}
		else if (num == 22)
		{
			if (unk_0x1D5A665629D417A7(*uParam0, num))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = unk_0x94C9CD3D66808551(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = unk_0xEFDD8C5443F6C9E4(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = unk_0xEFDD8C5443F6C9E4(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_121(int iParam0) // Position - 0x6165
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

void func_122(var uParam0) // Position - 0x6185
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_123(var uParam0) // Position - 0x6235
{
	if (!unk_0xFC8BFE4B41177C22(uParam0) || !unk_0xD9F5E1FEFD1329E4(uParam0, 0) || func_141(uParam0, 0, false) || func_141(uParam0, 1, false) || func_141(uParam0, 2, false) || func_140(uParam0) != 145 || func_139(uParam0) || func_138(uParam0) || func_137(uParam0) || func_136(uParam0) || !func_124(unk_0x4B423FAA24E8ABF0(uParam0)))
	{
		func_138(uParam0);
		func_138(uParam0);
		func_141(uParam0, 0, false);
		func_141(uParam0, 1, false);
		func_141(uParam0, 2, false);
		func_140(uParam0) != 145;
		return false;
	}

	return true;
}

BOOL func_124(int iParam0) // Position - 0x6312
{
	if (iParam0 == 0)
		return false;

	if (!func_125(iParam0, false, -1))
		return false;

	if (unk_0xEA4F815FDC353FEF(iParam0) || unk_0x00C6FDED3EB75117(iParam0) || unk_0xBA16CD57E37AC32A(iParam0) || unk_0xAE447CBB33B40CA3(iParam0))
		return false;

	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case -671564942:
		case -902029319:
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
	}

	return true;
}

BOOL func_125(int iParam0, BOOL bParam1, int iParam2) // Position - 0x64D0
{
	int i;
	var unk;

	if (iParam0 == 0)
		return false;

	if (!unk_0xAD1840C2E6AF7D5E(iParam0))
		return false;

	if (iParam0 == joaat("dominator2") && !unk_0x76CD105BCAC6EB9F() || iParam0 == joaat("buffalo3") && !unk_0x76CD105BCAC6EB9F() || iParam0 == joaat("gauntlet2") && !unk_0x76CD105BCAC6EB9F() || iParam0 == joaat("blimp2") || iParam0 == joaat("stalion2") && !unk_0x76CD105BCAC6EB9F())
	{
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;
	}
	else
	{
		for (i = 0; i < unk_0x62B04373BFAD9B85(); i = i + 1)
		{
			if (unk_0x92EAC7DBD5D1D750(i, &unk))
			{
				if (iParam0 == unk.f_1)
				{
					if (unk_0x4BFA043D318BF9AE(unk))
						return false;
				
					break;
				}
			}
		}
	}

	if (iParam0 == joaat("blimp"))
		if (!func_134() && !func_133() && !func_132() && !func_131() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion"))
	{
		if (func_130() || unk_0x761778199FE1211C() || func_129())
		{
		}
		else if (!func_132())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_128(iParam0, iParam2))
			return false;

	if (!func_126(iParam0))
		return false;

	return true;
}

BOOL func_126(int iParam0) // Position - 0x6655
{
	int num;
	var unk;
	var unk2;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return true;

	unk_0x8A77EAFEB55D476D(&num, &unk);

	if (num == 4)
		return true;

	switch (iParam0)
	{
		case joaat("dune4"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("voltic2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("ruiner2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("phantom2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("technical2"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("boxville5"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("wastelander"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("blazer5"):
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!unk_0xABE86AEC64720F91(&unk2))
		return false;

	return true;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x6721
{
	if (unk_0x761778199FE1211C())
		return unk_0xC18CB5D7A27A2E00();

	return false;
}

BOOL func_128(int iParam0, int iParam1) // Position - 0x6738
{
	int num;
	int num2;

	if (Global_2707348)
		return true;

	if (!Global_2707349 && iParam1 >= 0 && iParam1 <= 517)
		if (IS_BIT_SET(Global_1586521[iParam1 /*142*/].f_103, 2))
			return true;

	num = unk_0x39D1D336459711BE();
	num2 = 0;

	switch (iParam0)
	{
		case -1240172147:
			num2 = Global_262145.f_35588[0];
			break;
	
		case -143587026:
			num2 = Global_262145.f_35588[1];
			break;
	
		case 1690421418:
			num2 = Global_262145.f_35588[2];
			break;
	
		case 258105345:
			num2 = Global_262145.f_35588[3];
			break;
	
		case 1249425552:
			num2 = Global_262145.f_35588[4];
			break;
	
		case -986656474:
			num2 = Global_262145.f_35588[5];
			break;
	
		case 1307736079:
			num2 = Global_262145.f_35588[6];
			break;
	
		case 1737348074:
			num2 = Global_262145.f_35588[7];
			break;
	
		case -223461503:
			num2 = Global_262145.f_35588[8];
			break;
	
		case 1121330119:
			num2 = Global_262145.f_35588[9];
			break;
	
		case -1628000569:
			num2 = Global_262145.f_35588[10];
			break;
	
		case -946047670:
			num2 = Global_262145.f_35588[11];
			break;
	
		case 1579902654:
			num2 = Global_262145.f_35588[12];
			break;
	
		case -773802025:
			num2 = Global_262145.f_35588[13];
			break;
	
		case 1968807591:
			num2 = Global_262145.f_35588[14];
			break;
	
		case -1958428933:
			num2 = Global_262145.f_35588[15];
			break;
	
		case 1881415402:
			num2 = Global_262145.f_35588[16];
			break;
	
		case -999594302:
			num2 = Global_262145.f_35588[17];
			break;
	
		case -1896488056:
			num2 = Global_262145.f_35588[18];
			break;
	
		case 1452003510:
			num2 = Global_262145.f_35588[19];
			break;
	
		case -1444856003:
			num2 = Global_262145.f_35588[20];
			break;
	}

	if (num > num2)
		return true;

	return false;
}

BOOL func_129() // Position - 0x6989
{
	return unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6();
}

BOOL func_130() // Position - 0x699F
{
	return unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C();
}

BOOL func_131() // Position - 0x69B5
{
	return false;
}

BOOL func_132() // Position - 0x69BE
{
	return true;
}

BOOL func_133() // Position - 0x69C7
{
	return true;
}

BOOL func_134() // Position - 0x69D0
{
	if (unk_0x087611B922B50F13(-1226939934))
		return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x69E9
{
	var unk;

	if (Global_152848 == 2)
		return true;
	else if (Global_152848 == 3)
		return false;

	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 2);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 4);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x76CA59C648318506())
				{
					unk = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&unk, 0);
					unk_0xED11291F7127888E(unk);
				}
			
				return true;
			}
		}
	}

	if (unk_0x76CA59C648318506())
		if (IS_BIT_SET(unk_0x38640D2193CB547F(866), 0))
			return true;

	return false;
}

BOOL func_136(var uParam0) // Position - 0x6AA1
{
	int num;
	var unk;

	num = unk_0x4B423FAA24E8ABF0(uParam0);
	unk = unk_0xCA7159F2C5FF745A(uParam0);

	if (num == joaat("speedo") && unk_0x1B79E937E91F40C3(unk, "LAMAR G "))
		return true;

	if (!func_125(num, false, -1))
		return true;

	return false;
}

BOOL func_137(var uParam0) // Position - 0x6AE8
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98874[i]))
			if (Global_98874[i] == uParam0)
				return true;
	}

	return false;
}

BOOL func_138(var uParam0) // Position - 0x6B23
{
	int i;

	if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (unk_0xFC8BFE4B41177C22(Global_98844[i]) && unk_0xD9F5E1FEFD1329E4(Global_98844[i], 0))
				if (Global_98844[i] == uParam0 && unk_0x4B423FAA24E8ABF0(Global_98844[i]) == unk_0x4B423FAA24E8ABF0(uParam0))
					return true;
		}
	}

	return false;
}

BOOL func_139(var uParam0) // Position - 0x6B9F
{
	int i;

	if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[24]))
		if (uParam0 == Global_78179.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (uParam0 == Global_78179.f_484[i])
					return true;
	}

	return false;
}

int func_140(var uParam0) // Position - 0x6C87
{
	int i;

	if (!unk_0xFC8BFE4B41177C22(uParam0))
		return 145;

	if (!unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		return 145;

	for (i = 0; i < 9; i = i + 1)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[i]))
			if (Global_98844[i] == uParam0)
				return Global_98854[i];
	}

	return 145;
}

BOOL func_141(var uParam0, int iParam1, BOOL bParam2) // Position - 0x6CEA
{
	int i;
	var unk;
	int num;

	if (!unk_0xFC8BFE4B41177C22(uParam0) || !unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		return false;

	for (i = 0; func_142(iParam1, i, &unk, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113969.f_7232[num], 0))
			if (unk_0xFE448E8C2209CA31(&unk, uParam0))
				return true;
	}

	return false;
}

BOOL func_142(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x6D58
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

void func_143(int iParam0) // Position - 0x6E30
{
	Global_112676.f_22 = iParam0;
	return;
}

