#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c, x1, x2, i;
	cout << "please enter a,b,c:" << endl;
	cin >> a >> b >> c;
	i = sqrt(b*b - 4 * a*c);
	if (b*b - 4 * a*c < 0)
	{

		cout << "�÷����޽�" << endl;
	}
	else if (b*b - 4 * a*c == 0)
	{
		x1 = -b / 2 * a;
		cout << "�÷�����һ����Ϊ��" << "x1=" << x1 << endl;
	}
	else
	{
		x1 = (-b + i) / 2 * a;
		x2 = (-b - i) / 2 * a;
		cout << "�÷��̵�������Ϊ:" << "x1=" << x1 << "x2=" << x2 << endl;
	}
	system("pause");
	return 0;
}