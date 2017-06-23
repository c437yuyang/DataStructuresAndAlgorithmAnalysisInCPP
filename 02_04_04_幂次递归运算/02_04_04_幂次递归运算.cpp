// 02_04_04_幂次递归运算.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <vector>
using namespace std;

long pow(int x, int n)
{
	if (n == 0) return 1;
	if (n == 1) return x;
	if (n % 2 == 0)
	{
		//return pow(x, n / 2)*pow(x, n / 2);
		return pow(x*x, n / 2);

	}
	else
	{
		//return pow(x, (n - 1) / 2)*pow(x, (n - 1) / 2) * x;
		//return pow(x, n / 2)*pow(x, n / 2) * x; //这里不要-1是一样的，比如（15-1）/2 和 14/2
		return pow(x*x, n / 2)*x; //这里不要-1是一样的，比如（15-1）/2 和 14/2
		 
	}
}

long pow1(int x, int n)
{
	if (n == 0) return 1;
	if (n % 2 == 0)
	{
		return pow1(x*x, n / 2);
	}
	else
	{
		return pow1(x, n - 1)*x; //省去了判断n=1的情况，也对

	}
}


int main()
{
	int a = pow(2, 7);
	int b = pow1(2, 9);

	system("pause");
	return 0;
}
