#include<iostream>
#include<iomanip>
#define max 50
using namespace std;

void Nhap(int b[max][max],int m, int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
         {
             cout<<"b["<<i<<"]["<<j<<"]= ";
            cin>>b[i][j]; 
        }
        cout<<endl;
    }
} 
void Xuat(int b[max][max],int m, int n)
{ 
    for (int i=0;i<m;i++)
    { 
        for (int j=0;j<n;j++)
        cout<<setw(6)<<b[i][j];
        cout<<endl; 
    } 
}
float TB(int b[max][max],int m, int n)
{ 
    int dem=0;
    int T=0;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(10<=b[i][j]&&b[i][j]<=100)
            {
                T+=b[i][j];
                dem++;
            }
        }
    }
    cout<<"Trung binh cong phan tu trong doan  tren mang la: "<<(float) T/dem<<endl;
}
void Sap_xep(int b[max][max],int m, int n)
{ 
    for(int i=0; i<m; i++)
    {
        for (int j=0;j<n;j++)
        {
            for(int x=j+1; x<n; x++)
            {
                if(b[0][j]>b[0][x])
                swap(b[0][j],b[0][x]);
            }
        }
        break;
    }
    for (int i=0;i<m;i++)
    { 
        for (int j=0;j<n;j++)
        cout<<setw(6)<<b[i][j];
        cout<<endl; 
    } 
}
int main()
{ 
    int b[max][max], m, n; 

    cout<<"Nhap so hang m = "; cin>>m; 
    cout<<"Nhap so cot n = "; cin>>n;
    Nhap(b, m, n);
    cout<<"Mang sau khi nhap la: "<<endl; 
    Xuat(b, m, n); 
    TB(b, m, n);
    cout<<"Mang sau khi sap xep tang dan trong dong dau la: "<<endl;
    Sap_xep(b, m, n);
    return 0;
}

