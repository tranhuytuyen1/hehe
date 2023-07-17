#include <iostream>
#include <iomanip>
#define max 50
using namespace std;
void input(int b[max][max],int m, int n)
{ for (int i = 0;i < m;i ++)
 for (int j = 0;j < n;j ++)
 { cout << "b[" << i << "][" << j << "]= ";
 cin >> b[i][j];
}
} 
void output(int b[max][max],int m, int n)
{ for (int i=0;i<m;i++)
{ for (int j=0;j<n;j++)
cout<<setw(6)<<b[i][j];
cout<<endl;
}
}
void chuyen_vi(int b[max][max],int m, int n)
{ for (int i=0;i<n;i++)
{ for (int j=0;j<m;j++)
cout<<setw(6)<<b[j][i];
cout<<endl;
}
}
int main()
{ int a[max][max], m,n;
cout << "Nhap so hang m = ";
 cin >> m; 
cout << "Nhap so cot n = "; 
cin >> n;
input(a,m,n);
cout << "Ma tran da nhap la:" << endl;
output(a,m,n);
cout << "Ma tran chuyen vi la:" << endl;
chuyen_vi(a,m,n);
return 0;
}
