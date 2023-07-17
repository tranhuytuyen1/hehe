#include<iostream>
using namespace std;
 class TAU{
 	private:
 	       string HangSX;
 	       string VanTTD;
 	       int NamSX;
 	public:
 		TAU(){
		 }
		 ~TAU(){
		 }
		 TAU(string HangSX,string VanTTD,int NamSX){
		 	this->HangSX=HangSX;
		 	this->VanTTD=VanTTD;
		 	this->NamSX=NamSX;
		 }
 	       	friend istream&operator>>(istream&is,TAU&t1){
 	       		cin.ignore();
 	       		cout << "\nHang San Xuat ";
 	       		getline(is,t1.HangSX);
 	       		cout << "\nVan Toc Toi DA";
 	       		getline(is,t1.VanTTD);
 	       		cout << "\nNam San Xuat";
 	       		cin >> NamSX;
 	       		reutrn is;
				}
			friend ostream&operator<<(ostream&os,TAU&t1){
				os << "\nHang " << t1.HangSX;
				os << "\nVan Toc" << t1.VanTTD;
				os << "\nNAm " << t1.NamSX;
			}		
};
 class TAUCHIEN : public TAU{
        private:
		   string LTau;
		   string TTai;
		public:
			TAUCHIEN(){
			}
			~TAUCHIEN(){
			}
		   	TAUCHIEN(string HangSX)
 };
int main(){

}

