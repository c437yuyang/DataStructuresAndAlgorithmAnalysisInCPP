#pragma once
#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
using std::vector;

namespace yxp_matrix
{
	template <typename T>
	class Matrix
	{
	public:
		Matrix(int rows, int cols) :_array(rows)
		{
			for (int i = 0; i != rows; ++i)
			{
				_array[i].resize(cols);
			}
		}

		const vector<T>& operator[](int row) const //�������õ�ʱ���������
		{
			return _array[row];
		}

		//�ǳ������õ���������������Copy�е�from �� to �ֱ�������������İ汾
		vector<T>& operator[](int row) //ֻ��Ҫ��д1ά�ľ����ˣ�vector����Ҳ֧��[]�����γ���2ά
		{
			return _array[row];
		}

		int numrows()const { return _array.size(); }
		int numcols()const { return numrows() ? _array[0].size() : 0; }

		void clear() { _array.clear(); }
		void resize(int rows, int cols) {
			clear(); _array.resize(rows);
			for (int i = 0; i != cols; ++i) { _array[i].resize(cols); }
		}
	private:
		vector<vector<T>> _array;
	};

	template <class T>
	void Copy(const Matrix<T> &from, Matrix<T> &to)
	{
		to.resize(from.numrows(),from.numcols());

		for (int i = 0; i != from.numrows(); ++i) {
			to[i] = from[i];
		}
	}
}

#endif