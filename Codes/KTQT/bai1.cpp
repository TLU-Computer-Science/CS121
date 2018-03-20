#include <iostream>
using namespace std;
bool ktSoNguyenTo(int n);
int giaiThua(int n);
void 
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}
bool ktSoNguyenTo(int n)
{
	if(n < 2)
		return false;
	for (int i = 0; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int giaiThua(int n)
{
	if (n <= 1)
		return 1;
	return n*giaiThua(n-1);
}