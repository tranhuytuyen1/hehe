#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
// OTO: L?p xe OTO, d?nh nghia th�ng tin v? m?t xe OTO.
class OTO
{
public:
    int maHang;            // maHang: M� h�ng, d?nh nghia m?t s? nguy�n d�ng d? x�c d?nh h�ng h�a.
    string tenHangSanXuat; // tenHangSanXuat: T�n h�ng s?n xu?t, d?nh nghia t�n c?a h�ng s?n xu?t c?a h�ng h�a.
    float donGia;          // donGia: �on gi�, d?nh nghia gi� c?a m?t s?n ph?m.
    float dungTichXilanh;  // dungTichXilanh: Dung t�ch xy lanh, d?nh nghia dung t�ch c?a xy lanh c?a m?t xe
    float trongLuong;

    OTO(int ma = 0, string ten = "", float dg = 0, float dtx = 0, float tl = 0) : maHang(ma), tenHangSanXuat(ten), donGia(dg), dungTichXilanh(dtx), trongLuong(tl) {}
    ~OTO() {}

    friend istream &operator>>(istream &in, OTO &x);
    int tinhTienVanChuyen();

    bool operator==(float x);
    friend bool operator<(const OTO &x, const OTO &y);
};
// operator>>: To�n t? nh?p, cho ph�p nh?p th�ng tin v? m?t xe OTO t? m?t lu?ng nh?p.
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
// tinhTienVanChuyen: H�m t�nh ti?n v?n chuy?n, t�nh ti?n v?n chuy?n c?a m?t xe d?a tr�n tr?ng lu?ng c?a n�.
int OTO::tinhTienVanChuyen()
{
    if (trongLuong > 2)
        return 100000;
    else if (trongLuong > 1)
        return 50000;
    else
        return 30000;
}
// operator==: To�n t? b?ng, so s�nh dung t�ch xy lanh c?a m?t xe v?i m?t s? nguy�n cho tru?c.
bool OTO::operator==(float x)
{
    return dungTichXilanh == x;
}
// operator<: To�n t? nh? hon, so s�nh dung t�ch xy lanh c?a hai xe.
bool operator<(const OTO &x, const OTO &y)
{
    return x.dungTichXilanh < y.dungTichXilanh;
}
// isToyotaExist: H�m ki?m tra s? t?n t?i c?a h�ng Toyota, ki?m tra xem h�ng Toyota c� t?n t?i trong danh s�ch c�c xe hay kh�ng.
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
