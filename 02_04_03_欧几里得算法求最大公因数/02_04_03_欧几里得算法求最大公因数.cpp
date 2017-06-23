// 02_04_03_欧几里得算法求最大公因数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include <iostream>
#include <vector>
using namespace std;

//连续计算余数知道余数是0为止，最后的非零余数就是最大公因数
long gcd(long m, long n) 
{
	while (n!=0)
	{
		int rem = m % n;
		m = n;
		n = rem;
	}
	return m;
}

int main()
{

	cout << gcd(50, 15) << endl;
	cout << gcd(1989,1590) << endl;


	return 0;
}

