#include<iostream>
using namespace std;
class NGUOI{
	private:
		char Hoten[30];
		char Scm[30];
		char Gt[3];
	public:
	    NGUOI(){}
		NGUOI(char *hoten,char *scm,char *gt){
			strcpy(this->Hoten,hoten);
			strcpy(this->Scm,scm);
			strcpy(this->Gt,gt);
		}	
		~NGUOI(){}
		void Nhap(NGUOI ng[],int n){
			cin.ignore();
			cout << "\nNhap Thong Tin Nguoi";
			cout << "\nNhap Ho va Ten ";
			cin.getline(cin,Hoten,30);
			cour << "\nNhap so CM scm ";
			cin.getline(cin,Scm,30);
			cout << "\nNhap gioi tinh ";
			cin.getline(cin,Gt,3);
		}
		void Xuat(NGUOI ng[],int n){
			cout << "Ho Va Ten" << Hoten << endl;
			cout << "SCM" << Scm << endl;
			cout << "Gioi tinh" << Gt << endl;
			
		}
		void Nhapsonguoi()
		void TimKiem(NGUOI ng[],int n){
			
		}
};
int main(){
	NGUOI v;
	v.Nhap(ng[],n);
	v.Xuat(ng[],n);

}

