#include <iostream>
#include <iomanip>
using namespace std;
typedef  struct 
{
	char mamh[10]; 
	char tenmh[30]; 
	int  soluong; 
	float dongia;
	float thanhtien;
} mathang;

void  nhapds(mathang  a[], int n)
{		
for(int i = 0; i < n; i ++ )
{cout << "\nNhap mat hang thu:" << i+1 << endl;
 cin.ignore();
 cout << "Ma mat hang:"; 
 cin.getline(a[i].mamh,10);
 cout << "\nTen mat hang:";
 cin.getline(a[i].tenmh,30); 
 cout << "\nSo luong: ";
 cin >> a[i].soluong; 
 cout << "\nDon gia: ";
 cin >> a[i].dongia;
}
}
void 	 tieude()
{
	cout << setw(10) << "Ma mh";
	cout << setw(30) << "Ten mat hang";
	cout << setw(10) << "So luong";
	cout << setw(15) << "Don gia";
	cout <<setw(15) << "Thanh tien";
	cout << endl;	
}
void 	 inds(mathang  a[], int n)
{ 
   cout << "\n --- Danh sach mat hang ---" << endl;
   tieude;		
   for(int i = 0; i < n; i ++ )
   {   	cout << setw(10) << a[i].mamh;
		cout << setw(30) << a[i].tenmh;
		cout << setw(10) << a[i].soluong;
		cout << setw(15) << a[i].dongia;
		cout << setw(15) << a[i].thanhtien;
		cout << endl;
    } 
}
void 	 tinh_tt(mathang  a[], int n)
{		
  for(int i = 0; i < n; i ++ )
	a[i].thanhtien = a[i].soluong*a[i].dongia;
}
void 	 soluongduoi50(mathang  a[], int n)
{ 
    cout << "\n --Ds mh so luong duoi 50--" << endl;
    tieude;		
    for(int i = 0; i < n; i ++ )
	 	if(a[i].soluong < 50)
  		{  	cout << setw(10) << a[i].mamh;
			cout << setw(30) << a[i].tenmh;
			cout << setw(10) << a[i].soluong;
			cout << setw(15) << a[i].dongia;
			cout << setw(15) << a[i].thanhtien;
			cout << endl;
  		}
} 
int  main()
{	int 	n;
	mathang 	mh[50];
	cout << "Nhap so mat hang:	";
	cin >> n;
 	nhapds(mh, n);
	tinh_tt(mh, n);
	inds(mh, n);
	soluongduoi50(mh, n);
	return 0;
}

