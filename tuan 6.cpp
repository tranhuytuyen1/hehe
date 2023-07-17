#include<iostream>
#include<math.h>
using namespace std;
// bài 1 viêt chuong trinh su dung ham de quy tinh so n cua day fibonasi
/*
 long fib (int x){
 	if (x <= 2){
 		return 1 ; 
	 }else{
	 	return fib (x - 1) + fib (x - 2); 
	 } 
 } 
 long tong (int x ){
 	if ( x == 0 ){
	 return 0; 
	 }else {
	return tong(x - 1) + x;
	 } 
 } 
int main(){
	int x ;
cout << "\nNhap so de quy ";
cin >> x ;
cout << "\nSo thu " << x << "\n cua day fibora la " << fib(x) ;
cout << "\nCac day so fibora la  ";
for ( int i = 0;i < x ; i++){
	cout << fib(i) << endl; 
}
cout << "\nTong cua cac day so fibora " << tong(x);
return 0;
}
*/
// bai 2 viet ham de quy 
//S = 1 + 2 + 3 + … +(n-1) + n.
/*
int sum (int n ){
	if ( n==0 ){
		return 0;
	}else{
		return sum(n - 1) + n;
	}
}
int main(){
	int n; 
	cout << "\nNhap de quy  ";
	cin >> n;
	cout << "\nTong cua ham de quy la = " << sum(n);
	return 0; 
}
*/
// bai 3
//viet chuong trinh tinh ham de quy 
// s =1+1/2+1/3+..+1/n
/*
float sum(int a ){
	if(a == 1){
		return 1;
	}else{
		return sum(a-1) + (float)1 / a;
	}
}
int main(){
	float a;
	cout << "\nNhap so de quy " ; 
	cin >> a ;
	cout << "\nTong cua so de quy la = " << sum(a);
	return 0;
}
*/
// Bai 4 
//viet chuong trinh de quy de tinh tinh 
//Sn = 1^1 x 2^2 x 3^3 x 4^4 x …x n^n
/*
int  luythua (int b  ){
	if(b==1){
		return 1;
	}else{
		return luythua(b - 1) * (float)pow(b,b); 
	}
}
int main (){
	int b; 
	cout << "\nNhap so de quy " ;
	cin >> b; 
	cout << "\nTich cua ham de quy la = " << luythua(b);
	return 0;
}
*/
//bai 5 
//Viet ham de tich 
//S = 1 + 4 + 9 + … + n2
/*
double tong(int n){
    if(n == 1)
      return 1;
    else
      return tong(n - 1) + pow(n , 2);
}
int main(){
    int n; 
    cout << "\nNhap n: ";bai
    cin >> n;
    cout << "\nTong la: " << tong(n) << endl;
    return 0;
}
*/
// Bai 6 
//P = 1* 3 * 5 * … * (2n-1)
//bai 6
/*
int tinh(int  n)
{
    if(n == 1)
    return 1;
    if (n % 2 == 0) {
     return tinh (n - 1);
     }
    else{

      return n * tinh(n-1);
    }
}
int main(){

int n;
    cout << "Nhap n : ";
	cin >> n;
    cout << "Tich P la :" << tinh(n) << endl;

}
*/
// bai 7 
/*
int giai_thua(int x){   
        if (x == 0)
            return  1;
        else{
		
            return giai_thua(x-1)*x;
}
    }
    int   main(){	
   unsigned int  n, k; 
    float C;
     cout << "Nhap n: ";   
	  cin >> n;
    cout << "Nhap k: ";   
	 cin >> k;
C=giai_thua(n)/(giai_thua(k) * giai_thua(n-k));
cout << " To hop chap " << k << " cua " << n << " la " << C << endl;
    return 0;
}
*/
// bai 8 
/*
int    UCLN(int    m, int n)
{    if (n == 0)
        return  m;
    else
        return UCLN(n, m % n);
}
int   main(){
    int      a, b, c;
    cout << " Nhap a: ";    
	cin >> a;
    cout << "Nhap b: "; 
	   cin >> b;
    cout << "Nhap c: ";   
	 cin >> c;
    cout << "UCLN = " << UCLN(UCLN(a,b), c) << endl;
    return 0;
}
*/
// bai 9 
/*
long  x(int  n)
{
      if (n == 0){
        return 1;
        }
      long  s = 0;
      for (int i = 1; i <= n; i ++ ){
               s = s + pow(i,2) * x(n - i);
      return  s;
      }
}
int   main(){
    int  n; 
    float xn;
      cout << "Nhap n: "; 
	  cin >> n;
    cout << "xn= " << x(n) << endl;
    return 0;
}
*/
//bai 11  
/*
int chusodautien(int n)
{
if(n/10 == 0)
{
return n;
}
return chusodautien(n/10);
}
int main()
{
    int n;
    cout<<"Nhap so nguyen duong: ";cin>>n;
    cout<<"So dau tien la: "<<chusodautien(n)<<endl;
    return 0;
}
*/
