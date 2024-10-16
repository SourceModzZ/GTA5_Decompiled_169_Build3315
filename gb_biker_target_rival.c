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
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	func_99();

	while (true)
	{
		func_98();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_92();
	
		if (Global_2738935.f_5249.f_757 == 0)
			func_92();
	
		switch (iLocal_33)
		{
			case 0:
				iLocal_33 = 1;
				break;
		
			case 1:
				if (func_12())
					iLocal_33 = 2;
				break;
		
			case 2:
				if (!func_1())
					iLocal_33 = 4;
				break;
		
			case 4:
				func_92();
				break;
		}
	}

	return;
}

BOOL func_1() // Position - 0xD3
{
	Player player;

	if (func_7(true))
	{
		player = Global_2738935.f_5249.f_756;
	
		if (player != _INVALID_PLAYER_INDEX())
		{
			if (func_4(player))
			{
				func_2(player);
				return false;
			}
		}
		else
		{
			func_2(player);
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

void func_2(Player plParam0) // Position - 0x120
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		func_3(plParam0);

	Global_2738935.f_5249.f_756 = _INVALID_PLAYER_INDEX();
	return;
}

void func_3(Player plParam0) // Position - 0x145
{
	Player player;

	player = plParam0;
	unk_0x8744D2E3FC95740E(&(Global_2647061.f_388), player);
	unk_0x8744D2E3FC95740E(&(Global_2647061.f_389), player);
	unk_0x8744D2E3FC95740E(&(Global_2647061.f_390), player);
	unk_0x8744D2E3FC95740E(&(Global_2647061.f_392), player);
	unk_0x8744D2E3FC95740E(&(Global_2647061.f_396), player);
	unk_0x8744D2E3FC95740E(&(Global_2647061.f_391), player);
	return;
}

BOOL func_4(Player plParam0) // Position - 0x19F
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return true;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1B8
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

Player _INVALID_PLAYER_INDEX() // Position - 0x218
{
	return -1;
}

BOOL func_7(BOOL bParam0) // Position - 0x221
{
	return func_8(unk_0x259BE71D8A81D4FA(), bParam0);
}

BOOL func_8(int iParam0, BOOL bParam1) // Position - 0x233
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, BOOL bParam1, int iParam2) // Position - 0x244
{
	int num;

	if (!func_11(iParam0))
		return 0;

	if (!bParam1)
		if (func_10(iParam0, iParam2))
			return 0;

	num = Global_1887305[iParam0 /*610*/].f_10;

	if (func_11(num) && Global_1887305[num /*610*/].f_10.f_430 == iParam2)
		return 1;

	return 0;
}

BOOL func_10(int iParam0, int iParam1) // Position - 0x2A0
{
	if (func_11(iParam0))
		if (func_11(Global_1887305[iParam0 /*610*/].f_10))
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
				return true;

	return false;
}

BOOL func_11(Player plParam0) // Position - 0x2EF
{
	int num;

	num = plParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

BOOL func_12() // Position - 0x311
{
	Player player;

	if (func_7(true))
	{
		player = Global_2738935.f_5249.f_756;
	
		if (player != _INVALID_PLAYER_INDEX())
			if (func_13(player))
				return true;
	}

	return false;
}

BOOL func_13(Player plParam0) // Position - 0x344
{
	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		func_90(plParam0, 432, true, false);
	
		if (func_89(plParam0))
			func_86(plParam0, func_87(func_88(unk_0x259BE71D8A81D4FA())), true, false);
	
		if (func_84(plParam0))
			func_82(plParam0, true, true, false);
	
		func_76(plParam0, true, false);
		func_14(plParam0, true, 5000);
		return true;
	}

	return false;
}

void func_14(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x3A8
{
	Player player;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return;

	if (iParam2 > 200000)
		iParam2 = 200000;

	player = plParam0;

	if (bParam1)
	{
		if (plParam0 == Global_2672855)
		{
		}
		else if (unk_0xC450B06E5AAA0985(Global_2647061[player]))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2647061.f_370), player);
			unk_0x8744D2E3FC95740E(&(Global_2647061.f_375), player);
			unk_0x861AC9C2D48CEA7F(Global_2647061[player], 1);
			unk_0xB562F84CE9B07D89(Global_2647061[player], 250);
			func_15(plParam0);
		
			if (iParam2 < 0)
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2647061.f_375), player);
			else
				Global_2647061.f_201[player] = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam2);
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2647061.f_370), player);
			unk_0x8744D2E3FC95740E(&(Global_2647061.f_375), player);
		
			if (iParam2 < 0)
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2647061.f_375), player);
			else
				Global_2647061.f_201[player] = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam2);
		}
	}

	if (!bParam1)
	{
		unk_0x8744D2E3FC95740E(&(Global_2647061.f_370), player);
		unk_0x8744D2E3FC95740E(&(Global_2647061.f_375), player);
	
		if (unk_0xC450B06E5AAA0985(Global_2647061[player]))
		{
			func_15(plParam0);
			unk_0x861AC9C2D48CEA7F(Global_2647061[player], 0);
		}
	}

	return;
}

