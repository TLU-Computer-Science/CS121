#include <iostream>
using namespace std;

bool isLeapYear(int year);
int last_day(int month, int year);
void next_day(int &, int &, int &);
int main()
{
	int day,month,year;
	char h;
	do
	{
		cout<<"enter date: ";
		cin>> day>> month>> year;
		cout<<day<<" "<<month<<" "<<year<<endl;
		next_day(day,month,year);
		cout<<day<<" "<<month<<" "<<year<<endl;
		cout<<"Continue? (y/n)"; 
		cin>>h;
	}while(h != 'n');
	return 0;
}

bool isLeapYear(int year)
{
	return (year % 4 == 0 && 
		year % 100 != 0) || year % 400 ==0;
}
int last_day(int month, int year)
{
	switch(month)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			return 31;
		case 4: case 6:case 9:case 11:
			return 30;
		case 2:
			return (isLeapYear(year))?29:28;
		default:
			return -1;
	}
}
void next_day(int &day, int &month, int &year)
{
	int NoDayOfMonth = last_day(month,year);

	if(day < NoDayOfMonth)
		day ++;
	else
	{
		if(day>NoDayOfMonth)
		{	cout<<"Error"<<endl;
			return;
		}
		else
		{
			day = 1;
			if (month < 12)
			{
				month++;
			}
			else
			{
				month = 1;
				year++;
			}
		}
	}

}