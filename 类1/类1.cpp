/*************************************************
** ���� :
** ���� :
** �汾 : 2019-10-15 / 18:57
** ��Ȩ : GNU General Public License(GNU GPL)
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
	cout << "���øú����Ķ����thisָ����:" << endl;
	cout << this << endl;
	cout << "��ǰ�����a��Ա����ʼ��ַ�ǣ�" << endl;
	cout << &this->a << endl;
	cout << "��ǰ�����b��Ա����ʼ��ַ�ǣ�" << endl;
	cout << &this->b<< endl;

	cout << "��ǰ�����c��Ա����ʼ��ַ�ǣ�" << endl;
	cout << &this->c<< endl;


}
void Triangl::setdate(float x, float y, float z)
{
	a = x; b = y; c = z;
}




float Triangl::judge(float  a, float  b, float  c)
{
	if (a + b > c && b + c > a && a + c > b)
		cout << "�ܹ���������" << endl;
	else
		cout << "���ܹ���������" << endl;
	return 1;
}

float Triangl::circ(float  a, float  b, float  c)
{
	float m;
	if (a + b > c && b + c > a && a + c > b)
	{
		m = a + b + c;
		cout << "�������ε��ܳ�Ϊ��" << m << endl;
		return m;

	}
	else
		cout << "�޷�����������" << endl;
}
float Triangl::area(float  a, float  b, float  c)
{
	float s; float p;
	if (a + b > c && b + c > a && a + c > b)

	{
		p = (a + b + c) / 2;
		s = sqrt(p *(p - a)*(p - b)*(p - c));

		cout << "�������ε����Ϊ��" << s << endl;
		return s;
	}

	else
	{
		cout << "�޷�����������" << endl;
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
			cout << "�������������������" << endl;
		else if (cos1 < 0 || cos2 < 0 || cos3 < 0)
			cout << "���������Ƕ۽�������" << endl;
		else
			cout << "����������ֱ��������" << endl;
	}
	else
		cout << "���ܹ���������" << endl;
	return 0  ;
}









/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	int s, m,x,y,z;
	cout << "����������������" << endl;
	cin >> x>>y>>z;
	Triangl TrianglA, TrianglB;
	TrianglA.setdate(x,y,z);
	
	
	TrianglA.judge(x,y,z);
	
	TrianglA.circ(x,y,z);
	TrianglA.area(x,y,z);
	TrianglA.type(x,y,z); TrianglA.display(); TrianglA.setdate(x,y,z);
	TrianglB.setdate(x, y, z);
	TrianglA.display();
	cout <<"������ռ�ֽ���Ϊ:"<< sizeof(q) << endl;
	
	system("pause");

	return 0;
}