#include<iostream>

using namespace std;

class Date

{
private:

	int year;

	int month;

	int day;

public:

	void SetDate(int, int, int);        	 	//对数据成员初始化的公有成员函数

	void Display();                 	   	//执行显示功能的公有成员函数

	int GetYear();                           //公有成员函数，提取year变量值

	int GetMonth();                         //公有成员函数，提取month变量值

	int GetDay();                           //公有成员函数，提取day变量值
	int Set();
};                                         //此分号不能少，表示类定义结束
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