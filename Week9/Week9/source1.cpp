#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

class VectorND
{
public:
	vector<int> list;
	int temp;
	VectorND(const int& n)
	{
		temp = n;
		for (int i = 0;i < n;i++)
		{
			list.push_back(rand()%10+1);
		}
	}
	VectorND()
	{
		temp = 0;
	}
	int operator*(const VectorND& vc)
	{
		int ans=0;
		for (int i = 0;i < temp;i++)
		{
			ans += this->list[i]*vc.list[i];
		}
		
		return ans;
	}
};
class MatrixMxN
{
public:
	int  M,N;
	VectorND *matrix;
	MatrixMxN(const int& _rows, const int& _columns)
	{
		M = _rows;
		N = _columns;
		matrix = new VectorND[M];
		for (int i = 0;i < M;i++)
		{
			VectorND v(N);
			matrix[i] = v;
		}
	}
	VectorND operator*(const VectorND& vc)
	{
		VectorND _vc(M);
		for (int i = 0;i < M;i++)
		{
			_vc.list[i] = matrix[i] * vc;
		}
		return _vc;
	}
};
ostream& operator<<(ostream& os, const VectorND& vc)
{
	
	for (int i = 0;i < vc.temp;i++)
	{
		os << vc.list[i] << ' ';
	}
	
	return os;
}
ostream& operator<<(ostream& os, const MatrixMxN& mat)
{

	for (int i = 0;i < mat.M;i++)
	{
		os << mat.matrix[i] << ' '<<std::endl;
		
	}

	return os;
}
int main()
{
	
	srand((unsigned)time(NULL));
	VectorND v(4);
	MatrixMxN m(5,4);
	VectorND y = m*v;
	std::cout << v << std::endl;
	std::cout << ' ' << std::endl;
	std::cout << m << std::endl;
	std::cout << y << std::endl;
	return 0;
}
