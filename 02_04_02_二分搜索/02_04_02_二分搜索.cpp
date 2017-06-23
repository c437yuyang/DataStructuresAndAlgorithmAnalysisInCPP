// 02_04_02_二分搜索.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& v, const int value)
{
	int low = 0, high = v.size() - 1;
	while (low <= high)
	{
		int mid = (high + low) / 2;
		if (value < v[mid]) high = mid - 1;
		else if (value > v[mid])low = mid + 1;
		else return mid;
	}
	return -1;
}

int main()
{

	vector<int> v = { 1,3,5,7,11,21 };
	int idx = binarySearch(v, 6);
	idx = binarySearch(v, 7);

	return 0;
}

