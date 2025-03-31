#include<iostream>
#include"Matrix.h"
using namespace std;

int main()
{
//定义Matrix类
	Matrix m1;
	Matrix m2;
	Matrix m3;

//重载输入矩阵并输出
	cout << "重载输入矩阵并输出" << endl;
	cin >> m1;
	cout << m1 << endl<<endl;

//重载输出矩阵并输出结果
	cout << "重载输出矩阵并输出结果" << endl;
	cout << m1 << endl << endl;

//重载+运算符
	cout << "重载+运算符" << endl;
	cout <<"m1:" <<endl<< m1 << endl <<"m2:" <<endl<< m2 << endl;
	cout <<"m3=m1+m2+m2" << endl<<"m3:"<<endl;
	m3 = m1 + m2+m2;
	cout << m3 << endl<<endl;

//重载-运算符
	cout << "重载-运算符" << endl;
	cout << "m1:" << endl << m1 << endl << "m2:" << endl << m2 << endl;
	cout << "m3=m1-m2" << endl << "m3:" << endl;
	m3 = m1 - m2;
	cout << m3 << endl<<endl;

//重载*运算符
	cout << "重载*运算符" << endl;
	cout << "m1:" << endl << m1 << endl << "m2:" << endl << m2 << endl;
	cout << "m3=m1*m2" << endl << "m3:" << endl;
	m3 = m1 * m2;
	cout << m3 << endl<<endl;

//重载标量乘法
	cout << "重载标量乘法" << endl;	
	cout << "m1:" << endl << m1 <<  endl<<"n=3"<<endl;
	int n = 3;
	cout << "m3=n*m1" << endl << "m3:" << endl;
	m3 = n*m1;
	cout << m3 << endl << endl;
	m3 = m1 * n;
	cout << m3 << endl << endl;

//重载+=运算符
	cout << "重载+=运算符" << endl;
	cout << "m1:" << endl << m1 << endl << "m2" <<endl<<m2<< endl;
	cout << "m1+=m2" << endl << "m1:" << endl;
	m1 += m2;
	cout << m1 << endl << endl;

//重载-=运算符
	cout << "重载-=运算符" << endl;
	cout << "m1:" << endl << m1 << endl << "m2" << endl << m2 << endl;
	cout << "m1-=m2" << endl << "m1:" << endl;
	m1 -= m2;
	cout << m1 << endl << endl;

//重载*=运算符
	cout << "重载*=运算符" << endl;
	cout << "m1:" << endl << m1 << endl << "m2" << endl << m2 << endl;
	cout << "m1*=m2" << endl << "m1:" << endl;
	m1 *= m2;
	cout << m1 << endl << endl;

//重载==运算符
	cout << "重载==运算符" << endl;
	cout << "m1:" << endl << m1 << endl << "m2" << endl << m2 << endl;
	cout << "m1==m2?" << endl ;
	bool consequence1 = m1 == m2;
	cout << consequence1 << endl<<endl;

//重载==运算符
	cout << "重载!=运算符" << endl;
	cout << "m1:" << endl << m1 << endl << "m2" << endl << m2 << endl;
	cout << "m1!=m2?" << endl;
	bool consequence2 = m1 != m2;
	cout << consequence2 << endl<<endl;


}
