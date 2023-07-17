#include<iostream>
#include<string>
 using namespace std;
   class MayIn {
  protected:
            char Mac[25];
            int Sluong;
      MayIn(){}
      public:
      MayIn:: MayIn( char*s): Sluong(0){
          strcpy( Mac, s);
  }
 void Nhap( int sl){
 Sluong += sl;
 }
 void xuat(int sl){
      Sluong = (Sluong > sl) ? Sluong-sl : 0;
 } 
  void In(){
       cout<<" May In "<< Mac <<" ton "<< Sluong<<" chiec\n";
 }
};
class MayInLaser: public virtual MayIn {
  protected:
  int DPI;
  MayInLaser( int dpi):DPI(dpi){
 }
 public:
 MayInLaser(char*s,int dpi):MayIn(s),DPI(dpi){
 }
 void In(){
    cout<<" May in laser"<<Mac<<"("<<DPI<<"dpi) ton"<<Sluong<<"chiec\n";
 }
};
class MayInMau: public virtual MayIn
{
protected:
 int BangMau;
 MayInMau(int bm): BangMau(bm){
 }
public:
 MayInMau(char*s,int bm): MayIn(s), BangMau (bm){
 } 
void In()
{
cout<<"Mau in mau"<<Mac<<"("<<BangMau<<"bang mau) ton";
cout<<Sluong<<" chiec\n";
 }
};
class MayInLaserMau: public MayInLaser, public MayInMau
 {
public:
 MayInLaserMau(char*s, int dpi, int bm):
 MayIn(s),MayInLaser(dpi),MayInMau(bm) 
 { }
 void In()
 {
 cout<<" May in laser mau "<<Mac<<" ("<<DPI<<" dpi,"
 <<BangMau<<"bang mau) ton "<<Sluong<<" chiec\n";
 }
 };
int main() 
 {
 MayIn s1("Epson");
 MayInLaser s2("HP6",600);
 MayInMau s3("Apple",3);
 MayInLaserMau s4("Kodak",400,3);
 s1.Nhap(5);
 s2.Nhap(7);
 s1.xuat(2);
 s3.Nhap(2);
 s2.xuat(3);
 s4.Nhap(6);
 s1.In();
 s2.In();
 s3.In();
 s4.In();
 }
