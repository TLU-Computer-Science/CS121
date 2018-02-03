#include <iostream>
using namespace std;

void swap(int &,int &);
int main()
{
	int number1, number2;
	cout<<"Enter 2 numbers (a,b): ";
	cin>>number1>>number2;
	swap(number1,number2);
	cout<<"Swap(a,b) is "<<number1<<" "<<number2<<endl;
	return 0;
}
void swap(int & a, int & b)
{
	a -= b;
	b += a;
	a = b - a;
}