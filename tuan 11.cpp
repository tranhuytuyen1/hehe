#include <iostream>
#include<iomanip>
#include <conio.h>
#include <math.h>
#include<string>
//#define MAX 3// bai 1 
using namespace std;
// bai 2
/*
int main(){
	
     int A[5], i;
     int *p = A;
     cout << "Nhap 5 so nguyen :" << endl;
for(i = 0; i < 5; i ++){
     cout << "\n Nhap phan tu thu " << i+1 << ": ";
     cin >> *(p+i);
    }
     cout << "\n Cac so vua nhap la:" << endl;
for(i = 0; i < 5; i ++){
	cout << A[i] << " ";
     cout << endl;
}
return 0;
}
*/
/*
//bai 3
int *MaxA(int data[],int n){
   int *max = data;
   int i;
   for(i = 1;i < n;i ++){
   	if(*max < *(max + i)){
   		*max = *(max + i);
	   }
   }
  return max;
}
 int main(){
int n,i,*p;
    cout << "Nhap so phan tu cua mang n=: "; 
    cin >> n;
int A[n];
for(i = 0;i < n;i ++){
    cout << "\n Nhap gia tri thu " << i+1 << " la:";
    cin >> A[i];
}
   p = MaxA(A,n);
  cout << "Gia tri lon nhat la: " << *p << endl;
  return 0;
}
*/
// bai 1
/*
int main(){
  int A[MAX] = {10, 100, 200};
   int *contro[MAX];
for (int i = 0; i < MAX; i ++ ){
    contro[i] = &A[i]; //gan dia chi cua so nguyen
}
for (int i = 0; i < MAX; i++){
cout<< "Gia tri cua A[" << i << "] = ";
cout<< *contro[i] << endl;
}
return 0;
}
*/
// bai 4 
/*
int main(){
char *s1, *s2;
  s1 = new char();
  s2 = new char();
  cout << "\n Nhap xau thu nhat: ";
  cin.getline(s1,50);
  cout << " Nhap xau thu hai: ";
  cin.getline(s2,50);
if (strcmp(s1,s2) == 0){
	cout<<"Hai xau giong nhau "<<endl;
}else{
	cout<<"Hai xau khac nhau "<<endl;
}
return 0;
}
*/
/*
int main(){
	int n,i;
	cout << "Nhap so luong ten : ";
	cin >> n;
	string name[n],*p;
	for(int i = 0;i < n;i ++ ){
		cin >> name[i];
	}
	do{ cout << "Nhap vi tri cua ten :";
		cin >> i;
		p = &name[i];
		
	}while(i < 0 & i > n);
	cout<<" Ten can tim la :"<<*p;
}
*/
// bai 6
/* 
int main(){
	int n,count=0;
	cout << "Nhap so luong phan tu : ";
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i ++ ){
		cin >> a[i];
	}
	int *p[n];
	for(int i = 0;i < n;i ++ ){
		p[i] = &a[i];
		if(*p[i] % 2 == 0){
			count ++;
		}
	}
	cout<<"So phan tu chan trong mang la "<<count<<endl;
}
*/
/*
// bai 7 
bool songuyento(int a){
	int count=0;
	if(a == 1){
   	        count ++;
		   }
   	for(int j = 2;j < a;j ++){
   		if(a%j == 0){
   			count ++;
		}
	}
	if(count == 0){
		return true;
	}else{
		return false;
	}
	}
int main(){
   int n,count=0;
   cout<<" Nhap so luong phan tu trong mang : ";
   cin >> n;
   int array[n],*p[n];
   for(int i = 0;i < n;i ++){
   	cin >> array[i];
   }
   for(int i = 0;i < n;i ++){
   	p[i] = &array[i];
	if(songuyento(*p[i])){
		count ++;
		}
   }
   cout << "trong mang co so luong so nguyen la : " << count << endl;
}
*/
// bai 12 
/*
int main(){
	int Dem_So_Chan(char *chuoi)
{
	int length=strlen(chuoi), dem=0;
	for(int i=0; i<length; i++)
		if(chuoi[i]%2==0) 
			dem++;
	return dem;
}
int main()
{
	char *chuoi;
	int q;
	chuoi=new char[100];
	cout<<"Nhap chuoi ky tu: "; 
		gets(chuoi);
		cout<<"\nChuoi ky tu vua nhap la: "<< chuoi;
		
		q=Dem_So_Chan(chuoi);

		if(q==0)
			cout<<"\nKhong co so chan";
		else 
			cout<<"\nSo phan tu chan la: "<< q;

	cout<<endl;
	return 0;
*/
// bai 11 
/*
int main(){
char A[3][20];
char *contro[3];
   for (int i = 0; i < 3; i++){
    contro[i] = &A[i][20];
}
for(int i=0;i<3;i++){
    cout << "Nhap ten nguoi thu " << i + 1 << ":";
     gets(A[i]);
}
 int c;
   cout << "Chon vi tri can in ten:";
    cin >> c;
  for (int i = 0; i < 3; i ++ )
{
   if(c == i){
    cout << "Ten la :";
	 cout << *contro;
	}
}
return 0;
*/
// bai 5 
/*
int main(){
char A[3][20];
char *contro[3];
   for (int i = 0; i < 3; i++){
    contro[i] = &A[i][20];
}
for(int i=0;i<3;i++){
    cout << "Nhap ten nguoi thu " << i + 1 << ":";
     gets(A[i]);
}
 int c;
   cout << "Chon vi tri can in ten:";
    cin >> c;
  for (int i = 0; i < 3; i ++ )
{
   if(c == i){
    cout << "Ten la :";
	 cout << *contro;
	}
}
return 0;
}
*/
