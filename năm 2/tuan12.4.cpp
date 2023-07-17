#include <iostream>
#include <iomanip>
#define PI 3.14;
#define MAX 100;
using namespace std;
typedef struct{
float r;
float s;
float p;
}HinhTron;
void Nhap(HinhTron &X){
cout << "\nNhap vao ban kinh r = ";
 cin >> X.r;
}
float TinhDienTich(HinhTron &X){
X.s = 3.14*X.r*X.r;
}
void TinhChuVi(HinhTron &X){
X.p = 2*3.14*X.r;
}
void Xuat(HinhTron X){
 cout << "\nHinh Tron:\n";
 cout << "\Ban kinh r = " << X.r;
 cout << "\nDien tich S = " << X.s;
 cout << "\nChu vi P = " << X.p << endl;
}
void Swap(HinhTron &h1,HinhTron &h2)
{
HinhTron tg;
 tg = h1;
 h1 = h2;
 h2 = tg;
}
void SapxeptheoS(HinhTron ht[],int n){
for(int i = 0;i < n-1;i ++ ){
	for(int j = i+1;j < n;j ++ ){
		if(ht[i].s > ht[j].s){
			Swap(ht[i], ht[j]);
		}
	}
}
}
void SapxeptheoP(HinhTron ht[],int n){
for(int i = 0;i < n-1;i ++ ){
	for(int j = i+1;j < n;j ++ ){
		if(ht[i].p < ht[j].p){
			Swap(ht[i],ht[j]);
		}
	}
}
}
int main(){
HinhTron a[MAX];
int n;
cout<<"\nNhap so hinh tron can tinh:";
 cin>>n;
 for(int i = 0;i < n;i ++ ){
 cout << "\nNhap ban kinh hinh tron thu " << i+1 << ": ";
 Nhap(a[i]);
 cout << endl;
}
for(int i = 0;i < n;i ++ ){
 TinhDienTich(a[i]);
 TinhChuVi(a[i]);
}
 SapxeptheoS(a,n);
 cout << "\nThu tu cac hinh tron theo S tu thap toi cao la:\n" ;
for(int i = 0;i < n;i ++ )
{
 cout << "\nHinh " << i+1 << ":";
 Xuat(a[i]);
 cout << endl;
}
 SapxeptheoP(a,n);
 cout<<"\nThu tu cac hinh tron theo P tu cao toi thap la:\n";
for(int i = 0;i < n;i ++ ){
 cout << "\nHinh " << i+1 << ":";
Xuat(a[i]);
cout << endl;
}
return 0;
}

