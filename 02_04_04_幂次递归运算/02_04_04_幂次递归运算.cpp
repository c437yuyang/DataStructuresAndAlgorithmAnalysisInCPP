// 02_04_04_�ݴεݹ�����.cpp : �������̨Ӧ�ó������ڵ㡣
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
		//return pow(x, n / 2)*pow(x, n / 2) * x; //���ﲻҪ-1��һ���ģ����磨15-1��/2 �� 14/2
		return pow(x*x, n / 2)*x; //���ﲻҪ-1��һ���ģ����磨15-1��/2 �� 14/2
		 
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
		return pow1(x, n - 1)*x; //ʡȥ���ж�n=1�������Ҳ��

	}
}


int main()
{
	int a = pow(2, 7);
	int b = pow1(2, 9);

	system("pause");
	return 0;
}
