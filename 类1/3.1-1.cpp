#include<iostream>

using namespace std;

class Date

{
private:

	int year;

	int month;

	int day;

public:

	void SetDate(int, int, int);        	 	//�����ݳ�Ա��ʼ���Ĺ��г�Ա����

	void Display();                 	   	//ִ����ʾ���ܵĹ��г�Ա����

	int GetYear();                           //���г�Ա��������ȡyear����ֵ

	int GetMonth();                         //���г�Ա��������ȡmonth����ֵ

	int GetDay();                           //���г�Ա��������ȡday����ֵ
	int Set();
};                                         //�˷ֺŲ����٣���ʾ�ඨ�����
int Date::Set()
{

	
	const double PI = 3.14;
	cout << "PI=" << PI << endl;
	return 0;
}
int main()
{
	
	Date DateA;
	DateA.Set( );
	system("pause");
	return 0;
}