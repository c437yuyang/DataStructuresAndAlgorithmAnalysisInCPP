// 01_07_����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "MATRIX.h"
#include <iostream>
using namespace std;
using namespace yxp_matrix;
int main()
{
	Matrix<int> m(10, 2);
	Matrix<int> m2(10,1);
	Copy(m, m2);


	cout << m[9][1] << endl;

    return 0;
}

