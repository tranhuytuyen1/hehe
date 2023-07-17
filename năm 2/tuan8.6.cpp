#include<iostream>
#include<iomanip>
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
void kiemtra(int a[max][max],int m,int n )
{
    int dem=0;
    for (int i=0;i<m;i++)

        for(int j=0;j<n;j++){


        if (a[i][j]%2==1){
            dem++;

}

}
        if(dem ==m*n){
            cout<<"Mang toan so le. "<<endl;
        }
        else{
            cout<<"Mang khong chua toan so le. "<<endl;
        }
}
int main()
{ 
    int a[max][max], m, n; 
    cout<<"Nhap so hang m = "; cin>>m;
    cout<<"Nhap so cot n = "; cin>>n;
    input(a, m, n); 
    output(a, m, n); 
    kiemtra(a,m,n);
    return 0;
}

