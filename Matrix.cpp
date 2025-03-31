#include<iostream>
#include"Matrix.h"
using namespace std;

//初始化矩阵格式
Matrix::Matrix(int a, int b, int c, int d):a(a),b(b),c(c),d(d){}

//重载输出运算符
ostream& operator<<(ostream& os, const Matrix& m) 
{
	os << m.a << " " << m.b << endl << m.c << " " << m.d << endl;
	return os;
}
//重载输入运算符
istream& operator>>(istream& is, Matrix& m)
{
	is >> m.a >> m.b >> m.c >> m.d;
	return is;
}
//重载加法运算符
Matrix operator+(const Matrix& left,const Matrix& right) 
{
	return Matrix(left.a+right.a, left.b + right.b, left.c + right.c, left.d + right.d);
}

//重载减法运算符
Matrix operator-(const Matrix& left, const Matrix& right)
{
	return Matrix(left.a - right.a, left.b - right.b, left.c - right.c, left.d - right.d);
}

//重载乘法运算符
Matrix operator*(const Matrix& left, const Matrix& right)
{
	return Matrix(left.a * right.a+left.b*right.c, 
				left.a * right.b+left.b*right.d, 
				left.c * right.a+left.c*right.d,
				left.c * right.b+left.d*right.d);
}	

//重载标量运算符左数右矩
Matrix operator*( const int n,const Matrix& l)
{
	return Matrix(n * (l.a), n * (l.b), n * (l.c), n * (l.d));
}

//重载标量运算符左矩右数
Matrix operator*( const Matrix& l,const int n)
{
	return Matrix(n * (l.a), n * (l.b), n * (l.c), n * (l.d));
}

//重载+=运算符
Matrix operator+=(Matrix& left,const Matrix&right)
{
	left.a += right.a;
	left.b += right.c;
	left.c += right.c;
	left.d += right.d;
	return Matrix(left.a, left.b, left.c, left.d);
}

//重载-=运算符
Matrix operator-=(Matrix& left, const Matrix& right)
{
	left.a -= right.a;
	left.b -= right.c;
	left.c -= right.c;
	left.d -= right.d;
	return Matrix(left.a, left.b, left.c, left.d);
}

//重载*=运算符
Matrix operator*=(Matrix& left, const Matrix& right)
{
	left.a *= right.a;
	left.b *= right.c;
	left.c *= right.c;
	left.d *= right.d;
	return Matrix(left.a, left.b, left.c, left.d);
}

//重载==运算符
bool operator==(const Matrix& left, const Matrix& right)
{
	if (left.a == right.a && left.b == right.b && left.c == right.c && left.d == right.d)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

//重载!=运算符
bool operator!=(const Matrix& left, const Matrix& right)
{
	if (left.a == right.a && left.b == right.b && left.c == right.c && left.d == right.d)
	{
		return false;
	}
	else
	{
		return true;
	}
}
