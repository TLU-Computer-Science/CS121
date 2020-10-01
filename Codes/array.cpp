#include <iostream>
using namespace std;

int main()
{
	int n;
	int findmax[100];
	cout<<"Enter n: "; 
	cin>>n;

	//doan code duoi day dung de nhap n phan tu tu ban phim
	for (int i = 0; i < n; ++i)
	{
		cout<<"Enter number "<<i+1<<" ";
		cin>>findmax[i];
	}

	// doan code cua minh duoi day dung de in n pt ra man hinh
	for (int i = 0; i < n; ++i)
	{
		cout<<findmax[i]<<" ";
	}

	int max = array[0];
	for (int i = 1; i < n; ++i)
	{
		if (max < findmax[i])
		{
			max = findmax[i];
		}
	}
	cout<<"Max: "<<max<<endl;
	return 0;
}