void func_15(Player plParam0) // Position - 0x4DD
{
	Player player;

	player = plParam0;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		if (unk_0xC450B06E5AAA0985(Global_2647061[player]))
		{
			Global_2647061.f_1504[player] = func_16(plParam0);
			unk_0x1456FD5C0C438B19(Global_2647061[player], Global_2647061.f_1504[player]);
		}
	}

	return;
}

int func_16(Player plParam0) // Position - 0x52B
{
	Player player;
	int num;

	player = plParam0;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		if (unk_0xC450B06E5AAA0985(Global_2647061[player]))
		{
			num = unk_0x8FACE824AEC046E8(Global_2647061[player]);
		
			if (IS_BIT_SET(Global_2647061.f_386, player) || IS_BIT_SET(Global_2647061.f_385, player))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_2647061.f_371, player) || IS_BIT_SET(Global_2647061.f_370, player) || IS_BIT_SET(Global_2647061.f_388, player))
			{
				return func_73(10);
			}
			else
			{
				switch (num)
				{
					case 253:
					case 252:
					case 255:
						return func_73(7);
				
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_73(11);
				
					case 254:
						if (unk_0x1864096A95E36EBA(plParam0) == unk_0x1864096A95E36EBA(Global_2672855))
							return func_73(6);
						else
							return func_73(5);
						break;
				
					case 271:
						if (unk_0x1864096A95E36EBA(plParam0) == unk_0x1864096A95E36EBA(Global_2672855))
							return func_73(6);
						else
							return func_73(5);
						break;
				
					case 163:
					case 164:
						if (func_72(Global_2672855, plParam0, -2, 0))
							return func_73(6);
						else
							return func_73(5);
						break;
				
					case 303:
					case 418:
						return func_73(10);
				
					case 364:
						if (func_21(Global_2672855, plParam0, true))
							return func_73(10);
						else
							return func_73(5);
						break;
				
					case 478:
					case 501:
					case 523:
					case 556:
						return func_73(10);
				
					case 417:
						if (func_20(plParam0) || func_19(plParam0) || func_17(plParam0))
							if (func_21(Global_2672855, plParam0, true))
								return 3;
							else
								return 4;
						else if (func_21(Global_2672855, plParam0, true))
							return func_73(6);
						else
							return func_73(5);
						break;
				
					case 256:
					case 268:
					default:
						if (func_21(Global_2672855, plParam0, true))
							return func_73(6);
						else
							return func_73(5);
						break;
				}
			}
		}
	}

	return 1;
}

BOOL func_17(Player plParam0) // Position - 0x796
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657971[plParam0 /*465*/].f_322.f_8 != -1)
				return func_18(Global_2657971[plParam0 /*465*/].f_322.f_8) == 16;

	return false;
}

int func_18(int iParam0) // Position - 0x7DD
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
	}

	return -1;
}

BOOL func_19(Player plParam0) // Position - 0xCDD
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657971[plParam0 /*465*/].f_322.f_8 != -1)
				return func_18(Global_2657971[plParam0 /*465*/].f_322.f_8) == 15;

	return false;
}

BOOL func_20(Player plParam0) // Position - 0xD24
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657971[plParam0 /*465*/].f_322.f_8 != -1)
				return func_18(Global_2657971[plParam0 /*465*/].f_322.f_8) == 14;

	return false;
}

