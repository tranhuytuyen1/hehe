#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int sochinhphuong(int n);
int sopitago(int n);
int main(){
 int clrscr();
 int n;
	printf ( " Nhap So nguyen duong: " );
	scanf ( " %d ", &n);
if (sochinhphuong(n))
	printf ( " %d la so chinh phuong",n);
	else
	printf ( " %d khong la so chinh phuong",n);

if (sopitago(n))
	printf ( " %d la so pitago ",n);
	else
	printf ( " %d khong la so pitago ",n);
getch();
}

int sochinhpuong(int n)
{
	int t=sqrt(n);
	if (n==t*t) return 1;
	else return 0;
}

int sopitago(int n)
{
	int i;
	if (!sochinhphuong(n)) return 0;
	else
{ for(i=1;i<n;i++)
	if (sochinhphuong(i)&& sochinhphuong(n-i)) break;
	if (i<n) return 1;
else return 0;
}
}
