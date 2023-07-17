#include<iostream>
#include<iomanip>
using namespace std;
typedef struct
{
	char maho[10];
	char tenchuho[30];
	int sothanhvien;
	int dongia;
	int mucthunhap;
}hodan;
	void nhapds(hodan a[],int m)
	{
		for (int i=0;i<m;i++)
		{
			cin.ignore();
			cout<<"Nhap ho dan thu : "<<i+1<<endl;
			cout<<"Nhap ma ho: ";
			cin.getline(a[i].maho,10);
			cout<<"Ten chu ho: ";
			cin.getline(a[i].tenchuho,30);
			cout<<"Nhap so thanh vien: ";
			cin>>a[i].sothanhvien;
			cout<<"Nhap mucthunhap: ";
		cin>>a[i].mucthunhap;
			}
		}
	void inds(hodan a[],int m)
	{
		cout<<"\n\n------------DANH SACH HO DAN------------"<<endl;
		cout<<setw(15)<<"ma ho: ";
		cout<<setw(30)<<"ten chu ho: ";
		cout<<setw(25)<<"so thanh vien: ";
		cout<<setw(25)<<"muc thu nhap: "<<endl;
		for (int i=0;i<m;i++)
		{
		cout<<setw(15)<<a[i].maho;
		cout<<setw(30)<<a[i].tenchuho;
		cout<<setw(25)<<a[i].sothanhvien;
		cout<<setw(25)<<a[i].mucthunhap;
		}
	}	
int main(){
hodan a[50];
int n;
cout<<"Nhap so ho dan: "<<endl;
cin>>n;
nhapds(a,n);
inds(a,n);
return 0;
}

