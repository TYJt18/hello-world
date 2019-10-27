#include"Date1.h"
int main()
{

	Date Datetoday, *t;
	Datetoday.SetDate(2016, 10, 17);
	cout << "One day is:";
	Datetoday.Display();
	t = &Datetoday;
t ->SetDate(2007,12,18);
	cout << " the other day is:";
	t ->Display();
	return 0 ;
}