BOOL func_21(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0xD6B
{
	if (func_24(plParam0, -2, false, false, false) == func_24(plParam1, -2, false, false, false))
		return true;

	if (bParam2)
		if (func_22(func_24(plParam0, -2, false, false, false)) && func_22(func_24(plParam1, -2, false, false, false)))
			return true;

	return false;
}

int func_22(int iParam0) // Position - 0xDC4
{
	if (iParam0 == func_23(true) || iParam0 == func_23(false))
		return 1;

	return 0;
}

int func_23(BOOL bParam0) // Position - 0xDEA
{
	if (bParam0)
		return 118;

	return 116;
}

int func_24(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE01
{
	int num;
	var unk;

	if (!func_11(plParam0))
		return 1;

	if (func_70(plParam0) && !bParam4)
		if (bParam2)
			return 0;
		else
			return 1;

	if (iParam1 == -2)
	{
		num = unk_0x1864096A95E36EBA(plParam0);
	
		if (num > -1 && num < 4)
			if (Global_4718592.f_121471[num] != -1)
				iParam1 = num;
	}

	if (func_70(unk_0x259BE71D8A81D4FA()) || func_69() && func_68() && !IS_BIT_SET(Global_2738935.f_4712, 31) && !bParam4)
	{
		unk = func_67();
	
		if (unk_0xFC8BFE4B41177C22(unk))
			if (unk_0x501EBB0523078750(unk))
				if (unk_0x1C1C92A1CBAE364B(unk) != -1)
					if (_NETWORK_IS_PLAYER_VALID(unk_0x1C1C92A1CBAE364B(unk), false, true))
						if (iParam1 > -1 && unk_0x834C960822A4683F() && iParam1 < 4)
							if (Global_4718592.f_121471[iParam1] != -1)
								return func_65(iParam1, plParam0, false);
							else
								return func_41(plParam0, unk_0x1C1C92A1CBAE364B(unk), iParam1, bParam2, bParam3);
						else
							return func_41(plParam0, unk_0x1C1C92A1CBAE364B(unk), iParam1, bParam2, bParam3);
			else if (iParam1 > -1 && unk_0x834C960822A4683F() && iParam1 < 4)
				if (Global_4718592.f_121471[iParam1] != -1)
					return func_65(iParam1, plParam0, false);
				else
					return func_25(false, -1, false);
			else
				return func_25(false, -1, false);
	}

	if (iParam1 > -1 && unk_0x834C960822A4683F() && iParam1 < 4)
		if (Global_4718592.f_121471[iParam1] != -1)
			return func_65(iParam1, plParam0, false);
		else
			return func_41(plParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);

	return func_41(plParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
}

int func_25(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0xFEC
{
	return func_26(unk_0x259BE71D8A81D4FA(), bParam0, iParam1, bParam2);
}

int func_26(Player plParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x1002
{
	int num;

	if (!unk_0x762604C40829DB72(plParam0))
		return 3;

	num = unk_0x1864096A95E36EBA(plParam0);

	if (func_40() || func_39() && func_37() && Global_1680185.f_1)
		if (bParam1)
			return func_36(iParam2, num);
		else
			return func_36(num, num);

	if (bParam1)
	{
		if (iParam2 > -1)
			if (func_30(num, iParam2, 0, -1) && !IS_BIT_SET(Global_4718592.f_15, 18))
				if (num == iParam2)
					return func_23(true);
				else
					return func_23(false);
			else if (bParam3)
				return 28;
			else if (IS_BIT_SET(Global_4718592.f_4, 20))
				return func_27(num, iParam2, true, 4);
			else
				return func_27(num, iParam2, false, 4);
	
		return 28;
	}

	if (num == iParam2 || iParam2 == -1)
		return func_23(true);

	return func_23(false);
}

// Unhandled jump detected. Output should be considered invalid
int func_27(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x1104
{
	int num;

	num = func_29(iParam0, iParam1, iParam3);

	if (func_28(*Global_4718592.f_127178, true))
		if (num == 1)
			num = 0;

	if (bParam2)
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			case 3:
				return 31;
		
			case 4:
				return 32;
		
			case 5:
				return 33;
		
			case 6:
				return 34;
		
			case 7:
				return 35;
		
			case 8:
				return 36;
		
			case 9:
				return 37;
		
			case 10:
				return 38;
		
			case 11:
				return 39;
		
			case 12:
				return 40;
		
			case 13:
				return 41;
		
			case 14:
				return 42;
		
			case 15:
				return 43;
		
			default:
				goto 0x113;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			default:
			
		}
	}

	return 28;
}

BOOL func_28(int iParam0, BOOL bParam1) // Position - 0x121C
{
	int i;

	if (bParam1)
		if (*Global_4718592.f_185586 == 65)
			return true;

	if (iParam0 == 0)
		return false;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (iParam0 == Global_262145.f_9522[i])
			return true;
	}

	return false;
}

int func_29(int iParam0, int iParam1, int iParam2) // Position - 0x126D
{
	int i;
	int num;

	for (i = 0; i < iParam2; i = i + 1)
	{
		if (i == iParam1)
			return num;
		else if (!(iParam0 == i))
			if (!func_30(iParam0, i, 0, -1))
				num = num + 1;
	}

	return -1;
}

BOOL func_30(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x12B5
{
	int num;
	int num2;

	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
			return true;
	
		return false;
	}

	if (iParam0 > -1 && iParam1 > -1 && iParam0 == iParam1)
		return true;

	if (iParam0 > -1 && iParam0 < 4 && iParam1 > -1 && iParam1 < 4)
	{
		num = Global_1058116.f_14[iParam0];
	
		if (iParam3 != -1)
			num = iParam3;
	
		if (num < 17 && num > -1)
		{
			if (IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25622, num))
			{
				num2 = Global_1058116.f_14[iParam1];
			
				if (num2 < 17 && num2 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[num], 0 + iParam1);
							break;
					
						case 1:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[num], 4 + iParam1);
							break;
					
						case 2:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[num], 8 + iParam1);
							break;
					
						case 3:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[num], 12 + iParam1);
							break;
					}
				}
			}
		}
	}

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 0);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 1);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 2);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 3);
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 4);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 5);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 6);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 7);
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 8);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 9);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 10);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 11);
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 12);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 13);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 14);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 15);
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_31(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1600
{
	BOOL num;
	Player player;
	var unk;
	int num2;
	int num3;
	Player i;

	if (iParam0 == iParam2)
		return true;

	if (!IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25623, iParam1))
		return false;

	if (!IS_BIT_SET(Global_4718592.f_3592[iParam2 /*25891*/].f_25623, iParam3))
		return false;

	num = 1;

	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		num3 = unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = i;
	
		if (!_NETWORK_IS_PLAYER_VALID(player, true, true) || func_33(player, 0) || IS_BIT_SET(Global_2657971[player /*465*/].f_200, 2) || func_32(player))
		{
		}
		else if (unk_0x1864096A95E36EBA(player) != iParam2)
		{
		}
		else
		{
			unk = unk_0x56E414973C2A8C0E(player);
		
			if (unk_0x4FAFF4BCB7633475(unk))
			{
			}
			else
			{
				num2 = unk_0x4B423FAA24E8ABF0(unk);
			
				if (num3 == joaat("MP_F_Freemode_01") || num3 == joaat("MP_M_Freemode_01"))
					if (num2 == joaat("MP_F_Freemode_01") || num2 == joaat("MP_M_Freemode_01"))
						return true;
					else
						return false;
				else if (num3 != num2)
					return false;
			}
		}
	}

	return num;
}

