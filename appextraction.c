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
	unk_0x51CC1333A10C4E09();

	if (iLocal_18 == 0)
	{
		func_11();
		func_10();
		iLocal_18 = 1;
		SYSTEM::SETTIMERA(0);
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					if (iLocal_18 == 1 && SYSTEM::TIMERA() > 1500)
					{
						func_6();
						SYSTEM::SETTIMERA(0);
					}
					break;
			
				case 8:
					if (func_5(2, Global_20898, 0))
					{
						func_4();
						Global_20908 = 1;
					
						if (Global_20930.f_1 > 3)
							Global_20930.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_3())
				func_2();
		}
		else
		{
			Global_20932 = 6;
			func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0xE5
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 3 || Global_20930.f_1 == 0 || Global_20874 == 1)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x128
{
	unk_0xBBC29EBE6E1A48FA();
	return;
}

BOOL func_3() // Position - 0x134
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x15D
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20919, 1);

	return;
}

BOOL func_5(int iParam0, var uParam1, int iParam2) // Position - 0x17D
{
	if (unk_0x875A214D5EBCA509(iParam0, uParam1) || iParam2 == 1 && unk_0xDEE3EFEA31A1F555(iParam0, uParam1))
	{
		if (unk_0x761778199FE1211C())
			if (unk_0x66DA7155B68E7638() == 0 || unk_0xA43CD45F18522E3F() && unk_0xAE231F549813BBDF(2))
				return false;
	
		if (unk_0x4D9174D8796EA622() || unk_0xB11671B812399BA2())
			return false;
		else
			return true;
	}

	return false;
}

void func_6() // Position - 0x1EF
{
	func_7();
	return;
}

void func_7() // Position - 0x1FB
{
	func_9(Global_20911, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(24);
	unk_0x330108B080A2132F(0);

	if (IS_BIT_SET(Global_4543084, 23))
	{
		unk_0x557F1E2300EF1A3E(0);
		func_8("CELL_EXTBYOU" /*You*/);
		unk_0x330108B080A2132F(Global_4543085);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543365));
		unk_0x330108B080A2132F(Global_4543086);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543365.f_1));
		unk_0x330108B080A2132F(Global_4543087);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543365.f_2));
		func_8("CELL_BODYG" /*Guard*/);
		unk_0x330108B080A2132F(Global_4543088);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543368));
		unk_0x330108B080A2132F(Global_4543089);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543368.f_1));
		unk_0x330108B080A2132F(Global_4543090);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543368.f_2));
	}
	else
	{
		unk_0x557F1E2300EF1A3E(0);
		func_8("CELL_EXTBYOU" /*You*/);
		unk_0x330108B080A2132F(Global_4543088);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543368));
		unk_0x330108B080A2132F(Global_4543089);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543368.f_1));
		unk_0x330108B080A2132F(Global_4543090);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543368.f_2));
		func_8("CELL_EXTBTARG" /*Target*/);
		unk_0x330108B080A2132F(Global_4543085);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543365));
		unk_0x330108B080A2132F(Global_4543086);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543365.f_1));
		unk_0x330108B080A2132F(Global_4543087);
		unk_0x330108B080A2132F(SYSTEM::FLOOR(Global_4543365.f_2));
	}

	unk_0xE6B753D52F4CA222();
	func_9(Global_20911, "DISPLAY_VIEW", 24f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
	return;
}

void func_8(char* sParam0) // Position - 0x396
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

void func_9(var uParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3A8
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(iParam6));

	unk_0xE6B753D52F4CA222();
	return;
}

void func_10() // Position - 0x40B
{
	func_7();
	return;
}

void func_11() // Position - 0x417
{
	if (Global_20918)
	{
		func_12(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
		func_12(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_12(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
	return;
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x4A9
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam6));

	if (!unk_0xD6F9DEE4765092A9(sParam7))
		func_8(sParam7);

	if (!unk_0xD6F9DEE4765092A9(sParam8))
		func_8(sParam8);

	if (!unk_0xD6F9DEE4765092A9(sParam9))
		func_8(sParam9);

	if (!unk_0xD6F9DEE4765092A9(sParam10))
		func_8(sParam10);

	if (!unk_0xD6F9DEE4765092A9(sParam11))
		func_8(sParam11);

	unk_0xE6B753D52F4CA222();
	return;
}

