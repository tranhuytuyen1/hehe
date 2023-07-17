#include<iostream>
#include<iomanip>
using namespace std;
typedef struct{
char masv[20];
char tensv[30];
int diemlt;
int diemth;
}sinhvien;
void nhapds(sinhvien a[], int n){
for(int i = 0; i < n; i ++ ){
 cout << "\nNhap sinh vien thu " << i+1 << ":" << endl;
 cin.ignore();
 cout << "Ma sinh vien:";
 cin.getline(a[i].masv,15);
 cout << "\nTen sinh vien:";
 cin.getline(a[i].tensv,30);
 cout << "\nDiem ly thuyet: ";
 cin >> a[i].diemlt;
 cout << "\nDiem thuc hanh: ";
 cin >> a[i].diemth;
}
}
void tieude()
{
 cout << setw(15) << "Ma sinh vien";
 cout << setw(30) << "Ten sinh vien";
 cout << setw(15) << "Diem LT";
 cout << setw(15) << "Diem TH";
 cout << endl;
}
void inds(sinhvien a[], int n)
{
 cout << "\n --- Danh sach sinh vien ---" << endl;
 tieude;
 for(int i=0; i<n; i++){
 cout << setw(15) << a[i].masv;
 cout << setw(30) << a[i].tensv;
 cout << setw(15) << a[i].diemlt;
 cout << setw(15) << a[i].diemth;
 cout << endl;
 }
}
void dstruot_lt(sinhvien a[], int n)
{
 cout << "\nDanh sach sv truot ly thuyet" << endl;
 tieude;
 for(int i = 0; i < n; i ++ ){
 if(a[i].diemlt < 5){
 cout << setw(15) << a[i].masv;
 cout << setw(30) << a[i].tensv;
 cout << setw(15) << a[i].diemlt;
 cout << setw(15) << a[i].diemth <<endl;
 }
}
}
void dstruot_th(sinhvien a[], int n)
{
 cout << "\nDanh sach sv truot thuc hanh" << endl;
 tieude;
 for(int i=0; i<n; i++){
 if(a[i].diemth < 5){
 cout << setw(15) << a[i].masv;
 cout << setw(30) << a[i].tensv;
 cout << setw(15) << a[i].diemlt;
 cout << setw(15) << a[i].diemth <<endl;
 }
}
}
int main(){
 int n;
 sinhvien sv[50];
 cout << "Nhap so sinh vien: ";
 cin >> n;
 nhapds(sv, n);
 inds(sv, n);
 dstruot_lt(sv, n);
 dstruot_th(sv, n);
return 0;
}