BOOL func_32(Player plParam0) // Position - 0x172C
{
	return IS_BIT_SET(Global_1845281[plParam0 /*883*/].f_36.f_18, 14);
}

BOOL func_33(Player plParam0, int iParam1) // Position - 0x1744
{
	BOOL flag;

	if (!func_11(plParam0))
		return false;

	if (plParam0 == unk_0x259BE71D8A81D4FA())
		flag = func_34(-1, false) == 8;
	else
		flag = Global_1845281[plParam0 /*883*/].f_206 == 8;

	if (iParam1 == 1)
		if (unk_0x762604C40829DB72(plParam0))
			flag = unk_0x1864096A95E36EBA(plParam0) == 8;

	return flag;
}

int func_34(int iParam0, BOOL bParam1) // Position - 0x179D
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_35();

	if (Global_1575063[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574920[num2];
		bParam1;
	}

	return num;
}

int func_35() // Position - 0x17DE
{
	return Global_1574926;
}

int func_36(int iParam0, int iParam1) // Position - 0x17EA
{
	if (iParam0 == -1)
		iParam0 = func_29(iParam1, iParam0, 4);

	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		default:
		
	}

	return 28;
}

BOOL func_37() // Position - 0x1838
{
	if (func_38())
		return true;

	return IS_BIT_SET(*Global_4718592.f_190336, 4);
}

BOOL func_38() // Position - 0x1857
{
	return IS_BIT_SET(*Global_4718592.f_178389, 12);
}

