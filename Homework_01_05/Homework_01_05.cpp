// Homework_01_05.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;


//ͳ��һ�����������е�1����Ŀ
int countBinaryOne(int num)
{
	if (num % 2 == 0 || num==1) return 1; //ż����Զֻ��һ��1
	else
	{
		return countBinaryOne(num / 2) + 1;
	}
}


int main()
{
	cout << countBinaryOne(33) << endl;
	system("pause");
    return 0;
}

