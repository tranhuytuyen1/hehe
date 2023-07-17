#include<iostream>
#include<iomanip>
#include <math.h>
#define max 50
using namespace std;
void input(int a[max][max],int m, int n)
{
    for (int i=0;i<m;i++)
    for (int j=0;j<n;j++)
     { cout<<"a["<<i<<"]["<<j<<"]= ";
         cin>>a[i][j];
    }
}
void output(int a[max][max],int m, int n)
{     for (int i=0;i<m;i++)
{     for (int j=0;j<n;j++)
    cout<<setw(6)<<a[i][j];
    cout<<endl; 
}
}
double TBle(int a[max][max],int m, int n){
    int dem=0;
    int tong=0;
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
{
        if(a[i][j]%2==1 ){

            tong+=a[i][j];
            dem++;

        }
    } 
    } 
    cout<<"Trung binh cong phan tu le tren mang la: "<<(double) tong/dem<<endl;
}
bool snt(int a){
    if(a < 2) return false;
    for(int i = 2; i <= sqrt(a); ++i){
        if(a % i == 0) return false;
    }
    return true;
}
int DemSNT(int a[max][max], int m, int n){
    int cnt = 0;
    for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         if(snt(a[i][j])){
             cnt++;
         }
   }
   return cnt;
}
int main()
{
    int a[max][max],m,n;
    cout<<"Nhap so hang m = "; cin>>m;
    cout<<"Nhap so cot n = "; cin>>n;
    input(a, m, n); 
    output(a, m, n);
    TBle(a,m,n);
    cout<<"So luong so nguyen to co trong mang = "<<DemSNT(a,m,n)<<endl;
    return 0;
}//bai5