BOOL func_39() // Position - 0x186C
{
	if (unk_0x834C960822A4683F())
		return IS_BIT_SET(*Global_4718592.f_190336, 0);

	return IS_BIT_SET(*Global_4718592.f_190336, 0) || Global_1919908 && unk_0x486FF5D06E9659F1(joaat("fm_deathmatch_creator")) > 0;
}

BOOL func_40() // Position - 0x18B3
{
	if (func_38() && unk_0x834C960822A4683F())
		return true;

	return false;
}

int func_41(Player plParam0, Player plParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x18D0
{
	int num;
	BOOL flag;
	Player player;
	int num2;
	int num3;

	if (iParam2 == -2)
		num = unk_0x1864096A95E36EBA(plParam0);
	else
		num = iParam2;

	if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 148)
		flag = true;

	player = plParam0;

	if (player > -1)
		if (Global_1845281[player /*883*/] == 148)
			flag = true;

	if (!flag)
	{
		if (num != -1)
		{
			if (func_49())
			{
				num2 = func_45(plParam0);
			
				if (!(num2 == -1))
					return func_43(num2);
			}
		
			if (func_72(plParam1, plParam0, num, 0) && !IS_BIT_SET(Global_4718592.f_15, 18) || func_30(unk_0x1864096A95E36EBA(plParam1), unk_0x1864096A95E36EBA(plParam0), 0, -1) && IS_BIT_SET(Global_4718592.f_15, 23) && !IS_BIT_SET(Global_4718592.f_15, 18))
				return func_23(true);
			else if (IS_BIT_SET(Global_4718592.f_15, 26))
				return func_42(true);
			else
				return func_26(plParam1, true, num, bParam4);
		}
		else if (Global_1836681 || Global_1836671 || Global_1845281[plParam0 /*883*/] == 0)
		{
			if (plParam0 == plParam1 || Global_1836681 == 1 && Global_1836691 == 0)
				return func_23(true);
			else
				return func_26(plParam1, true, num, bParam4);
		}
	
		if (Global_1836675 && Global_1836148.f_14 == plParam0)
			return 28;
	}

	num3 = func_45(plParam0);

	if (!(num3 == -1))
		return func_43(num3);

	if (bParam3)
		return 0;

	return 1;
}

int func_42(BOOL bParam0) // Position - 0x1A68
{
	if (bParam0)
		return 119;

	return 116;
}

int func_43(int iParam0) // Position - 0x1A7F
{
	int num;

	if (iParam0 > -1)
	{
		num = func_44(iParam0);
	
		switch (num)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

var func_44(int iParam0) // Position - 0x1B42
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_45(Player plParam0) // Position - 0x1B59
{
	if (func_11(plParam0))
		if (func_47(plParam0, true))
			return Global_2648938.f_818.f_11[func_46(plParam0)];

	return -1;
}

Player func_46(int iParam0) // Position - 0x1B89
{
	if (func_11(iParam0))
		return Global_1887305[iParam0 /*610*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_47(int iParam0, BOOL bParam1) // Position - 0x1BAC
{
	if (!func_11(iParam0))
		return false;

	if (!bParam1)
		if (func_48(iParam0))
			return false;

	return func_11(Global_1887305[iParam0 /*610*/].f_10);
}

BOOL func_48(int iParam0) // Position - 0x1BE4
{
	if (func_11(iParam0))
		if (func_11(Global_1887305[iParam0 /*610*/].f_10))
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;

	return false;
}

BOOL func_49() // Position - 0x1C19
{
	if (func_64() || func_63() || func_62() || func_61() || func_60() || func_58() || func_56() || func_53() || func_50())
		return true;

	if (unk_0x834C960822A4683F() && IS_BIT_SET(Global_4718592.f_36, 1))
		return true;

	return false;
}

BOOL func_50() // Position - 0x1C95
{
	return func_51(*Global_4718592.f_127178);
}

BOOL func_51(int iParam0) // Position - 0x1CAB
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_52(i))
			return 1;
	}

	return 0;
}

int func_52(int iParam0) // Position - 0x1CDF
{
	if (iParam0 != -1)
		return Global_262145.f_35481[iParam0];

	return -1;
}

BOOL func_53() // Position - 0x1CFE
{
	return func_54(*Global_4718592.f_127178);
}

BOOL func_54(int iParam0) // Position - 0x1D14
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_55(i))
			return 1;
	}

	return 0;
}

