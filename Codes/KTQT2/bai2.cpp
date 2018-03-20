#include <iostream>
using namespace std;

void nhap(int array[], int &n);
void findEvenNumber(int array[],int n, int result[], int &k);
void tongChuoiConLT(int array[],int n);
void sapXep(int array[],int n);

int main()
{
	int n=0;
	int array[100];
	int result[100];
	int k=0;
	nhap(array,n);
	findEvenNumber(array,n,result,k);
	cout<<"So phan tu chan la "<<k<<endl;
	for (int i = 0; i < k; ++i)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;
	tongChuoiConLT(array,n);
	sapXep(array,n);
	cout<<"Day so duoc sap xep"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	return 0;
}

void nhap(int array[], int &n)
{
	do
	{
		cout<<"Nhap so phan tu: "; cin>>n;
	}while(n <= 0);
	
	for (int i = 0; i < n; ++i)
	{
		do
		{
			cout<<"Nhap phan tu thu "<<i+1<<": "; 
			cin>>array[i];
		}while(array[i] < 0);
	}
}
void findEvenNumber(int array[],int n, int result[], int &k)
{
	for (int i = 0; i < n; ++i)
	{
		if (array[i]%2 == 0)
		{
			result[k] = array[i];
			k++;
		}
	}
}
void tongChuoiConLT(int array[],int n)
{
	cout<<"Chuoi con co tong lien tiep bang "<<n<<endl;
	for (int i = 0; i < n; ++i)
	{
		int tong = 0;
		int j = i;
		do
		{
			tong += array[j];
			j++;
		}
		while(tong < n);
		if (tong == n)
		{
			cout<<"[ ";
			for (int k = i; k < j - 1; ++k)
			{
				cout<<array[k]<<", ";
			}
			cout<<array[j-1]<<" ]"<<endl;
		}
	}
}
void sapXep(int array[],int n)
{
	for (int i = 0; i < n -1; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (array[i] < array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}