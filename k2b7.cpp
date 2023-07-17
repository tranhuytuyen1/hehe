#include <iostream>
#include <string>

using namespace std;

class mydate{
	public:
	int dd,mm,yy;
	public:
	mydate(){
		
	}
	~mydate(){
		
	}
	mydate(int dd,int mm,int yy)
	{
		this->dd=dd;
		this->mm=mm;
		this->yy=yy;
	}
	void Nhap(){
		cin.ignore();
		cout<<"Nhap dd: ";
		cin>>this->dd;
		cout<<"Nhap mm: ";
		cin>>this->mm;
		cout<<"Nhap yy: ";
		cin>>this->yy;
	}
	void Xuat(){
		cout<<"DD: "<<dd<<endl;
		cout<<"MM: "<<mm<<endl;
		cout<<"YY: "<<yy<<endl;
	}
};
class person : public mydate{
	private: 
	string namee, address;
	int sdt;
	public: 
	person(){
		
	}
	~person(){
		
	}
	person(int dd,int mm,int yy,string namee, string address,int sdt):mydate(dd,mm,yy)
	{
		this->namee=namee;
		this->address=address;
		this->sdt=sdt;
	}
	friend istream& operator >> (istream& is,person &p)
	{
		p.Nhap();
		fflush(stdin);
		cout<<"Nhap name: ";
		getline(is,p.namee);
		cout<<"Nhap address: ";
		getline(is,p.address);
		cout<<"Nhap phone: ";
		is>>p.sdt;
		return is;
	}
	bool operator > (person p)
	{
		return this->yy > p.yy;
	}

	friend ostream& operator << (ostream &os,person &p)
	{
		p.Xuat();
		os<<"Namee: "<<p.namee<<endl;
		os<<"Address: "<<p.address<<endl;
		os<<"Phone: "<<p.sdt<<endl;
		return os;
	}
};
void Nhap1(person p[],int n){
	for (int i=0;i<n;i++){
		cout<<"Nhap so nguoi thu: "<<i+1<<endl;
		cin>>p[i];
	}
}
void Xuat1(person p[],int n){
	for (int i=0;i<n;i++){
		cout<<p[i];
	}
}


int main(){
	int n;
	cout<<"Nhap so nguoi: ";
	cin>>n;
	person p[100];
	Nhap1(p,n);
	system("cls");
	cout<<"Ds person "<<endl;
	Xuat1(p,n);
	return 0;	
}


