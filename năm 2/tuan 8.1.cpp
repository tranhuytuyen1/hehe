#include<iostream>
#include<iomanip>
#define max 50
using namespace std;
void input(int b[max][max],int m, int n)
{
for (int i=0;i<m;i++)
for (int j=0;j<n;j++)
 { cout<<"b["<<i<<"]["<<j<<"]= ";
 cin>>b[i][j]; 
}
} 
void output(int b[max][max],int m, int n)
{ for (int i=0;i<m;i++)
{ for (int j=0;j<n;j++)
cout<<setw(6)<<b[i][j];
cout<<endl; 
}
}
void out_line_odd(int b[max][max],int m, int n)
{ for (int i=0;i<m;i++)
if (i%2 == 1)
{ for (int j=0;j<n;j++)
cout<<b[i][j]<<"\t";
cout<<endl;
}
}
int main()
{ int a[max][max], m, n;

cout<<"Nhap so hang m = "; cin>>m; 
cout<<"Nhap so cot n = "; cin>>n;
input(a, m, n); 
output(a, m, n); 
cout<<"Gia tri cac phan tu tren dong le la: "<<endl;
out_line_odd(a,m,n);
return 0;
}

