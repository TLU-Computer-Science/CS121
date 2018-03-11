#include <iostream>
#include <math.h>
using namespace std;
bool ktSoNguyenTo(int n);
bool ktDoiXung(int n);
bool ktSoHoanHao(int n);
void dsBienXau(int ketqua[],int &k);

int main()
{
	int ketqua[10000];
	int k = 0;
	dsBienXau(ketqua,k);
	cout<<"K = "<<k<<endl;
	for(int i = 0; i< k;i++)
	{
		cout<<ketqua[i]<<" ";
	}
	
}
bool ktSoNguyenTo(int n)
{
	if(n < 2)
		return false;
	for(int i = 2; i<= sqrt(n);i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}
bool ktDoiXung(int n)
{
	if(n >= 0 && n <= 9)
		return true;
	int songuoc = 0;
	int k = n;
	while(n > 0)
	{
		songuoc = songuoc*10 + n%10;
		n = n/10;
	}
	
	if(songuoc == k)
		return true;
	return false;
}
bool ktSoHoanHao(int n)
{
	int tonguoc = 1;
	for(int i = 2; i < n; i++)
	{
		if(n%i == 0)
			tonguoc += i;
	}
	if(tonguoc == n)
		return true;
	return false;
}
void dsBienXau(int ketqua[],int &k)
{
	for(int i = 1000;i< 100000;i++)
	{
		if(ktSoNguyenTo(i) || ktDoiXung(i) || ktSoHoanHao(i))
		{
			ketqua[k] = i;
			k++;
		}
	}
}
