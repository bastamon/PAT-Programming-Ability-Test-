// 1002.cpp : 定义控制台应用程序的入口点。
// Given an integer with no more than 9 digits, you are supposed to read it in the traditional Chinese way.
// Output "Fu" first if it is negative.  
// For example, -123456789 is read as "Fu yi Yi er Qian san Bai si Shi wu Wan liu Qian qi Bai ba Shi jiu".
// Note: zero ("ling") must be handled correctly according to the Chinese tradition.
// For example, 100800 is "yi Shi Wan ling ba Bai".

#include "stdafx.h"


using namespace std;

enum unit2num{ Yi=100000000, Wan=10000, Qian=1000,Bai=100,Shi=10,Ge=1};

const char cNum[10][5] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
const char cUnit[10][9] = { "Ge", "Shi", "Bai", "Qian" };
const char cDivi[2][4] = { "Yi", "Wan" };

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

