/*************************************************
** 功能 :
** 作者 :
** 版本 : 2019-10-15 / 18:57
** 版权 : GNU General Public License(GNU GPL)
/**************************************************/

#include <iostream>
#include <cstdlib>
#include<stdio.h>




using namespace std;

/*----------------------------------*
		 Class Definition
*-----------------------------------*/
class Triangl
{
private:
	float a, b, c;
public:

	float judge(float  a, float  b, float  c);
	float circ(float  a, float  b, float  c);
	float area(float  a, float  b, float  c);
	float type(float  a, float  b, float  c);
	
	void display();
	void setdate(float x, float y, float z);
}q;
void  Triangl::display()
{
	cout << "调用该函数的对象的this指针是:" << endl;
	cout << this << endl;
	cout << "当前对象的a成员的起始地址是：" << endl;
	cout << &this->a << endl;
	cout << "当前对象的b成员的起始地址是：" << endl;
	cout << &this->b<< endl;

	cout << "当前对象的c成员的起始地址是：" << endl;
	cout << &this->c<< endl;


}
void Triangl::setdate(float x, float y, float z)
{
	a = x; b = y; c = z;
}




float Triangl::judge(float  a, float  b, float  c)
{
	if (a + b > c && b + c > a && a + c > b)
		cout << "能构成三角形" << endl;
	else
		cout << "不能构成三角形" << endl;
	return 1;
}

float Triangl::circ(float  a, float  b, float  c)
{
	float m;
	if (a + b > c && b + c > a && a + c > b)
	{
		m = a + b + c;
		cout << "该三角形的周长为：" << m << endl;
		return m;

	}
	else
		cout << "无法构成三角形" << endl;
}
float Triangl::area(float  a, float  b, float  c)
{
	float s; float p;
	if (a + b > c && b + c > a && a + c > b)

	{
		p = (a + b + c) / 2;
		s = sqrt(p *(p - a)*(p - b)*(p - c));

		cout << "该三角形的面积为：" << s << endl;
		return s;
	}

	else
	{
		cout << "无法构成三角形" << endl;
	}

}
float Triangl::type(float  a, float  b, float  c)
{

	float cos1, cos2, cos3;
	cos1 = (a*a + b * b - c * c) / (2 * a*b);
	cos2 = (a*a - b * b + c * c) / (2 * a*c);
	cos3 = (-a * a + b * b + c * c) / (2 * c*b);
	if (a + b > c && b + c > a && a + c > b)
	{
		if (cos1 > 0 && cos2 > 0 && cos3 > 0)
			cout << "该三角形是锐角三角形" << endl;
		else if (cos1 < 0 || cos2 < 0 || cos3 < 0)
			cout << "该三角形是钝角三角形" << endl;
		else
			cout << "该三角形是直角三角形" << endl;
	}
	else
		cout << "不能构成三角形" << endl;
	return 0  ;
}









/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	int s, m,x,y,z;
	cout << "请输入三角形三边" << endl;
	cin >> x>>y>>z;
	Triangl TrianglA, TrianglB;
	TrianglA.setdate(x,y,z);
	
	
	TrianglA.judge(x,y,z);
	
	TrianglA.circ(x,y,z);
	TrianglA.area(x,y,z);
	TrianglA.type(x,y,z); TrianglA.display(); TrianglA.setdate(x,y,z);
	TrianglB.setdate(x, y, z);
	TrianglA.display();
	cout <<"该类所占字节数为:"<< sizeof(q) << endl;
	
	system("pause");

	return 0;
}