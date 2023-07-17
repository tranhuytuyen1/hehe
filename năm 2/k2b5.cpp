#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
// OTO: L?p xe OTO, d?nh nghia thông tin v? m?t xe OTO.
class OTO
{
public:
    int maHang;            // maHang: Mã hàng, d?nh nghia m?t s? nguyên dùng d? xác d?nh hàng hóa.
    string tenHangSanXuat; // tenHangSanXuat: Tên hãng s?n xu?t, d?nh nghia tên c?a hãng s?n xu?t c?a hàng hóa.
    float donGia;          // donGia: Ðon giá, d?nh nghia giá c?a m?t s?n ph?m.
    float dungTichXilanh;  // dungTichXilanh: Dung tích xy lanh, d?nh nghia dung tích c?a xy lanh c?a m?t xe
    float trongLuong;

    OTO(int ma = 0, string ten = "", float dg = 0, float dtx = 0, float tl = 0) : maHang(ma), tenHangSanXuat(ten), donGia(dg), dungTichXilanh(dtx), trongLuong(tl) {}
    ~OTO() {}

    friend istream &operator>>(istream &in, OTO &x);
    int tinhTienVanChuyen();

    bool operator==(float x);
    friend bool operator<(const OTO &x, const OTO &y);
};
// operator>>: Toán t? nh?p, cho phép nh?p thông tin v? m?t xe OTO t? m?t lu?ng nh?p.
istream &operator>>(istream &in, OTO &x)
{
    cout << "Nhap ma hang: ";
    in >> x.maHang;
    cout << "Nhap ten hang san xuat: ";
    in >> x.tenHangSanXuat;
    cout << "Nhap don gia: ";
    in >> x.donGia;
    cout << "Nhap dung tich xilanh: ";
    in >> x.dungTichXilanh;
    cout << "Nhap trong luong: ";
    in >> x.trongLuong;
    return in;
}
// tinhTienVanChuyen: Hàm tính ti?n v?n chuy?n, tính ti?n v?n chuy?n c?a m?t xe d?a trên tr?ng lu?ng c?a nó.
int OTO::tinhTienVanChuyen()
{
    if (trongLuong > 2)
        return 100000;
    else if (trongLuong > 1)
        return 50000;
    else
        return 30000;
}
// operator==: Toán t? b?ng, so sánh dung tích xy lanh c?a m?t xe v?i m?t s? nguyên cho tru?c.
bool OTO::operator==(float x)
{
    return dungTichXilanh == x;
}
// operator<: Toán t? nh? hon, so sánh dung tích xy lanh c?a hai xe.
bool operator<(const OTO &x, const OTO &y)
{
    return x.dungTichXilanh < y.dungTichXilanh;
}
// isToyotaExist: Hàm ki?m tra s? t?n t?i c?a hãng Toyota, ki?m tra xem hãng Toyota có t?n t?i trong danh sách các xe hay không.
bool isToyotaExist(vector<OTO> &dsOTO)
{
    for (int i = 0; i < dsOTO.size(); i++)
    {
        if (dsOTO[i].tenHangSanXuat == "TOYOTA")
            return true;
    }
    return false;
}
int main()
{
    int n;
    cout << "Nhap so luong o to: ";
    cin >> n;
    vector<OTO> dsOTO;
    for (int i = 0; i < n; i++)
    {
        OTO x;
        cin >> x;
        dsOTO.push_back(x);
    }

    cout << "Danh sach o to co dung tich xilanh bang 2.5: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (dsOTO[i] == 2.5)
        {
            cout << dsOTO[i].maHang << " " << dsOTO[i].tenHangSanXuat << " " << dsOTO[i].donGia << " "
                 << dsOTO[i].dungTichXilanh << " " << dsOTO[i].trongLuong << endl;
        }
    }

    if (!isToyotaExist(dsOTO))
    {
        OTO oto;
        oto.tenHangSanXuat = "TOYOTA";
        dsOTO.insert(dsOTO.begin(), oto);
        cout << "Hang TOYOTA da duoc chen vao dau danh sach." << endl;
        string tenHang = "TOYOTA";
        bool coToyota = false;
        int viTri = -1;
        for (int i = 0; i < dsOTO.size(); i++)
        {
            if (dsOTO[i].tenHangSanXuat == tenHang)
            {
                coToyota = true;
                viTri = i;
                break;
            }
        }
        if (coToyota == false)
        {
            OTO x(0, tenHang, 0, 0, 0);
            dsOTO.insert(dsOTO.begin(), x);
            cout << "Hang TOYOTA chua co trong danh sach, da duoc chen vao dau danh sach." << endl;
        }
        else
        {
            dsOTO.erase(dsOTO.begin() + viTri);
            cout << "Hang TOYOTA da co trong danh sach, da xoa khoi danh sach." << endl;
        }
        return 0;
    }
}
