#include<iostream>
using namespace std;

class SinhVien
{
	private:
		string ho_ten;
		char ma [15];
		string gioi_tinh;
		float diem_toan;
		float diem_ly;
		float diem_hoa;
	
	public:
		void NhapThongTin()
		{
			cin.ignore();
			cout<<"\n Nhap ten: ";	getline(cin, ho_ten);;
			cout<<"\n Nhap ma sinh vien: ";		cin>>ma;cin.ignore();
			cout<<"\n Nhap diem Toan: ";	cin>>diem_toan;
			cout<<"\n Nhap diem Ly: ";		cin>>diem_ly;
			cout<<"\n Nhap diem Hoa: ";		cin>>diem_hoa;
		}
		~ SinhVien() { }
		double DiemTrungBinh()
		{
			return (diem_toan + diem_ly + diem_hoa)/ 3.0;
		}
		
		void InThongTin()
		{
			cout<<"\n Ho ten sinh vien: "	<<ho_ten	<<endl;
			cout<<"Ma sinh vien: "		<<ma	<<endl;
			cout<<"Gioi tinh: "		<<gioi_tinh	<<endl;
			cout<<"Diem Toan: "		<<diem_toan	<<endl;
			cout<<"Diem Ly: "		<<diem_ly	<<endl;
			cout<<"Diem Hoa: "		<<diem_hoa	<<endl;
			cout<<"Diem trung binh: "		<<DiemTrungBinh()	<<endl	<<endl;
		}
};

int main()//nhap so luong sinh vien ko roi han 
{
	SinhVien sv[20];
	int n;
	cout<<"\n Nhap so luong sinh vien n = ";
	cin>>n;
	
	cout<<"NHAP THONG TIN CHO SINH VIEN:"	<<endl;
	for(int i = 0; i < n; i++)
		sv[i].NhapThongTin();cin.ignore();
	cout<<endl	<<endl;
	
	cout<<"*************************************"	<<endl;
	cout<<"THONG TIN VE SINH VIEN VUA NHAP:"	<<endl;
	for(int i = 0; i < n; i++)
		sv[i].InThongTin();
	
	return 0;
}


