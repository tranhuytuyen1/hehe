#include <iostream>
#include <iomanip>
#include <math.h>
#define max 50
using namespace std;
void Nhap(int b[max][max],int m, int n){
     for (int i=0;i<m;i++){
       for (int j=0;j<n;j++){
         cout<<"b["<<i<<"]["<<j<<"]= ";
         cin>>b[i][j];
         }
         cout<<endl;
   }
}
void Xuat(int b[max][max],int m, int n){
     for (int i=0;i<m;i++){
       for (int j=0;j<n;j++){
         cout<<setw(6)<<b[i][j];
         }
         cout<<endl;
    }
}
int chinhphuong(int b[max][max],int m, int n)
{
     cout<<"Cac so chinh phuong la: ";
    int x;
{for (int i=0;i<m;i++)
{ for (int j=0;j<n;j++)
    {
        float n=sqrt(b[i][j]);
        if ((int(n)==n))
        {

        cout<<b[i][j]<<" ";}
    }
}
}
}
 void TimVTAmDT(int b[max][max],int m, int n){
     cout<<"\nPhan tu am dt: ";
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
          if(b[i][j]<0)
            cout<<"b["<<i<<"]"<<"["<<j<<"]"<<endl;
            break;

    }
}

int main(){
int b[max][max], m,n;
cout<<"Nhap so hang m = "; cin>>m;
cout<<"Nhap so cot n = "; cin>>n;
Nhap(b,m,n);
cout<<"Ma tran da nhap la:"<<endl;
Xuat(b,m,n);
chinhphuong(b,m,n); 
TimVTAmDT(b,m,n);
return 0;
}