int func_55(int iParam0) // Position - 0x1D48
{
	if (iParam0 != -1)
		return Global_262145.f_32988[iParam0];

	return -1;
}

BOOL func_56() // Position - 0x1D67
{
	return func_57(*Global_4718592.f_127178);
}

BOOL func_57(int iParam0) // Position - 0x1D7D
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_262145.f_31052[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL func_58() // Position - 0x1DB6
{
	return func_59(*Global_4718592.f_127178);
}

BOOL func_59(int iParam0) // Position - 0x1DCC
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_30347[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL func_60() // Position - 0x1E06
{
	return Global_2684504.f_24;
}

BOOL func_61() // Position - 0x1E14
{
	return Global_2684504.f_21;
}

BOOL func_62() // Position - 0x1E22
{
	return Global_2684504.f_19;
}

var func_63() // Position - 0x1E30
{
	return Global_2684504.f_18;
}

var func_64() // Position - 0x1E3E
{
	return Global_2684504.f_17;
}

int func_65(int iParam0, Player plParam1, BOOL bParam2) // Position - 0x1E4C
{
	int num;
	int num2;
	int num3;

	num2 = Global_1058116.f_14[iParam0];

	if (func_49())
	{
		num3 = func_45(plParam1);
	
		if (!(num3 == -1))
			return func_43(num3);
	}

	if (num2 > -1 && num2 < 17)
		if (IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_8534[num2], 24))
			return 18;

	if (iParam0 > -1 && plParam1 != _INVALID_PLAYER_INDEX())
	{
		if (Global_4718592.f_121471[iParam0] != -1 && Global_4718592.f_121471[iParam0] <= 4)
			if (Global_4718592.f_121471[iParam0] == 0)
				num = 15;
			else if (Global_4718592.f_121471[iParam0] == 1)
				num = 18;
			else if (Global_4718592.f_121471[iParam0] == 2)
				num = 24;
			else if (Global_4718592.f_121471[iParam0] == 4)
				if (IS_BIT_SET(Global_4718592.f_15, 29))
					num = 21;
				else
					num = 6;
			else
				num = Global_4718592.f_121471[iParam0];
		else
			num = func_26(plParam1, !bParam2, iParam0, false);
	
		if (IS_BIT_SET(Global_4718592.f_21, 13))
			num = func_66(iParam0);
	
		if (IS_BIT_SET(Global_4718592.f_24, 29))
			num = 0;
	
		if (IS_BIT_SET(Global_4718592.f_15, 26) && !func_30(iParam0, unk_0x1864096A95E36EBA(plParam1), 0, -1))
			num = func_42(true);
	}
	else
	{
		num = 1;
	}

	return num;
}

int func_66(int iParam0) // Position - 0x1FCC
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = *Global_4718592.f_185777;
			break;
	
		case 1:
			num = *Global_4718592.f_185778;
			break;
	
		case 2:
			num = *Global_4718592.f_185779;
			break;
	
		case 3:
			num = *Global_4718592.f_185780;
			break;
	}

	switch (num)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		case 4:
			return 6;
	
		case 5:
			return 9;
	
		case 6:
			return 3;
	
		case 7:
			return 1;
	
		case 8:
			return 12;
	
		case 9:
			return 2;
	
		default:
		
	}

	return 2;
}

var func_67() // Position - 0x20A1
{
	return Global_2621446.f_2;
}

BOOL func_68() // Position - 0x20AF
{
	return IS_BIT_SET(Global_2621446, 4);
}

BOOL func_69() // Position - 0x20BD
{
	return IS_BIT_SET(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

BOOL func_70(Player plParam0) // Position - 0x20D7
{
	if (func_33(plParam0, 0))
		return true;

	if (func_71())
		if (plParam0 == unk_0x259BE71D8A81D4FA())
			return true;

	if (IS_BIT_SET(Global_2657971[plParam0 /*465*/].f_200, 2))
		return true;

	return false;
}

BOOL func_71() // Position - 0x2116
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_72(Player plParam0, Player plParam1, int iParam2, int iParam3) // Position - 0x2124
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
			if (unk_0x1864096A95E36EBA(plParam0) == -1 && unk_0x1864096A95E36EBA(plParam1) == -1)
				return false;
	
		return unk_0x1864096A95E36EBA(plParam0) == unk_0x1864096A95E36EBA(plParam1);
	}
	else
	{
		if (iParam3 == 0)
			if (unk_0x1864096A95E36EBA(plParam0) == -1 && iParam2 == -1)
				return false;
	
		return unk_0x1864096A95E36EBA(plParam0) == iParam2;
	}

	return unk_0x1864096A95E36EBA(plParam0) == iParam2;
}

