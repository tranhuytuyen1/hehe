#include<iostream>
#include<iomanip>
#define max 50
using namespace std;
void input(int b[max][max], int); 
void output(int b[max][max], int); 
void tong_chinh(int b[max][max], int);

void in_phu(int a[max][max], int);

int main()
{ int a[50][50], n;
cout<<"Nhap cap cua ma tran n = "; 
cin>>n;
input(a,n);
cout<<"Mang da nhap la:"<<endl;
output(a,n);
tong_chinh(a,n);
in_phu(a,n);
return 0;
} 
void input(int b[max][max],int n)
{ for (int i=0;i<n;i++)
 { for (int j=0;j<n;j++)
 { cout<<"b["<<i<<"]["<<j<<"]= ";
 cin>>b[i][j]; 
}
cout<<endl;
 }
} 
void output(int b[max][max],int n)
{ for (int i=0;i<n;i++)
{ for (int j=0;j<n;j++)
cout<<setw(6)<<b[i][j];
cout<<endl;
 }
}
void tong_chinh(int b[max][max],int n)
{ int tong = 0;
for (int i=0;i<n;i++)
if( b[i][i] % 2 != 0)
tong += b[i][i];
cout<<"\nTong cac phan tu le tren duong cheo chinh la: "<<tong<<endl;
}
void in_phu(int b[max][max],int n)
{ cout<<"\nCac phan tu tren duong cheo phu la:"<<endl;
for (int i=0;i<n;i++)
cout<<setw(6)<<b[i][n-i-1];
cout<<endl;
}

