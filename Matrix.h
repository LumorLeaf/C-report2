#ifndef MATRIX
#define MATRIX
using namespace std;

class Matrix
{
public:
//初始化函数
	Matrix(int a=1, int b=0, int c=0, int d=1);

//重载输出运算符
	friend ostream& operator<<(ostream& os, const Matrix& m);

//重载输入运算符
	friend istream& operator>>(istream& is, Matrix& m);

//重载加法运算符
	friend Matrix operator+(const Matrix& left,const Matrix& right);

//重载减法运算符
	friend Matrix operator-(const Matrix& left, const Matrix& right);

//重载乘法运算符
	friend Matrix operator*(const Matrix& left, const Matrix& right);

//重载标量运算符
	friend Matrix operator*(const int n,const Matrix& l) ;

//重载标量运算符2
	friend Matrix operator*( const Matrix& l,const int n);

//重载+=运算符
	friend Matrix operator+=(Matrix& left, const Matrix&right);

//重载-=运算符
	friend Matrix operator-=(Matrix& left, const Matrix& right);

//重载*=运算符
	friend Matrix operator*=(Matrix& left, const Matrix& right);

//重载=运算符
	friend bool operator==(const Matrix& left, const Matrix& right);

//重载!运算符
	friend bool operator!=(const Matrix& left, const Matrix& right);
private:
	int a;
	int b;
	int c;
	int d;
};


#endif
