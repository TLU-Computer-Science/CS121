#include <iostream>
#include <math.h>
#include <string>
using namespace std;

struct SinhVien
{
	string MSV;
	double diemQT;
	double diemLT;
	double diemTH;
	double diemTK;
	string XL;
};

void Nhap(SinhVien dssv[], int &n);
void Xuat(SinhVien dssv[], int n);
void xetLoai(SinhVien dssv[],int n);
double tongDTB(SinhVien dssv[],int n); 
void sapxep(SinhVien dssv[],int n);
int main()
{
	SinhVien dssv[100];
	int n;
	Nhap(dssv,n);
	xetLoai(dssv,n);
	sapxep(dssv,n);
	Xuat(dssv,n);
	cout<<"TB: "<<tongDTB(dssv,n)<<endl;
}
void Nhap(SinhVien dssv[], int &n)
{
	cout<<"Nhap so luong sinh vien: ";
	cin>> n;
	
	for(int i = 0;i<n;i++)
	{
		cout<<"Nhap thong tin sv thu "<<i+1<<endl;
		cout<<"Nhap MSV: ";
		cin>>dssv[i].MSV;
		
		cout<<"Nhap diemQT: ";
		cin>>dssv[i].diemQT;
		
		cout<<"Nhap diemLT: ";
		cin>>dssv[i].diemLT;
		
		cout<<"Nhap diemTH: ";
		cin>>dssv[i].diemTH;
		
		dssv[i].diemTK = dssv[i].diemQT*0.3 + 0.7*(dssv[i].diemTH + dssv[i].diemLT)/2;
	}
}
void Xuat(SinhVien dssv[], int n)
{
	cout<<"MSV\t DTK\t XL"<<endl;
	for(int i = 0;i<n;i++)
	{
		cout<<dssv[i].MSV<<"\t ";
		cout<<dssv[i].diemTK<<"\t ";
		cout<<dssv[i].XL<<"\t "<<endl;
	}
}
void xetLoai(SinhVien dssv[],int n)
{
	for(int i = 0;i<n;i++)
	{
		if(dssv[i].diemTK < 4.6)
			dssv[i].XL = "Truot";
		else if(dssv[i].diemTK < 6.6)
			dssv[i].XL = "TB";
		else if (dssv[i].diemTK < 7.6)
			dssv[i].XL = "K";
		else if (dssv[i].diemTK < 8.6)
			dssv[i].XL = "G";
		else
			dssv[i].XL ="SX";
	}
}
double tongDTB(SinhVien dssv[],int n)
{
	double tong = 0;
	for(int i =0;i< n;i++)
	{
		tong += dssv[i].diemTK;
	}
	return tong/n;
}
void sapxep(SinhVien dssv[],int n)
{
	for(int i = 0;i<n;i++)
	{
		for(int j = i;j <n;j++)
		{
			if(dssv[i].diemTK < dssv[j].diemTK)
			{
				SinhVien temp = dssv[i];
				dssv[i] = dssv[j];
				dssv[j] = temp;
			}
		}
	}
}
