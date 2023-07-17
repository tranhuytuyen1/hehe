#include<iostream>
using namespace std;

class ISP {
protected:
	int kt;
public:
	virtual void nhap() {}
	virtual void xuat() {}
	virtual long tinhTien() = 0;
	int getKT() {
		return kt;
	}

	void setKT(int kt) {
		this->kt = kt;
	}
};

class DialUp: public ISP {
private:
	int thoi_gian;
public:
	DialUp() {}
	DialUp(int thoi_gian): ISP() {
		this->thoi_gian = thoi_gian;
	}
	~DialUp() {}
	void nhap() {
		cout << "\nThoi gian su dung: ";
		cin >> thoi_gian;
	}
	long tinhTien() {
		return 30000 + 30*thoi_gian;
	}
};

class ADSL: public ISP {
private:
	float dung_luong;
public:
	ADSL() {}
	ADSL(float dung_luong): ISP() {
		this->dung_luong = dung_luong;
	}
	~ADSL() {}
	void nhap() {
		cout << "\nDung luong: ";
		cin >> dung_luong;
	}
	void xuat() {
		cout << "\nDung luong: " << dung_luong;
		cout << "\nTien goi cuoc: " << tinhTien() << endl;
	}
	long tinhTien() {
		return (long) 50000 + 50*dung_luong;
	}
};

class T1: public ISP {
public:
	T1() {}
	~T1() {}
	long tinhTien() {
		return 2000000;
	}
};


void tinhTienTungLoai(vector<ISP *> ds) {
	long S1 = 0, S2 = 0, S3 = 0;
	for(int i = 0; i < ds.size(); ++i) {
		if(ds[i]->getKT() == 0)
			S1 += ds[i]->tinhTien();
			
		else if(ds[i]->getKT() == 1)
			S2 += ds[i]->tinhTien();
			
		else if(ds[i]->getKT() == 2) {
			S3 += ds[i]->tinhTien();
		}
	}
	cout << "\nTong tien cuoc cua Dial Up la: " << S1;
	cout << "\nTong tien cuoc cua ADSL la: " << S2;
	cout << "\nTong tien cuoc cua T1 la: " << S3 << endl;
}

long tinhTongTien(vector<ISP *> ds) {
	long S = 0;
	for(int i = 0; i < ds.size(); ++i) {
		S += ds[i]->tinhTien();
	}
	return S;
}

void timADSL(vector<ISP *> ds) {
	int dem = 0, temp;
	for(int i = 0; i < ds.size(); ++i) {
		if(ds[i]->getKT() == 1) {
			dem++;
			temp = i;
			break;
		}
	}
	if(dem == 0) {
		cout << "\nKhong co thong tin can tim!!";
	}else {
		long max = ds[temp]->tinhTien();
		for(int i = 0; i < ds.size(); ++i) {
			if(ds[i]->getKT() == 1 and max < ds[i]->tinhTien()) {
				max = ds[i]->tinhTien();
				temp = i;
			}
		}
		cout << "\nThue bao ADSL tien cuoc lon nhat la: ";
		ds[temp]->xuat();
	}
}
void menu(vector<ISP *> ds) {
	int luachon = -1;
	do {
		system("cls");
		cout << "Menu:\n";
		cout << "1.Nhap Dial Up.\n";
		cout << "2.Nhap ADSL.\n";
		cout << "3.Nhap T1.\n";
		cout << "4.Tien cuoc cua tung loai thue bao.\n";
		cout << "5.Tien cuoc cua tat ca thue bao.\n";
		cout << "6.Tim thong tin thue bao ADSL max.\n";
		cout << "0.Thoat.\n";
		
		cout << "\nNhap lua chon: ";
		cin >> luachon;
		ISP *x;
		switch(luachon) {
			case 1: cout << "Nhap thong tin Dial Up:";
					x = new DialUp;
					x->nhap();
					x->setKT(0);
					ds.push_back(x);
					break;
					
			case 2: cout << "Nhap thong tin ADSL:";
					x = new ADSL;
					x->nhap();
					x->setKT(1);
					ds.push_back(x);
					break;
					
			case 3: cout << "Nhap thong tin T1:";
					x = new T1;
					x->nhap();
					x->setKT(2);
					ds.push_back(x);
					break;
					
			case 4: tinhTienTungLoai(ds);
					system("pause");
					break;
			
			case 5: cout << "\nTong tien cua tat ca thue bao: ";
					cout << tinhTongTien(ds) << endl;
					system("pause");
					break;
					
			case 6: timADSL(ds);
					system("pause");
					break;
						
			case 0: break;
			
			default: cout << "\nYeu cua nhap lai!!\n";
					 system("pause");
					 break;
		}
	}while(luachon != 0);


