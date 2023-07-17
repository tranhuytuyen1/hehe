#include<iostream>
using namespace std;
class SinhVien{
	private:
		char Masv[10];
	    char Hoten[32];
	    float Diem;
	    char gt[3];
	    char hokhau[15];
	    public:
	    	SinhVien(){// ham khoi tao ko tham so 
			}
			SinhVien(Char *msv,char *ten){//ham khoi tao co tham so 
			   strcpy(this->Masv,msv);
			}
	    	
	    	void Nhap(){
	    		
			}
			void Xuat(){
				cout<<Masv<<end;
			}
};
int main(){
SinhVien sv;
sv.Xuat();
}

