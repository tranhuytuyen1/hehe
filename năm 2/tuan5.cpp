#include <iostream>
#include <conio.h>
using namespace std;
/*
int max(int x, int y)
{
 if ( x > y ){
 	return x;
 }else{
	return y;
}
return 0;
}
int main()
{
int a, b, c, d;
 cout << " Nhap vao 4 so nguyen: " << endl;
 cout << " a = "; 
  cin >> a;
cout << " b = "; 
cin >> b;
cout << " c = "; 
cin >> c;
cout << " d = "; 
cin >> d;
cout << " So lon nhat la " << max(max(a, b) , max(c,d)) << endl;
return 0;
}
*/
// Bai 2 ;
/*
int KTSHH ( int x ){
 int tong = 0;
 for (int i = 1; i < x; i ++)
 if (x % i == 0)
  tong += i;
 if (tong == x)
 return 1;
 return 0;
}
int main()
{
 int n;
cout << " Nhap vao so nguyen duong n: ";
cin >> n;
cout << " Cac so hoan hao trong pham vi " << n << " la: " << endl;
for (int i = 1; i <= n; i ++){
	if (KTSHH(i) == 1){
	cout << i << "\t";
}
}
return 0;
}
*/
// Bai 3 
/*
int UCLN(int m, int n){
 while ( m != n){
 	if (m>n){
 		m = m - n;
	 }else{
 	n = n - m;
 }
}
return m;
}
int main(){
int a, b, c, d;
 cout << "Nhap vao 4 so nguyen: " << endl;
 cout << "a = "; 
 cin >> a;
cout << "b = "; 
cin >> b;
cout << "c = "; 
cin >> c;
cout << "d = "; 
cin >> d;
 cout << " UCLN( " << a << ", " << b << ", " << c << ", " << d << ")= " << UCLN(UCLN(a, b), UCLN(c, d)) << endl;
 return 0;
}
*/
// Bai 4 
/*
using namespace std;
int Nhap(){
    int x;
    do
    {
        cin >> x;
        if (x < 0)
            cout << "Nhap sai, yeu cau nhap lai!";
    }while (x < 0);
    return x;
}
int pow(int x, int y)
{
    if(y == 1) {
        return x;
    }else{
        int temp = pow(x, y/2);
        if(y % 2 == 0){
        	return temp * temp;
		}else{
			return temp * temp * x;
		}
    }
    return 0;
}
int main()
{
    int n, x, y;

    cout << " Nhap so nguyen x: ";
    cin >> x;
    cout << " Nhap so nguyen y: ";
    cin >> y;
    cout << x << " ^ "<< y <<" = "<< pow(x, y);
    return 0;
}
*/
// Bai 5 
/*
int main()
{
    int n;
    long giaiThua = 1;
    cout << "Nhap so n: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        giaiThua = giaiThua * i;
    }
    cout << "Giai thua cua " << n << " la " << giaiThua << endl;
    return 0;
}
*/
// Bai 6 
/*
void tinh (int n){
 for(int i = 1; i <= n; i ++) {
        if(n % i == 0) {
            cout << i << " ";
        }
    }
}
int main() {
    int n;
    cout << " Nhap so n: ";
    cin >> n;
    cout << " Tat ca cac uoc cua so " << n << " la ";
    tinh(n);
    return 0;
}
*/
//Bai 7 
/*
int KTTG(int x, int y, int z){
    if (x + y > z && x + z > y)
    return 1;
    else
    return 0;
}
int main()
{
    int a , b, c;
    cout << " Nhap vao 3 so nguyen duong " << endl;
    cout << " a= ";
	cin >> a;
    cout << "b=" ;
	cin >> b;
    cout << "c=" ; 
	cin >> c;
    if (KTTG(a,b,c)==1){
    	cout << " La 3 canh tam giac " << endl;
	}else{
		cout << "Khong la 3 canh tam giac" << endl;
	}
cout << "Khong la 3 canh tam giac" << endl;
return 0;
}
*/
//bai 8 
/*
int KTSNT(int x){
       int count = 0;
        for (int i = 1; i <= x; i ++){
        	 if(x % i == 0){
        	 	count ++;
			 }
        if(count == 2){
        	return  1;
		}
	}
  return 0;
    }
int   main(){
    unsigned  int n;
     cout << "Nhap vao so nguyen duong n: ";
     cin >> n;
    cout << "Cac so nguyen to trong pham vi " << n << " la:" << endl;
    for (int  i = 1; i <= n; i ++)
        if (KTSNT(i) == 1){
        	cout<<i<<"\t"; 
		}
    return 0;
}
*/
// Bai 9 
/*
int SOCHINHPHUONG (int x){
for(int i = 1; i <= x;i ++)
    if(i * i == x) {
    	return 1;
	}
    return 0;
}
int main(){
int n;
  cout << " nhap n= "; 
  cin >> n;
  cout << " cac so chinh phuong trong pham vi " << n << " la: "<< endl;
for(int i = 1;i <= n;i ++)
    if(SOCHINHPHUONG(i) == 1)
    cout << i << endl;
}
*/
// BÀi 10 ; 
/*
int KTSODOIXUNG( int a){
int b = 0;
int c;
   while (a > 0){
   c = a % 10;
   b = b * 10 + c;
   a = a / 10;
}
   return b;
}
int main(){
int n;
   cout << " nhap n= " ;
   cin >> n;
   if(KTSODOIXUNG(n) == n){
   	cout << n << " la so doi xung" << endl;
   }
   else{
   	cout << n << " khong la so doi xung " << endl;
   } 
   return 0;
}
*/

