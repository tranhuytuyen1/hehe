
//bai 1:
/*
#include <iostream>
#include <fstream>
 using namespace std;
int main()
{
  int n;
  fstream f;
  f.open("output.txt",ios::out); //mo de ghi
 if (!f){
cout << "Khong tao duoc tep!"<<endl;
return -1;
}
 cout << "Nhap n: "; 
 cin >> n;
 if(n%2==0){
f<<n<<" la so chan"<<endl;
  }else{
   f<<n<<" la so le"<<endl;
}
  cout << "\nDa ghi tep!" << endl;
 f.close();
return 0;
}
*/
//bai 2:
/*
#include <iostream>
#include <fstream>
using namespace std;
void doctep(char tentep[], int &m, int &n){
 fstream f(tentep,ios::in);
 if(!f){
  cout << "Khong the mo duoc tep tin "<<f<<endl;
exit(1);
 }
 f>>m>>n;
 f.close();
}
int UCLN(int m, int n)
{
	while(m!=n)
 if(m>n){
 	m=m-n;
 }else{
 	n=n-m;
 }
 return m;
}
void ghitep(char tentep[], int &m, int & n){
 fstream f1(tentep,ios::out);
 if(!f1){
  cout<<"Khong the tao duoc tep tin"<<f1<<endl;
exit(1);
}
   f1 << "\n" << "UCLN = " << UCLN(m,n); //ghi vao tep
}
int main()
{
int n, m;
char f[20],f1[20];
cout << "\n Nhap ten tep doc du lieu: ";
cin.getline(f,30);
doctep(f, m, n);
cout << "\n Nhap ten tep ghi du lieu: ";
cin.getline(f,30);
ghitep(f1, m, n);
return 0;
}
*/
/*
//bai 3:
#include<iostream>
#include<fstream>
using namespace std;
void GhiSoChan(ofstream &f1)
{
 int dem = 0;
 f1<<"Day so chan tu 1 -> 100 \n";
 for(int a = 1; a <= 100; a++)
 {
 if(a%2 == 0)
 {
 dem ++;
 f1<<a;
 }
 if(dem % 10 == 0)
 f1<<"\n";
 if(dem % 10 != 0)
 f1<<"\t";
 }
 cout<<"Da ghi xong tep";
}
int main()
{
ofstream f("so_chan.txt");
 if(!f)
 { cout<<"Khong the tao tep"<<endl;
 return -1;
 }
 GhiSoChan(f);
 f.close();
return 0;
}
*/
/*
//bai 4:
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
typedef struct
{
char manv[10];
char ten[30];
char sdt[12];
float hesoluong;
float luongthang;
int luongcb;
float phucap;
double thunhap;
}nhanvien;
void nhap_1nv(nhanvien *x)
{
cin.ignore();
cout<<"Nhap ma nhan vien: ";cin.getline(x->manv,10);
 cout<<"Nhap ten nhan vien: ";cin.getline(x->ten, 30);
 cout<<"Nhap so dien thoai nhan vien: ";
cin.getline(x->sdt, 12);
cout<<"Nhap luong co ban nhan vien: "; cin>>x->luongcb;
cout<<"Nhap phu cap cua nhan vien: "; cin>>x->phucap;
cout<<"Nhap he so luong cua nhan vien: ";
cin>>x->hesoluong;
}
void nhap_ds( nhanvien a[], int n)
{ for(int i=0; i<n; i++)
{ cout<<"Nhap thong tin nhan vien thu : "<<i+1<<endl;
nhap_1nv(&a[i]);
}
}
void tieude()
{
cout<<setw(15)<<"Ma nhan vien"<<"|";
cout<<setw(20)<<"Ten nhan vien"<<"|";
cout<<setw(15)<<"So dien thoai"<<"|";
cout<<setw(15)<<"He so luong"<<"|";
cout<<setw(15)<<"Luong thang"<<"|";
cout<<setw(15)<<"Luong Co Ban"<<"|";
cout<<setw(15)<<"Phu Cap"<<"|";
cout<<setw(15)<<"Thu nhap"<<"|"<<endl;
}
void xuat_nv(nhanvien a[], int n)
{ cout<<"---------- DANH SACH NHAN VIEN ------------"<<endl;
 tieude();
for (int i=0; i<n; i++)
 { cout<<setw(15)<<a[i].manv<<"|";
cout<<setw(20)<<a[i].ten<<"|";
cout<<setw(15)<<a[i].sdt<<"|";
cout<<setw(15)<<a[i].hesoluong<<"|";
cout<<setw(15)<<a[i].luongthang<<"|";
cout<<setw(15)<<a[i].luongcb<<"|";
cout<<setw(15)<<a[i].phucap<<"|";
cout<<setw(15)<<a[i].thunhap<<"|"<<endl;
}
cout<<"------------------------------------------------------"<<endl;
}
void tinh_luong_thang(nhanvien a[], int n)
{
for(int i=0; i<n; i++)
a[i].luongthang = a[i].luongcb*a[i].hesoluong ;
}
void tinh_thu_nhap(nhanvien a[], int n)
{
for(int i=0; i<n; i++)
a[i].thunhap = (double)a[i].luongcb+a[i].phucap;
}
void tntangdan(nhanvien a[], int n)
{
for (int i=0; i<n-1; i++)
for (int j=i+1; j<n; j++)
if(a[i].thunhap > a[j].thunhap)
{ nhanvien tg = a[i];
a[i] = a[j];
a[j] = tg;
}
xuat_nv(a,n);
}
int nhan_vien_luong_cao_nhat(nhanvien a[], int n)
{ float max=a[0].thunhap;
int vitri=0;
 for(int i=1;i<n;i++)
 if(max < a[i].thunhap){
 max = a[i].thunhap;
 vitri =i;
 }
// bang ten nhan vien co thu nhap cao nhat
cout<<"------- DANH SACH NHAN THU NHAP CAO NHAT -------"<<endl;
tieude();
for(int i=0;i<n;i++)
if(a[i].thunhap == max)
{
cout<<setw(15)<<a[i].manv<<"|";
cout<<setw(20)<<a[i].ten<<"|";
cout<<setw(15)<<a[i].sdt<<"|";
cout<<setw(15)<<a[i].hesoluong<<"|";
cout<<setw(15)<<a[i].luongthang<<"|";
cout<<setw(15)<<a[i].luongcb<<"|";
cout<<setw(15)<<a[i].phucap<<"|";
cout<<setw(15)<<a[i].thunhap<<"|"<<endl;
}
cout<<"------------------------------------------------------"<<endl;
}
void luong_cty_phai_tra(nhanvien a[], int n)
{
double tong = 0;
for(int i=0; i< n; i++)
tong += a[i].thunhap;
}
void xuat_theo_hs(nhanvien a[], int n, float hs)
{cout<<"----------- DANH SACH NHAN VIEN ----------"<<endl;
tieude();
for (int i=0; i<n; i++)
if(a[i].hesoluong > hs )
{
cout<<setw(15)<<a[i].manv<<"|";
cout<<setw(20)<<a[i].ten<<"|";
cout<<setw(15)<<a[i].sdt<<"|";
cout<<setw(15)<<a[i].hesoluong<<"|";
cout<<setw(15)<<a[i].luongthang<<"|";
cout<<setw(15)<<a[i].luongcb<<"|";
cout<<setw(15)<<a[i].phucap<<"|";
cout<<setw(15)<<a[i].thunhap<<"|"<<endl;
}
cout<<"-------------------------------------------------------"<<endl;
}
int main()
{
nhanvien ql[100], nv[100];
int n; //n la so nhan vien
float hs;
cout<<"Nhap vao so nhan vien: ";cin>>n;
nhap_ds(ql,n); //nhap vao thong tin cua n nhan vien
tinh_luong_thang(ql,n);
tinh_thu_nhap (ql,n);
xuat_nv(ql,n);
cout<<"Nhap he so mong muon :";cin>>hs;
xuat_theo_hs(ql,n,hs);
cout<<"Bang luong xep theo thu tu tang dan"<<endl;
tntangdan (ql,n);
nhan_vien_luong_cao_nhat (ql,n);
// Ghi du lieu
fstream f;
f.open("nv.dat", ios::out | ios::binary);
 if(!f)
 { cout<<"Khong the tao duoc tep tin "<< f <<endl;
 exit(1);
 }
f.write((char *)(ql), sizeof(ql)); // ghi du lieu vao tep
 f.close();
 // Doc du lieu
f.open("nv.dat", ios::in | ios::binary);
if(!f)
{ cout <<"Khong the mo duoc tep tin "<<f<< endl;
exit(1);
}
//doc du lieu tu tep ghi ra mang nv
f.read((char *)(nv), sizeof(nv));
//in mang nv ra man hinh
xuat_nv(nv,n);
cout << endl;
f.close();
return 0;
}
*/
/*
//bai 5:
#include<iostream>
#include<fstream>
using namespace std;
void GhiSoLe(ofstream &f1)
{
 int dem = 0;
 f1<<"Day so le tu 1 -> 100 \n";
 for(int a = 1; a <= 100; a++)
 {
 if(a%2 != 0)
 {
 dem ++;
 f1<<a;
 }
if(dem % 10 == 0)
 f1<<"\n";
 if(dem % 10 != 0)
 f1<<"\t";
 }
 cout<<"Da ghi xong tep";
}
int main()
{
ofstream f("out5.txt");
 if(!f)
 { cout<<"Khong the tao tep"<<endl;
 return -1;
 }
 GhiSoLe(f);
 f.close();
return 0;
}
*/
/*
//bai 6:
#include<iostream>
#include<fstream>
using namespace std;
void doctep(char tentep[], int &x, int &y, int &z)    
{  
    fstream  f("in6.txt",ios::in);
 
   if(!f)		
   {	cout << "Khong the mo duoc tep tin "<<f<<endl;
		exit(1);
   }
   f>>x>>y>>z;	
   f.close();
}
int max(int a, int b, int c)
{	int m = a;
	if (m<b)	m = b;
	if (m<c)	m = c;	   
    return m;
}
int min(int a, int b, int c)
{	int m = a;
	if (m>b)	m = b;
	if (m>c)	m = c;	   
    return m;
}
void ghitep(char tentep[], int &x, int &y, int &z)
{ 
fstream  f1("out6.txt",ios::out);

    
  if(!f1)			
  {  cout<<"Khong tao duoc tep"<<endl;	
	 exit(1);
  }
 f1<<"\n"<<"So lon nhat trong 3 so la: "<<max(x, y, z);  
 f1<<"\n"<<"So nho nhat trong 3 so la: "<<min(x, y, z);   
 cout<<" Da ghi xong tep!"<<endl;
}
int main() 
{ 	char 	f[30],f1[30];			  
  	int  	a, b, c;
  	cout<<" Nhap ten tep doc du lieu:"; 
 	cin.getline(f,30);
  	doctep(f, a, b, c);
  	cout<<"\n Nhap ten tep ghi du lieu:"; 
	cin.getline(f1,30);
  	ghitep(f1, a, b, c); 	
  	return 0;
}
*/
/*
//Bai 7
#include<iostream>
#include<fstream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, delta, x1, x2;
	fstream f;
 	f.open("out7.txt",ios::out); 
	if (!f)
	{
	cout << "Khong tao duoc tep!"<<endl;
	return -1;
	}
	cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                f << "Phuong trinh vo so nghiem" ;
            } else {
                f << "Phuong trinh vo nghiem" ;
            }
        } else {
            f << "Phuong trinh co nghiem duy nhat: " << -c/b ;
        }
    } else {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            f << "Nghiem thu nhat x1 = " << x1 ;
            f << "Nghiem thu hai x2 = " << x2 ;
        } else if ( delta == 0) {
            f << "Phuong trinh co nghiem kep: x1 = x2 = " << -b/2*a ;
        } else {
            f << "Phuong trinh vo nghiem" ;
        }
    }
    cout<<"\nDa ghi tep!"<<endl;
 	f.close();
	return 0;
}
*/
/*
//Bai 8
#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c;
	fstream f;
 	f.open("out8.txt",ios::out); 
	if (!f)
	{
	cout << "Khong tao duoc tep!"<<endl;
	return -1;
	}
	cout << "Nhap canh a: ";
    cin >> a;
    f<<"Canh a = "<<a<<endl;
    cout << "Nhap canh b: ";
    cin >> b;
    f<<"Canh b = "<<b<<endl;
    cout << "Nhap canh c: ";
    cin >> c;
    f<<"Canh c = "<<c<<endl;
    if( a<b+c && b<a+c && c<a+b ){
    if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
    f<<"Day la tam giac vuong.";
    else if(a==b && b==c)
    f<<"Day la tam giac deu.";
    else if(a==b || a==c || b==c)
    f<<"Day la tam giac can.";
    else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
    f<<"Day la tam giac tu.";
    else
    f<<"Day la tam giac nhon.";
    }
    else
    f<<"Ba canh a,b,c khong phai la ba canh cua mot tam giac.";
    cout<<"\nDa ghi tep!"<<endl;
 	f.close();
	return 0;
}
*/
