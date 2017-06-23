// Homework_01_05.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


//统计一个数二进制中的1的数目
int countBinaryOne(int num)
{
	if (num % 2 == 0 || num==1) return 1; //偶数永远只有一个1
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

