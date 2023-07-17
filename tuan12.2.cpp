#include <iostream>
#include <iomanip>
using namespace std;
typedef struct{
    char magv[15];
    char hoten[30];
    int somon;
    int hocky;
}giangvien;
void nhapds(giangvien a[], int m){
for(int i=0; i<m; i++){ 
 cout << "\nNhap giang vien thu:" << i+1 <<endl;
 cin.ignore();
 cout << "Ma giang vien: ";
 cin.getline(a[i].magv,15);
 cout << "\nTen giang vien: ";
 cin.getline(a[i].hoten,30);
 cout << "\nSo mon day: ";
 cin >> a[i].somon;
 cout << "\nHoc ky: ";
 cin >> a[i].hocky;
}
}
void tieude()
{
cout << setw(15) << "Ma gv";
cout << setw(30) << "Ten giang vien";
cout << setw(15) << "So mon";
cout << setw(15) << "Hoc ky";
cout << endl;
}
void inds(giangvien a[],int n)
{
 cout<<"\n-- Danh sach giang vien --"<<endl;
 tieude;
 for(int i = 0;i < n;i ++ ){
 cout << setw(15) << a[i].magv;
 cout << setw(30) << a[i].hoten;
 cout << setw(15) << a[i].somon;
 cout << setw(15) << a[i].hocky;
 cout << endl;
 }
}
void gvday5mon(giangvien a[], int n)
{
cout << "\n-- Ds gv day 5 mon tro len --" << endl;
tieude;
for(int i = 0;i < n;i ++ )
if(a[i].somon >= 5)
{ cout << setw(15) << a[i].magv;
cout << setw(30) << a[i].hoten;
cout << setw(15) << a[i].somon;
cout << setw(15) << a[i].hocky<<endl;
}
}
int main()
{ giangvien gv[50];
 int n; //n là so giang vien nhap vao
cout << "Nhap so giang vien ";
cin >> n;
nhapds(gv, n);
inds(gv, n);
gvday5mon(gv, n);
return 0;
}