int func_73(int iParam0) // Position - 0x219C
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_75())
				if (iParam0 == 5)
					iParam0 = 6;
				else
					iParam0 = 5;
			break;
	}

	return func_74(iParam0);
}

int func_74(int iParam0) // Position - 0x21D6
{
	switch (iParam0)
	{
		case 10:
			return 9;
	
		case 5:
			return 8;
	
		case 6:
			return 7;
	
		case 8:
			return 6;
	
		case 7:
			return 4;
	
		case 4:
		case 11:
			return 2;
	
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
	}

	return 1;
}

BOOL func_75() // Position - 0x2261
{
	int num;

	num = unk_0x1864096A95E36EBA(Global_2672855);

	if (num > -1 && num < 4)
		return IS_BIT_SET(Global_4718592.f_3592[num /*25891*/].f_14238, 4);

	return false;
}

void func_76(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2298
{
	var unk;

	if (func_78(plParam0))
		return;

	func_77(&Global_2647061.f_723[plParam0], &Global_2647061.f_1086[plParam0], &(Global_2647061.f_393), bParam1, plParam0, bParam2, &unk);
	return;
}

BOOL func_77(var uParam0, var uParam1, var uParam2, BOOL bParam3, Player plParam4, BOOL bParam5, var uParam6) // Position - 0x22D6
{
	if (bParam5)
	{
		if (!unk_0xF40767E41852FB72(*uParam1) || *uParam1 == unk_0x8F76B2250AC806FA())
		{
			*uParam1 = unk_0x8F76B2250AC806FA();
			*uParam0 = unk_0x8F76B2250AC806FA();
		}
	}

	if (!unk_0xF40767E41852FB72(*uParam0) || *uParam0 == unk_0x8F76B2250AC806FA())
	{
		if (bParam3)
		{
			if (!IS_BIT_SET(*uParam2, plParam4))
			{
				*uParam6 = 1;
				unk_0x0B0C9A0F9AAEB7F0(uParam2, plParam4);
			}
		
			*uParam0 = unk_0x8F76B2250AC806FA();
		}
		else
		{
			if (IS_BIT_SET(*uParam2, plParam4))
			{
				*uParam6 = 1;
				unk_0x8744D2E3FC95740E(uParam2, plParam4);
			}
		
			if (*uParam1 == unk_0x8F76B2250AC806FA())
				*uParam1 = -1;
		
			*uParam0 = -1;
		}
	
		return true;
	}
	else if (unk_0xF40767E41852FB72(*uParam1) && !(*uParam1 == unk_0x8F76B2250AC806FA()))
	{
	}

	return false;
}

BOOL func_78(Player plParam0) // Position - 0x2395
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return true;

	if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())
		return true;

	return false;
}

