#include <iostream>
#include <iomanip>
using namespace std;
typedef  struct 
{
	char 		manv[10]; 
	char 		tennv[25];
	int		ngaylv;
	float 	hsluong, luongcb, thuong; 
	float 	tongluong;
} nhanvien;
void 	 nhapds(nhanvien  a[], int n)
{  for(int i=0; i<n; i++)
  { 
    cout<<"\nNhap nhan vien thu:"<<i+1<<endl;
    cin.ignore();
    cout<<"Ma nhan vien:"; 
    cin.getline(a[i].manv,10);
    cout<<"\nTen nhan vien:";
    cin.getline(a[i].tennv,25); 
    cout<<"\nHe so luong: ";cin>>a[i].hsluong;
    cout<<"\nNgay lam viec: ";cin>>a[i].ngaylv; 
  }
}
void 	 tinh_luongcb(nhanvien  a[], int n)
{ 
   for(int i=0; i<n; i++)
	a[i].luongcb = 17500 * a[i].hsluong;
} 

void 	 tinh_tongluong(nhanvien  a[], int n)
{ 
  for(int i=0; i<n; i++)
	a[i].tongluong= a[i].luongcb + a[i].thuong;
} 
void 	 tinh_thuong(nhanvien  a[], int n)
{ for(int i=0; i<n; i++)
	if(a[i].ngaylv <= 22)
		a[i].thuong = 0;
	else
		if(a[i].ngaylv <= 24)
			a[i].thuong = 50000;
		else
			if(a[i].ngaylv <= 26)
				a[i].thuong = 100000;
			else
				a[i].thuong = 300000;
} 
void 	 tieude()
{
  	cout<<setw(25)<<"Ten nhan vien";
  	cout<<setw(15)<<"Luong CB";
  	cout<<setw(15)<<"Thuong";
  	cout<<setw(15)<<"Tong luong";
	cout<<endl;
} 
void 	 inds(nhanvien  a[], int n)
{ 
  cout<<"\n --- Danh sach nhan vien ---"<<endl;
  tieude;
  for(int i=0; i<n; i++)
  {  cout<<setw(25)<<a[i].tennv;
	cout<<setw(15)<<a[i].luongcb;
	cout<<setw(15)<<a[i].thuong; 
	cout<<setw(15)<<a[i].tongluong;
	cout<<endl;  
  }
} 
int 	 main()
{	int 	n;
	nhanvien 	nv[50];
	cout<<"Nhap so nhan vien:	";cin>>n;	
	nhapds(nv, n);
	tinh_luongcb(nv, n);
	tinh_thuong(nv, n);
	tinh_tongluong(nv, n);
	inds(nv, n);
	return  0;
}

