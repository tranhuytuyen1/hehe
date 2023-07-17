#include<iostream>
using namespace std;
// Bai 1 + Bai 2

void input (int a[] ,int n){
	for (int i = 0;i < n;i ++ ){
 cout << "a[" << i+1 << "]=" ;
 cin  >> a[i];
       }
}
void output (int a[] ,int n){
	for (int i=0; i<n; i++){
 cout << "a[" << i+1 << "]" << " ";
cout<<endl;
}
}
//Sap xep cac gia tri 
void Sap_xep(int a[],int n){
	for(int i = 0;i < n; i ++){
		for(int j=i+1;j < i;j ++){
			swap(i,j);
		}
	}
}
// tim gia tri nho nhat // Bai 3 
void Tim_min(int a[],int n){
int	min = a[0] ;  int k = 0;
	for(int i = 0;i < n ; i++ ){
		if(a[i] < min){
			min = a[i];
			k = i;
		}
	}
	cout <<" So be nhat trong mang la  " << min << " Tai vi tri " << k ;
}
//Tim so hang am duong =0 // bai 4
void Dem_so(int a[],int n){
	int sd = 0 , sa = 0 , sb = 0;
	for(int i = 0 ; i < n ; i ++ ){
		if(a[i] > 0){
			sd ++;
		} 
		if(a[i] < 0){
			sa ++;
		}
		if(a[i] = 0){
			sb ++;
		}
		cout << "\nCac so duong la " << sd ;
		cout << "\nCac so am la " << sa ; 
		cout << "\nCac so bang ko la " << sb ; 
	}
}
// Dao nguoc ham so // bai 5 
void Dao_nguoc(int a[], int n ){
	cout << "dao nguoc so la " <<endl;
	 for(int i = n - 1;i >= 0;i -- ){ 
             cout<<a[i]<<"\t";
     }
 }
 //Tinh tong phan tu le //Bai 6 
  void Tinh_tong(int a[],int n){
  int s=0;
     cout<<"\nTong phan tu mang so le la : ";
    for (int i = 0;i < n; i++) {
       if(a[i] % 2 == 1)
       { 
       s = s + a[i];
    }
    }
    cout << s << endl;
 }
 // Tinh tong vs trung binh cong day so //Bai 11
void Tinh_TBC(int a[], int n){
	cout << "\nTong vs trung binh cong cua day so la " ;
    int  S = 0;
     for(int i = 0; i < n;i ++){
	 S = S + a[i];
}
    cout<<"\nTong la: " << S ;
    cout<<"\nTBC la: " <<(float)S/n<<endl; 
}
//Phuong trinh khac nhau cua day so : BAi 8 
void Pt_khac(int a[],int n ){
	cout<<"Cac pt khac nhau cua mang la:"<<endl;
    for (int i = 0; i<n; i++){
        if(a[i] != a[i+1])
            cout<<a[i]<<endl;
}
}
// xoa so thu k trong n so vua nhap . ra n-1 so con lai :bai 7 
void Xoa(int a[],int n ){
	int k;
	for (int i = k; i<n; i++){
        a[i] = a[i+1];
    }
    cout<<"Mang sau khi xoa la:"<<endl;
}
// bai 13 
void  Search(int  a[],int n,){
  int dem = 0, x;
    for(int i = 0;i < n;i ++ )
        if (b[i] == x) {
                dem ++;
            cout << i << "\t";
        }
    if(dem == 0)
        cout<<"Khong tim thay"<<endl;
} 
// bai 10 
void Sap_xep1(int a[],int n){
	for(int i = 0;i < n; i ++){
		for(int j=i+1;j < i;j ++){
			swap(i,j);
		}
	}
	for(int k = 0; k < n; k++)
    {
        cout << "a[" << k << "] = " << a[k] << endl;
    }
}
void them(int a[], int n, ){
	int c ,b ;
    for(int i = n; i >= x; i--)
    {
        a[i] = a[i-1];
    }
    a[x] = k;
    n ++;
}
 int main(){
 int a[100]; // Khai bao mang
 int n , k; 
  cout << " Nhap so phan tu cua mang: ";
 cin >> n;
 input(a,n);
  cout << "/nMang truoc khi sap xep " ; 
 output(a,n);
 Sap_xep(a,n);
 cout << "/nMang sau khi sap xep " ;
 output(a,n);
 Tim_min(a,n);
 cout << "\nCac so la " ;
 Dem_so(a,n); 
 Dao_nguoc(a,n);
 Tinh_tong(a,n);
 Tinh_TBC(a,n);
 Pt_khac(a,n);
 cout << "\nNhap so k " ;
 cin >> k; 
 Xoa(a,n);
output(a,n);
cout << "\nNhap gia tri can tim " ;
cin >> x ; 
Search(a,n);
cout << " Nhap gia tri can chen " << endl; 
cin >> c ;
cout << "Nhap so can chen " << endl
cin >> b ;
cout << "mang duoc sap xep sau khi them phan tu: " << endl;
Sap_xep1(a,n);
them(a,n);
}
