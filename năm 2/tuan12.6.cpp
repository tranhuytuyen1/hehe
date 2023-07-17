#include <iostream>
#include <iomanip>
using namespace std;
typedef  struct 
{
	char manv[10]; 
	char tennv[30]; 
	float luong; 
	float phucap;
	double	tongluong;
}nhanvien;
void 	 nhapds(nhanvien  a[], int n)
{		
  for(int i = 0; i < n; i ++ ){
    cout << "\nNhap nhan vien thu:" << i+1 << endl;
    cin.ignore();
    cout << "Ma nhan vien:"; 
    cin.getline(a[i].manv,10);
    cout << "\nTen nhan vien:";
    cin.getline(a[i].tennv,30); 
    cout << "\nLuong: ";
	cin >> a[i].luong; 
  }
}
void tieude()
{
	cout << setw(10) << "Ma nv";
	cout << setw(30) << "Ten nhan vien";
  	cout << setw(12) << "Luong";
	cout << setw(12) << "Phu cap";
  	cout << setw(15) << "Tong luong";
	cout << endl;		
} 

void tinh_phucap(nhanvien  a[], int n)
{ 
	for(int i = 0; i < n; i ++ )
		a[i].phucap = 0.25 * a[i].luong;
} 
void 	 tinh_tongluong(nhanvien  a[], int n)
{ 
  for(int i = 0; i < n; i ++ )
	a[i].tongluong = a[i].luong + a[i].phucap;
} 
void 	 sap_xep(nhanvien  a[], int n)
{
for(int i = 0; i < n-1; i ++ )
	for(int j = i+1; j < n; j ++ ){
  		if(a[i].tongluong < a[j].tongluong)
  		{	nhanvien	tg;
			tg = a[i];
			a[i] = a[j];
			a[j] = tg;
		}
	}
}
void 	 inds(nhanvien  a[], int n)
{ 
  cout << "\n --- Danh sach nhan vien ---" << endl;
  tieude;		
  for(int i = 0; i < n; i ++ )
  {  cout << setw(10) << a[i].manv;
	cout << setw(30) << a[i].tennv;
	cout << setw(12) << a[i].luong;
	cout << setw(12) << a[i].phucap; 
	cout << setw(15) << a[i].tongluong;
	cout << endl;  
  }
} 
int	 main()
{	int n;
	nhanvien 	nv[50];
	cout << "Nhap so nhan vien:";
	cin >> n;	
	nhapds(nv, n);
	tinh_phucap(nv, n);
	tinh_tongluong(nv, n);
	inds(nv, n);
	sap_xep(nv, n);
	cout << "Danh sach nv sau khi sx la" << endl;
	inds(nv, n);
}
