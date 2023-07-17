#include<iostream>
using namespace std;

class SinhVien
{
	private:
		string ho_ten;
		int nam_sinh;
		string gioi_tinh;
		int diem_toan;
		int diem_ly;
		int diem_hoa;
	
	public:
		void NhapThongTin()
		{
			cin.ignore();
			cout<<"\n Nhap ten: ";	getline(cin, ho_ten);
			cout<<"\n Nhap nam sinh: ";		cin>>nam_sinh;
			cin.ignore();
			cout<<"\n Nhap gioi tinh: ";	getline(cin, gioi_tinh);
			cout<<"\n Nhap diem Toan: ";	cin>>diem_toan;
			cout<<"\n Nhap diem Ly: ";		cin>>diem_ly;
			cout<<"\n Nhap diem Hoa: ";		cin>>diem_hoa;
		}
		
		double DiemTrungBinh()
		{
			return (diem_toan + diem_ly + diem_hoa)/ 3.0;
		}
		
		void InThongTin()
		{
			cout<<"\n Ho ten sinh vien: "	<<ho_ten	<<endl;
			cout<<"Nam sinh: "		<<nam_sinh	<<endl;
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
		sv[i].NhapThongTin();
	cout<<endl	<<endl;
	
	cout<<"*************************************"	<<endl;
	cout<<"THONG TIN VE SINH VIEN VUA NHAP:"	<<endl;
	for(int i = 0; i < n; i++)
		sv[i].InThongTin();
	
	return 0;
}


