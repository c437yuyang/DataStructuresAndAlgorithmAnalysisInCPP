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

		const vector<T>& operator[](int row) const //常量调用的时候调用这里
		{
			return _array[row];
		}

		//非常量调用调用这里，比如下面的Copy中的from 和 to 分别调用上面和下面的版本
		vector<T>& operator[](int row) //只需要重写1维的就行了，vector本身也支持[]，就形成了2维
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