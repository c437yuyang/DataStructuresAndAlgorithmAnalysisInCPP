// 02_04_03_ŷ������㷨���������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include <iostream>
#include <vector>
using namespace std;

//������������֪��������0Ϊֹ�����ķ������������������
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