int _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x23BE
{
	switch (func_81())
	{
		case 0:
			return func_80();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

int func_80() // Position - 0x23F1
{
	switch (Global_2698865)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_81() // Position - 0x2415
{
	return Global_32948;
}

void func_82(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2420
{
	var unk;

	if (func_78(plParam0))
		return;

	if (func_77(&Global_2647061.f_822[plParam0], &Global_2647061.f_1185[plParam0], &(Global_2647061.f_367), bParam1, plParam0, bParam3, &unk))
		func_83(plParam0, bParam2);

	return;
}

void func_83(Player plParam0, BOOL bParam1) // Position - 0x2468
{
	if (bParam1)
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2647061.f_368), plParam0);
	else
		unk_0x8744D2E3FC95740E(&(Global_2647061.f_368), plParam0);

	if (unk_0xC450B06E5AAA0985(Global_2647061[plParam0]))
		if (bParam1)
			unk_0x360B279488A775FC(Global_2647061[plParam0], 0);
		else
			unk_0x360B279488A775FC(Global_2647061[plParam0], 1);

	return;
}

BOOL func_84(Player plParam0) // Position - 0x24C3
{
	return func_85(&Global_2647061.f_822[plParam0]);
}

BOOL func_85(var uParam0) // Position - 0x24DA
{
	if (unk_0xF40767E41852FB72(*uParam0))
		if (!(*uParam0 == unk_0x8F76B2250AC806FA()))
			return 0;

	return 1;
}

void func_86(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x24FD
{
	var unk;

	if (func_78(plParam0))
		return;

	if (func_77(&Global_2647061.f_624[plParam0], &Global_2647061.f_987[plParam0], &(Global_2647061.f_389), bParam2, plParam0, bParam3, &unk))
		if (bParam2)
			Global_2647061.f_459[plParam0] = iParam1;

	return;
}

int func_87(int iParam0) // Position - 0x254F
{
	int num;
	int num2;
	int num3;
	var unk;

	switch (iParam0)
	{
		case 1:
			return 4;
	
		case 0:
			return 4;
	
		case 6:
			return 59;
	
		case 18:
			return 2;
	
		case 13:
			return 5;
	
		case 116:
			return 38;
	
		case 28:
			return 6;
	
		case 29:
			return 7;
	
		case 30:
			return 8;
	
		case 31:
			return 9;
	
		case 32:
			return 10;
	
		case 33:
			return 11;
	
		case 34:
			return 12;
	
		case 35:
			return 13;
	
		case 36:
			return 14;
	
		case 37:
			return 15;
	
		case 38:
			return 16;
	
		case 39:
			return 17;
	
		case 40:
			return 18;
	
		case 41:
			return 19;
	
		case 42:
			return 20;
	
		case 43:
			return 21;
	
		case 44:
			return 22;
	
		case 45:
			return 23;
	
		case 46:
			return 24;
	
		case 47:
			return 25;
	
		case 48:
			return 26;
	
		case 49:
			return 27;
	
		case 50:
			return 28;
	
		case 51:
			return 29;
	
		case 52:
			return 30;
	
		case 53:
			return 31;
	
		case 54:
			return 32;
	
		case 55:
			return 33;
	
		case 56:
			return 34;
	
		case 57:
			return 35;
	
		case 58:
			return 36;
	
		case 59:
			return 37;
	
		case 9:
			return 57;
	
		case 10:
			return 53;
	
		case 118:
			return 57;
	
		case 14:
			return 56;
	
		case 3:
			return 55;
	
		case 21:
			return 50;
	
		case 15:
			return 51;
	
		case 20:
			return 52;
	
		case 11:
			return 54;
	
		case 23:
			return 58;
	
		case 12:
			return 60;
	
		case 24:
			return 61;
	
		case 4:
			return 62;
	
		default:
		
	}

	unk_0xA306E6FD2A6558E6(iParam0, &num, &num2, &num3, &unk);
	return (num * 16777216) + (num2 * 65536) + (num3 * 256) + unk;
}

int func_88(int iParam0) // Position - 0x27B7
{
	int num;

	num = func_45(iParam0);

	if (num != -1)
		return func_43(num);

	return 1;
}

BOOL func_89(Player plParam0) // Position - 0x27D7
{
	return func_85(&Global_2647061.f_624[plParam0]);
}

void func_90(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x27EE
{
	BOOL flag;

	if (func_78(plParam0))
		return;

	if (func_77(&Global_2647061.f_591[plParam0], &Global_2647061.f_954[plParam0], &(Global_2647061.f_388), bParam2, plParam0, bParam3, &flag))
	{
		if (bParam2)
			Global_2647061.f_426[plParam0] = iParam1;
	
		if (flag)
			func_91();
	}

	return;
}

void func_91() // Position - 0x2849
{
	Global_2647061.f_1656 = 1;
	Global_1943520.f_3864 = 1;
	return;
}

void func_92() // Position - 0x2861
{
	func_2(Global_2738935.f_5249.f_756);
	unk_0xBBC29EBE6E1A48FA();
	return;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x287B
{
	if (Global_1575055 == 0)
		if (!unk_0x76CD105BCAC6EB9F())
			return true;

	if (func_97())
		return true;

	if (Global_2698758)
		return true;

	if (func_96())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_94())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!unk_0x261E3728EE56B3AC())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (unk_0x486FF5D06E9659F1(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

BOOL func_94() // Position - 0x28FF
{
	return Global_2684504.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x290E
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
		return true;

	return false;
}

BOOL func_96() // Position - 0x2925
{
	return Global_2696172;
}

BOOL func_97() // Position - 0x2931
{
	return Global_2684504.f_695;
}

void func_98() // Position - 0x2940
{
	SYSTEM::WAIT(0);
	return;
}

int func_99() // Position - 0x294D
{
	unk_0xAECC5FA98C879D67(0);
	return 1;
}

