// 02_04_最大子序列求解.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;


int maxSubSum2(const vector<int>& v)
{
	int maxSum = 0;

	for (int i = 0; i != v.size(); ++i)
	{
		int tempSum = 0;
		for (int j = i; j != v.size(); ++j)
		{
			tempSum += v[j];
			maxSum = tempSum > maxSum ? tempSum : maxSum;
		}
	}
	return maxSum;
}

int maxSubSum3(const vector<int>& v, int left, int right)
{
	int max = 0;
	if (left == right)
		if (v[left] > 0)
			return v[left];
		else
			return 0;

	int center = (right + left) / 2;
	int maxLeft = maxSubSum3(v, left, center);
	int maxRight = maxSubSum3(v, center + 1, right);

	//下面的计算防止出现跨越式超值，比如5，-4,3，-2，左后最大值由5和3成为8,
	int maxLeftBorderSum = 0, leftBorderSum = 0;
	for (int i = center; i >= left; i--)
	{
		leftBorderSum += v[i];
		if (leftBorderSum > maxLeftBorderSum)
			maxLeftBorderSum = leftBorderSum;
	}

	int maxRightBorderSum = 0, rightBorderSum = 0;
	for (int j = center + 1; j <= right; j++)
	{
		rightBorderSum += v[j];
		if (rightBorderSum > maxRightBorderSum)
			maxRightBorderSum = rightBorderSum;
	}


	max = maxLeft > maxRight ? maxLeft : maxRight;

	return max > (maxRightBorderSum + maxLeftBorderSum) ? max : (maxRightBorderSum + maxLeftBorderSum);

}

int maxSubSum2(const vector<int>& v)
{
	int maxSum = 0, thisSum = 0;
	for (int i=0;i!=v.size();++i)
	{
		thisSum += v[i];
		if (thisSum > maxSum) maxSum = thisSum;
		else if (thisSum < 0) thisSum = 0;
	}
	return maxSum;
}



int main()
{
	vector<int> v{ 4,-3,5,-2,-1,2,6,-2 };
	cout << maxSubSum2(v) << endl;

	cout << maxSubSum3(v, 0, v.size() - 1) << endl;

	system("pause");
	return 0;
}

