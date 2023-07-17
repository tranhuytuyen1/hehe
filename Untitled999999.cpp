#include <iostream>
using namespace std;
struct Node
{
    float info;
    Node *next;//kieu node de chua dia chi phia sau 
    Node *prev;// kieu node de chua dia chi phia trc 
};
typedef struct Node NODE;//
struct doulist
{
    NODE *pHead;//  luu tru dia chi phan tu dau danh sách
    NODE *pTail;//   pt cuoi ds
};
typedef struct doulist DANHSACH;// ngan goi de vc khai vao 1 danh sach lien key doi 	
void KhoiTao(DANHSACH &ds)
{
    ds.pHead = NULL;// dat dia chi dau 
    ds.pTail = NULL;//dat dia chi cuoi 
}
NODE* TaoNode(float x) 
{
    NODE *p; // tao con tro p tu cau truc node
    p = new NODE;
    if (p==NULL) 
	{
        cout << "KHONG DU BO NHO";
        return NULL;
    }
    p->info=x;
    p->next=NULL;
    p->prev = NULL;
    return p;
}
void ThemDau(DANHSACH &ds, NODE *p) 
{
    if (ds.pHead == NULL)
	{
        ds.pHead = ds.pTail = p;
    }
	else 
	{
        p->next = ds.pHead;
        ds.pHead->prev = p;
        ds.pHead = p;
    }
}
void ThemCuoi(DANHSACH &ds, NODE*p)
{
    if (ds.pHead == NULL)
	{
        ds.pHead = ds.pTail = p;
    }
	else
	{
        ds.pTail->next = p;
        p->prev = ds.pTail;
        ds.pTail = p;
    }
}
void Nhap(DANHSACH &ds, int n)
{
    for(int i = 0; i < n; i++)
	{
        float x;
        cout << "Nhap vao so "<<i+1 <<":";
        cin >> x;
        NODE *p = new NODE;
        p = TaoNode(x);
        ThemCuoi(ds,p);
    }
}
void Xuat(DANHSACH ds)
{
    NODE *p = new NODE;
    for(p = ds.pHead; p!= NULL; p=p->next)
	{
        cout << p->info << endl;
    }
}
void ThemNodeCuoiDanhSach(DANHSACH	&ds) 
{	
    NODE *p=new NODE;
	float x;
	cout <<"->Nhap gia tri can them la: ";
	cin >> x;
	p = TaoNode(x);
	ThemCuoi(ds,p);
	Xuat(ds);
	
}
void xoa(DANHSACH &ds){
	cout<<"xoa gtri dau tien"<<endl;
	NODE *p=new NODE;
	p=ds.pHead;
	ds.pHead=ds.pHead->next;
	delete p;
}
int demNode(DANHSACH &ds) {
    NODE *p;
    p = ds.pHead;
    int dem = 0;
    while (p != NULL) {
        dem++;
        p = p->next;
    }
    cout <<"\n->So nut la: " << dem << endl;
}
NODE *search_y(DANHSACH &ds, int y){
	NODE *p=new NODE;
    p=ds.pHead;
    while(p->info != y && p != NULL){
    	p=p->next;
    	if(p->info==y)  return p;
    }
    return NULL;
}
int main()
{
	DANHSACH ds;
	float n,x,y;
	ds.pHead;
	KhoiTao(ds);
		cout << "---------------DSLKD---------------\n";
		cout << "1. Nhap danh sach\n";
		cout << "2. In danh sach\n";
		cout << "3. Them nut vào cuoi danh sach\n";
		cout << "4. Xoa mot nut dau danh sach\n";
		cout << "5. Dem so nut cua danh sach\n";
		cout << "6. Tim nut co gia tri x trong danh sach\n";
		cout << "----------------------------------\n";
	while(1)
	{
		
		cout << " \nNhap lua chon :"; int lc; cin >> lc;
		cout << endl;
		if(lc == 1)
		{
			cout << " nhap n :";cin >> n;
			Nhap(ds,n);
		}
		else if(lc == 2)
		{
			cout<< "*** Danh sach vua nhap ***"<<endl;
			Xuat(ds);	
		}
		else if(lc == 3)
		{
			cout<< "*** them mot nut vao cuoi danh sach ***"<<endl;
			ThemNodeCuoiDanhSach(ds);
		}
		else if(lc == 4){
			cout<<"*** xoa mot nut dau danh sach ***"<<endl;
		 xoa(ds);
		 	Xuat(ds);
		}
		else if(lc == 5){
			demNode(ds);
			cout<<"*** dem so nut cua danh sach ***"<<endl;
			Xuat(ds);
		}
		else if(lc == 6)
		{
        cout <<"*** Tim nut co gia tri x trong danh sach ***"<<endl;
        cout<<"\nNhap gia tri x can tim ";
        cin>>y;
        cout<<"\nVi tri can tim la :"<<search_y(ds,y);
		}
		else
		{
			cout<<"\nYeu cau nhap lai ";
			break;
		}
 
	}
	return 0;
}
