// 1001.cpp : 定义控制台应用程序的入口点。
// Given N rational numbers in the form "numerator/denominator", you are supposed to calculate their sum.

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int LCM(int a, int b)
{
	for (int i = a < b ? a : b; i<a > b ? a : b; i++)
		if (i%a == 0 && i%b == 0)
			return i;
	return a*b;
}
int GMD(int a, int b)
{
	for (int i = a*b; i>0; i--)
		if (a%i == 0 && b%i == 0)
			return i;
	return 1;
}


int main()
{
	int num;
	scanf_s("%d", &num);
	vector<int> numerator, denominator;
	for (int i = 0; i < num; i++)
	{
		int j, k;
		scanf_s("%d/%d", &j, &k);
		numerator.push_back(j);
		denominator.push_back(k);
	}

	vector<int> tmp(denominator.begin(), denominator.end());
	sort(tmp.begin(), tmp.end());
	int ctmp = tmp.at(0);
	for (int i = 1; i < num; i++)
	{
		ctmp = LCM(ctmp, denominator.at(i));
	}
	vector<int> stmp;
	for (int i = 0; i < num; i++)
	{
		stmp.push_back(ctmp / denominator.at(i));
	}
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += numerator.at(i)*stmp.at(i);
	}
	if (sum / ctmp)
		cout << sum / ctmp << " ";
	if (sum%ctmp)
		cout  << sum % ctmp / GMD(sum, ctmp) << "/" << ctmp / GMD(sum, ctmp);
	if (sum / ctmp == 0 && sum%ctmp == 0)
		cout << "0" << endl;
	return 0;
}