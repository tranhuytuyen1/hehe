#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class Truong 
{
private:
	char mt[25];
	char ml[25];
	int sl,ssv;
public:
	Truong(char* mt=" ",char* ml=" ",int sl=0.0,int ssv=0.0)
	{
		strcpy(this->mt," " );
		strcpy(this->ml," ");
		this->sl=0.0;
		this->ssv=0.0;
	}
	friend istream &operator>>(istream &is,Truong&t)
	{
		is.ignore();
		cout<<"Nhap Ma Truong: ";is.getline(t.mt,25);
		cout<<"Nhap Ma Lop: ";is.getline(t.ml,25);
		cout<<"Nhap So Lop: ";is>>t.sl;
		cout<<"Nhap So Sinh Vien: ";is>>t.ssv;
		return is;
		
	}
	friend ostream &operator<<(ostream &os,Truong&t)
	{
		os<<setw(25)<<t.mt<<setw(25)<<t.ml<<setw(20)<<t.sl<<setw(20)<<t.ssv;
		return os;
	}
	int getssv()
	{
		return ssv;
	}
	char *getmt()
	{
		return mt;
	}
	
};
class TruongDaiHoc:public Truong
{
private:
	char tt[25];
	int scn;
public:
	TruongDaiHoc():Truong()
	{
	}
	TruongDaiHoc(char* mt=" ",char* ml=" ",int sl=0.0,int ssv=0.0,char*tt=" ",int scn=0.0):Truong(mt,ml,sl,ssv)
	{
		strcpy(this->tt,tt);
		this->scn=scn;
	}
	friend istream &operator>>(istream &is,TruongDaiHoc&tdh)
	{
		is>>(Truong&)tdh;
		is.ignore();
		cout<<"Nhap Ten Truong: ";is.getline(tdh.tt,25);
		cout<<"Nhap So Chuyen Nganh: ";is>>tdh.scn;
		return is;
	}
	bool operator < (TruongDaiHoc&tdh)
	{
		return(this->scn < tdh.scn);
	}
	bool operator < (int n)
	{
		return(this->scn < n);
	}
	
	friend ostream &operator<<(ostream&os,TruongDaiHoc&tdh)
	{
		os<<(Truong&)tdh;
		os<<setw(25)<<tdh.tt<<setw(25)<<tdh.scn<<endl;
		return os;
	}
	
};
void tieude()
{
	cout<<setw(25)<<"Ma Truong"
		<<setw(25)<<"Ma Lop"
		<<setw(20)<<"So Lop"
		<<setw(20)<<"So Sinh Vien"
		<<setw(25)<<"Ten Truong"
		<<setw(25)<<"So Chuyen Nganh"<<endl;

}
void Nhap(TruongDaiHoc tdh[],int&n)
{
	for (int i=0;i<n;i++)
	{
		cin>>tdh[i];
	}
}
void Xuat(TruongDaiHoc tdh[],int& n)
{
	cout<<"\n\t\t\t-----------Xuat Danh Sach Sinh Vien Vua Nhap-----------\n\n";
	tieude();
	for (int i=0;i<n;i++)
	{
		cout<<tdh[i];
	}
}
void TDHUNETI(TruongDaiHoc tdh[],int &n)
{
	cout<<"\n\t\t\t-----------Thong Tin Truong Dai Hoc 'Uneti'-----------\n\n";
	tieude();
	for (int i=0;i<n;i++)
	{
		char x[15];
		strcpy(x,"Uneti");
		if(strcmpi(tdh[i].getmt(),x)==0)
		cout<<tdh[i];
	}
}
void TimKiem(TruongDaiHoc tdh[],int &n)
{
	cout<<"\n\t\t\t-----------Tim Kiem Truong Dai Hoc-----------\n\n";
	char x[15];
	cout<<"Nhap Truong Dai Hoc Can Tim: ";
	cin.ignore();
	cin.getline(x,15);
	tieude();
	for (int i=0;i<n;i++)
	{
		if(strcmpi(tdh[i].getmt(),x)==0)
		cout<<tdh[i];
	}
}
void svlonhon1000(TruongDaiHoc tdh[],int &n)
{
	cout<<"\n\t\t\t-----------Xuat Danh Sach Sinh Vien > 1000-----------\n\n";
	tieude();
	for (int i=0;i<n;i++)
	{
		if(tdh[i].getssv()>1000)
		cout<<tdh[i];
	}
}
void SapXepTheoSSV(TruongDaiHoc tdh[],int &n)
{
	cout<<"\n\t\t\t----------Sap Xep Giam Dan Theo So Sinh Vien---------\n\n";
	tieude();
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(tdh[i].getssv()<tdh[j].getssv())
			swap(tdh[i],tdh[j]);
		}
		cout<<tdh[i];
	}
}
void SapXepTheoSCN(TruongDaiHoc tdh[],int &n)
{
	cout<<"\n\t\t\t----------Sap Xep Giam Dan Theo So Chuyen Nganh---------\n\n";
	tieude();
	for (int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		if(tdh[i]<tdh[j])
		{
			swap(tdh[i],tdh[j]);
		}
		
		cout<<tdh[i];
	}
}
void CNbehon10(TruongDaiHoc tdh[],int &n)
{
	cout<<"\n\t\t\t------------Xuat Danh Sach Sinh Vien Co Chuyen Nganh < 10 ---------\n\n";
	tieude();
	for (int i=0;i<n;i++)
	{
		
		if(tdh[i]<10)
		cout<<tdh[i];
	}
}
int main()
{
	int n;
	TruongDaiHoc tdh[20];
	cout<<"Nhap vao so truong: ";
	cin>>n;
	Nhap(tdh,n);
	Xuat(tdh,n);
	TDHUNETI(tdh,n);
	TimKiem(tdh,n);
	svlonhon1000(tdh,n);
	SapXepTheoSSV(tdh,n);
	SapXepTheoSCN(tdh,n);
	
}
