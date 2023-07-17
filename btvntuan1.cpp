#include <iostream>
#include<iomanip>
using namespace std;
struct NGAYTHANG{
	int ngay, thang, nam ;	
};
class SinhVien{
	private:
		char masv[10];
	    char hodem[20],ten[32];
	    float diem;
	    NGAYTHANG ns;
	    char gt[3];
	    char hokhau[15];
 
	public:
		void NhapThongTin (SinhVien sv[], int &n )
		{
		for(int i = 0; i < n; i++){
		cin.ignore();
     	cout<<"\nNhap thong tin sinh vien";
	    cout<<"\nMa sinh vien";
	    cin.getline(sv[i].masv,10);
	    cout << "\nNhap ho dem";
     	cin.getline(sv[i].hodem,20);
	    cout<<"\nNhap ten";
	    cin.getline(sv[i].ten,32);
	    cout<<"\nNhap ngay";
	    cin>>sv[i].ns.ngay;
	    cout<<"\nNhap thang";
	    cin>>sv[i].ns.thang;
	    cout<<"\nNhap nam";
	    cin>>sv[i].ns.nam;
	    cout<<"\nNhap diem thi";
	    cin>>sv[i].diem;
	    cin.ignore();
	    cout<<"\nNhap gioi tinh";
	    cin.getline(sv[i].gt,3);
	    cout<<"\nNhap ho khau";
	    cin.getline(sv[i].hokhau,15);
 	}
	}
	void InThongTin(SinhVien sv[], int&n){
		cout<<"+"	<<setfill('-')	<<setw(105)	<<"+";
		cout<<setfill(' ')	<<endl;
		cout<<left;
	for(int i=0; i<n; i++){
		cout<<"| "	<< setw(30) << sv[i].masv;
		cout<<"| "	<<setw(30) <<sv[i].hodem;
		cout<<"| "	<<setw(30) <<sv[i].ten;
		cout<<"| "	<<setw(10) <<sv[i].ns.ngay;
		cout<<"| "	<<setw(10) <<sv[i].ns.thang;
		cout<<right;
		cout<<"| "	<<setw(10) <<sv[i].ns.nam;
		cout<<"| "	<<setw(10) <<sv[i].diem;
		cout<<"| "	<<setw(10) <<sv[i].gt;
		cout<<"| "	<<setw(10) <<sv[i].hokhau;
	}
	cout<<"+"	<<setfill('-')	<<setw(105)	<<"+";
			cout<<setfill(' ')	<<endl;
}
    void TieuDe(){
    	cout<<"+"	<<setfill('-')	<<setw(105)	<<"+";
			cout<<setfill(' ')	<<endl;
			
			cout<<left;
			cout<<"| "	<<setw(30)	<<"MA SV";
			cout<<"| "	<<setw(30)	<<"TEN DEM";
			cout<<"| "	<<setw(30)	<<" TEN";
			cout<<"| "	<<setw(10)	<<"NGAY";
			cout<<"| "	<<setw(10)	<<"THANG";
			cout<<"| "	<<setw(10)	<<"NAM";
			cout<<"| "	<<setw(10)	<<"GIOI TINH";
			
			cout<<right;
			cout<<"| "	<<setw(10)	<<"DIEM ";
			cout<<"| "	<<setw(10)	<<"HO KHAU"<<endl;
			cout<<"+"	<<setfill('-')	<<setw(105)	<<"+";
			cout<<setfill(' ')	<<endl;
		}
};
int main(){
	int n;
	cout<<"** NHAP SO LUONG SINH VIEN **"<<endl;
	cin>>n;
	cout<<"******************************************"	<<endl;
	cout<<"*** NHAP THONG TIN CHO SINH VIEN ***"	<<endl;
	SinhVien sv[n];
	sv.InThongTin(sv,n);
	cout << endl << endl;
	sv.TieuDe();
	cout<<"******************************************"	<<endl;	
	cout<<"*** THONG TIN VE SINH VIEN VUA NHAP ***"	<<endl;
	sv.InThongTin(sv,n);
	return 0;
}


