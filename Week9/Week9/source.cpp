//#include <iostream>
//#include <vector>
//using namespace std;
//class Vector3D
//{
//public:
//	int x, y, z;
//
//	Vector3D(int x_, int y_, int z_)
//	{
//		x = x_;
//		y = y_;
//		z = z_;
//	}
//	Vector3D()
//	{
//		x = 0.0;
//		y = 0.0;
//		z = 0.0;
//	}
//	Vector3D& operator=(const Vector3D& rhs)
//	{
//		this->x = rhs.x;
//		this->y = rhs.y;
//		this->z = rhs.z;
//
//		return *this;
//	}
//	int operator*(const Vector3D& input)
//	{
//		int ans;
//		ans = this->x* input.x;
//		ans += this->y*input.y;
//		ans += this->z*input.z;
//
//		return ans;
//	}
//	friend Vector3D& operator+(Vector3D& rhs, const Vector3D& rhs1)
//	{
//		rhs.x += rhs1.x;
//		rhs.y += rhs1.y;
//		rhs.z += rhs1.z;
//		return rhs;
//	}
//	friend ostream& operator<<(ostream& os, const Vector3D& dt);
//};
//class Matrix3x3
//{
//public:
//	Vector3D row0, row1, row2;
//	Matrix3x3(const Vector3D& _r0, const Vector3D& _r1, const Vector3D& _r2)
//	
//		: row0(_r0),row1(_r1),row2(_r2)
//	{}
//	Vector3D operator*(const Vector3D& rhs)
//	{
//		Vector3D ans;
//		ans.x = row0*rhs;
//		ans.y = row1*rhs;
//		ans.z = row2*rhs;
//		
//		return ans;
//	}
//	
//};
//class VectorND
//{
//public:
//	int vector[50];
//	int temp;
//	VectorND(const int& n)
//	{
//		temp = n;
//		for (int i = 0;i < n;i++)
//		{
//			vector[i] = i;
//		}
//	}
//	VectorND()
//	{
//		temp = 0;
//	}
//	friend ostream& operator<<(ostream& os, const VectorND& vc)
//	{
//		
//		for (int i = 0;i < temp;i++)
//		{
//			os << vc.vector[i] << '/' << ;
//		}
//		
//		return os;
//	}
//	/*int operator*(const VectorND& input)
//	{
//		int ans;
//		for (int i = 0;i < temp;i++)
//		{
//			ans = this->vector[i] * input.vector[i];
//		}
//		ans = this->x *input.vector;
//		ans += this->y*input.y;
//		ans += this->z*input.z;
//
//		return ans;
//	}*/
//};
////class Matrix3x3
////{
////public:
////	int matrix[10][10];
////	Matrix3x3(const int& n, const int& m)
////	{
////		for (int i = 0;i < n;i++)
////		{
////			for (int j = 0;j < m;j++)
////			{
////				matrix[i][j] = j;
////			}
////		}
////	}
////};
////ostream& operator<<(ostream& os, const VectorND& vc)
////{
////	os << vc.vector[0] << '/' << vc.vector[1] << '/' << vc.vector[6];
////	return os;
////}
//int main()
//{
//	
//	VectorND a(5),b,c;
//	b = VectorND(7);
//	std::cout << b << std::endl;
//	//Matrix3x3 m(5, 4); // m(number of rows, number of columns)
//	//				   // Implement any style you want.
//	//				   // m(1, 2) = 3;
//	//				   // m.rows_[1][2] = 3;
//	//				   // initialize values of m
//	//VectorND v(5); // v(number of components)
//	//			   // you may implement as follows:
//	//			   /*v.x[0] = 0;
//	//			   v[0] = 0;
//	//			   v.assing(0) = 0;*/
//	//			   // initialize values of v
//	//VectorND y = m * v;
//	//std::cout << y << std::endl;
//	//// confirm the result y by online calculator
//	//// (plz attach captured images in your report)
//	
//	return 0;
//}
