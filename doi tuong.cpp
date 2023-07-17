#include<iostream>
using namespace std;
struct Ngaythang{
int ngay,thang,nam;
};
class SinhVien
{
	private:
		char hoten[15];
		int namsinh;
		char gioitinh[20];
		char hodem[10];
		Ngaythang ns;
		char hkhau[20];
		float dthi;
	public:
		void NhapThongTin()
		{
			cout << "\n Nhap ten: ";	getline(cin, hoten,10);
			cout << "\n Nhap ngay: ";		cin>>ns.ngay;
			cin.ignore();
			cout << "\n Nhap gioi tinh: ";	getline(cin, gioitinh,10);
			cout<<  "\n Nhap ho khau"; getline(cin, hokhau,20);
			cout<< "\n Nhap ho dem"; getline(cin,hodem,10);
			cout<<"\n nhap diemthi";
			cin>>dthi;
		}
		void InThongTin()
		{
			cout<<"Ho ten: "	<<hoten	<<endl;
			cout<<"Nam sinh: "	<<ns.ngay<<endl;
			cout<<"Gioi tinh: "	<<gioitinh<<endl;
		}
};

int main()
{
	SinhVien sv1;
	cout<<"******************************************"	<<endl;
	cout<<"*** NHAP THONG TIN CHO SINH VIEN ***"	<<endl;
	sv1.NhapThongTin();
	cout << endl << endl;
	cout<<"******************************************"	<<endl;	
	cout<<"*** THONG TIN VE SINH VIEN VUA NHAP ***"	<<endl;
	sv1.InThongTin();
	
	return 0;
}


