#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c, i, k, s;
	cout << "please enter a,b,c:" << endl;
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		k = 1.0 / 2.0 * (a + b + c);
		s = sqrt(k*(k - a)*(k - b)*(k - c));
		cout << "�����ε�����ǣ�" << "s=" << s << endl;

	}

	else
	{
		cout << "���������޷�����������" << endl;

	}
	system("pause");
	return 0;
	
}