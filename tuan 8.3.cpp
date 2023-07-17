#include<iostream>
#include<iomanip>
#define max 50
using namespace std ; 
void input(float a[max][max], int, int); 
void output(float a[max][max], int, int); 
float sum (float a[max][max], int, int); 
int main()
{
float a[max][max]; 
int m, n;
cout<<"Nhap so hang m = ";cin>>m;
cout<<"Nhap so hang n = ";cin>>n;
input (a, m, n);
cout<<"Mang vua nhap la"<<endl;
output(a, m, n);
cout<<"Tong cac so trong mang la: "<<sum(a,m,n);
cout<<endl;
return 0;
}
void input(float b[max][max], int m, int n)
{ for (int i=0; i<m; i++)
{ for (int j=0; j<n; j++)
 { cout<<"b["<<i<<"]["<<j<<"]= ";
 cin>>b[i][j]; 
}
cout<<endl;
}
} 
void output(float b[max][max], int m, int n)
{ for (int i=0; i<m; i++)
{ for (int j=0; j<n; j++)
cout<<setw(6)<<b[i][j];
cout<<endl;
}
}
float sum (float a[max][max], int m, int n)
{
float s = 0;
for(int i=0; i<m; i++)
for(int j=0; j<n; j++)
s += a[i][j];
return s;
}

