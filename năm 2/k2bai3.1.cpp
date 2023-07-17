#include <iostream>
using namespace std;

class PS {
  private:
    int tuSo, mauSo;
  
  public:
 
    PS(int tuSo = 0, int mauSo = 1) {
        this->tuSo = tuSo;
        this->mauSo = mauSo;
    }
    
    ~PS() { }
    
    friend istream& operator >> (istream &is, PS &ps) {
        is >> ps.tuSo >> ps.mauSo;
        return is;
    }
    friend ostream& operator << (ostream &os, PS ps) {
        os << ps.tuSo << "/" << ps.mauSo;
        return os;
    }
friend PS operator + (PS a, PS b) {
        PS c;
        c.tuSo = a.tuSo * b.mauSo + b.tuSo * a.mauSo;
        c.mauSo = a.mauSo * b.mauSo;
        return c;
    }
    friend PS operator - (PS a, PS b) {
        PS c;
        c.tuSo = a.tuSo * b.mauSo - b.tuSo * a.mauSo;
        c.mauSo = a.mauSo * b.mauSo;
        return c;
    }    
    friend PS operator * (PS a, PS b) {
        PS c;
        c.tuSo = a.tuSo * b.tuSo;
        c.mauSo = a.mauSo * b.mauSo;
        return c;
    }
    friend
friend PS operator / (PS a, PS b) {
        PS c;
        c.tuSo = a.tuSo * b.mauSo;
        c.mauSo = a.mauSo * b.tuSo;
        return c;
    }
};
int main() {
    PS a, b, c;
    cout << "Nhap phan so a: ";
    cin >> a;
    cout << "Nhap phan so b: ";
    cin >> b;
    cout << endl;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << endl;
    
    c = a + b;
    cout << "Tong cua a va b la: " << c << endl;
c = a - b;
    cout << "Hieu cua a va b la: " << c << endl;
    
    c = a * b;
    cout << "Tich cua a va b la: " << c << endl;
    
    c = a / b;
    cout << "Thuong cua a va b la: " << c << endl;
    return 0;
}
