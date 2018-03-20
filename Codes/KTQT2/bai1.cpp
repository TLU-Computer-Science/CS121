#include <iostream>
using namespace std;

//y a de 1
int tongNsoLe(int n);
//y b de 1
int giaiThua(int n);

int main()
{
	tongNsoLe(5);
	return 0;
}
int tongNsoLe(int n)
{
	int tong = 0;
	for (int i = 1; i <= n*2; i+=2)
	{
		tong += i;
	}
	return tong;
}
int giaiThua(int n)
{
	if(n < 1)
		return -1;
	if (n == 1)
		return 1;
	return n*giaiThua(n-1);
}