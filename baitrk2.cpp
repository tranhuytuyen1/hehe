#incluce <iostream>
#include <iomanip>
using namespace std;

 class Truong{
 	private :
 		char Mtruong;
 		char Mlop;
 		int Solop;
 		int Masv;
 	public:
	    Truong(){
	    	Mtruong = " ";
	    	Mlop = " ";
	    	Solop = 0.0;
	    	Masv = 0.0;
		}	
		~Truong();
		Truong(char Mtruong,char Mlop,int Solop,int Masv){
			this->Mtruong = Mtruong;
			this->Mlop = Mlop;
			this->Solop = Solop;
			this->Masv = Masv;
		}
		friend istream& operator >> (istream&is,Truong&tr){
			is.ignore();
			cout << "/nNhap ma truong ";
			getline(is,tr.Mtruong);
			cout << "/nNhap ma lop ";
			getline(is,tr.Mlop);
			cout << "/nNhap so lop ";
			is >> tr.Mlop;
			cout << "/nNhap Ma sinh vien";
			is >> tr.Masv;
			return is; 
		}
		friend ostream&operator <<(ostream&os,Truong&tr){
			os << setw(10) << tr.Mtruong;
			os << setw(10) << tr.Mlop;
			os << setw(10) << tr.Solop;
			os << setw(10) << tr.Masv;
			return os;
		}
 };
   class TruongDaiHoc : public Truong {
   	  private :
   	  	char Ten_truong;
   	  	int So_chuyen_nganh;
   	  public :
		 TruongDaiHoc(){
		 	Ten_truong=" ";
		 	So_chuyen_nganh=0.0;
		 }	
		 ~TruongDaiHoc();
		 TruongDaiHoc(char Mtruong,char Mlop,int Solop,int Masv, char Ten_truong,int So_chuyen_nganh):Truong(Mtruong,Mlop,Solop,MaSV){
		 		this->Ten_truong=Ten_truong;
		 		this->So_chuyen_nganh=So_chuyen_nganh;
		 }
		 friend istream& operator >> (istream&is,TruongDaiHoc&tdh){
		 	is>>(Truong&) tdh;
		 	is.ignore();
		 	cout << "Nhap ten truong ";
		 	getline(is,tdh.Ten_truong);
		 	cout << "Nhap so chuyen nganh ";
		 	is >> tdh.Ten_chuyen_nganh;
		 	return is ;
		 }
		 friend ostream& operator << (ostream&os,TruongDaiHoc&tdh){
		 	os << (Truong&) tdn;
		 	os << setw(40) << tdh.Ten_truong;
		 	os << setw(40) << tdh.So_chuyen_nganh;
		 	return os;
		 }
   };
   
