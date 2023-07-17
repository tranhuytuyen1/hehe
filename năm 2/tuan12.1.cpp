#include <iostream>
#include <iomanip>
using namespace std;
typedef struct{
   char masp[15];
   char tensp[30];
   int soluong;
   float dongia;
}sanpham;
void nhapds(sanpham a[], int m)
{
for(int i = 0;i < m;i ++)
 { 
 cin.ignore();
cout << "\nNhap san pham thu " << i+1 << endl;
 cout << "Ma san pham:";
 cin.getline(a[i].masp,15);
 cout << "\nTen san pham:";
 cin.getline(a[i].tensp,30);
 cout << "\nSo luong san pham:";
 cin >> a[i].soluong;
 cout << "\nDon gia san pham:";
 cin >> a[i].dongia;
 }
}
void inds(sanpham a[], int m)
{ cout<<"\n\n---DANH SACH SAN PHAM---"<<endl;
cout << setw(15) << "Ma san pham";
cout << setw(30) << "Ten san pham";
cout << setw(15)<< "So luong";
cout << setw(15)<< "Don gia"<<endl;
for (int i=0;i<m;i++)
{
cout<<setw(15)<<a[i].masp;
cout<<setw(30)<<a[i].tensp;
cout<<setw(15)<<a[i].soluong;
cout<<setw(15)<<a[i].dongia<<endl;
}
}
void spgiaduoi20000(sanpham a[], int m){
cout << "\n--Danh sach san pham co gia <20000--" << endl;
cout << setw(15) << "Ma san pham";
cout << setw(30) << "Ten san pham";
cout << setw(15)<< "So luong";
cout << setw(15)<< "Don gia"<<endl;
for(int i=0;i<m;i++)
 if (a[i].dongia <= 20000)
 { cout<<setw(15)<<a[i].masp;
cout<<setw(30)<<a[i].tensp;
cout<<setw(15)<<a[i].soluong;
cout<<setw(15)<<a[i].dongia<<endl;
}
}
int main()
{ sanpham sp[50];
 int n;
 cout<<"Nhap so san pham: ";cin>>n;
 nhapds(sp, n);
 inds(sp, n);
 spgiaduoi20000(sp, n);
 return 0;
}
