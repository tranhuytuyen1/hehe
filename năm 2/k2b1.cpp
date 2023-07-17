#include<iostream>
using namespace std;
class HCN {
	private:
	float d;
	float r;
	   public: 
		 void nhap(){
		 	cout << "\nNhap chieu dai ";
		 	cin>>d;
		 	cout << "\nNhap chieu rong";
		 	cin>>r;
		 }
		 void in(){
		 	cout << "(" << d<<"," << r << ")";
		 }
		 float dientich(){
		 	cout << d*r<<"dientich la";
		 	
		 }
		 float chuvi(){
		 	cout << 2*(d+r)<<"chuvi la ";
		 }
};
int main(){
	HCN h;
	cout << "Nhap thong tin ";
	h.nhap();
    cout << "In Thong tin ";
    h.in();
    h.dientich()
    h.chuvi();
 
}

