#include <iostream>
#include <string>
using namespace std;
string chuyenNhiPhan(int n);
void chuyenNhiPhanV2(int n);
int giaithua(int n);
int main()
{
	int n;
	cout<<"Nhap so n: ";
	cin>>n;
	chuyenNhiPhanV2(n);
}
string chuyenNhiPhan(int n)
{
	string nhiphan="";
	
	while(n > 0)
	{
		int bit = n%2;
		if(bit == 1)
			nhiphan = '1' + nhiphan;
		else
			nhiphan = '0' + nhiphan;
		n = n /2;
	}
	
	return nhiphan;
}

void chuyenNhiPhanV2(int n)
{
	if(n <= 0)
		return;
	chuyenNhiPhanV2(n/2);
	cout<<n%2;
}
int giaithua(int n)
{
	if(n == 1)
		return 1;
	return n*giaithua(n-1);
}
int Fibo(int n)
{
	if(n == 1 || n == 2)
		return 1;
	return Fibo(n-1) + Fibo(n-2);
}
