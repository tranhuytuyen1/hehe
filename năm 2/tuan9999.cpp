#include <iostream>
using namespace std;

// T?o c?u trúc node
struct Node
{
	int info;
	Node* prev;
	Node* next;
};

// T?o c?u trúc danh sách
struct LinkedList
{
	Node* head;
	Node* tail;
};

Node* CreateNode(int info);
void CreateList(LinkedList& list);
void InsertTail(LinkedList& list, Node* node);
void InputList(LinkedList& list, Node* node);
void PrintList(LinkedList list);
void CountNode(LinkedList& list);
void DeleteTailNode(LinkedList& list);
void DestroyList(LinkedList& list);


// T?o node m?i
Node* CreateNode(int info)
{
	Node* node = new Node;
	node->info = info;
	node->next = NULL;
	node->prev = NULL;
	return node;
}

// T?o danh sách
void CreateList(LinkedList& list)
{
	list.head = NULL;
	list.tail = NULL;
}

// Xóa toàn b? danh sách
void DestroyList(LinkedList& list)
{
	Node* node = list.tail;
	while (node != NULL)
	{
		DeleteTailNode(list);
		node = list.tail;
	}
	list.tail = NULL;
}

// 1.Nh?p các ph?n t? vào danh sách
void InputList(LinkedList& list, Node* node)
{
	int n, info;
	cout << "\nNhap so phan tu trong danh sach: "; cin >> n;
	cout << "Nhap danh sach: \n";
	for (int i = 0; i < n; i++)
	{
		cin >> info;
		node = CreateNode(info);
		InsertTail(list, node);
	}
}

// 2.In ph?n t? trong danh sách
void PrintList(LinkedList list)
{
	if (list.head == NULL)
	{
		cout << "\nKhong co phan tu trong danh sach";
	}
	else
	{
		Node* node = list.head;
		cout << "\nCac phan tu trong danh sach: ";
		while (node != NULL)
		{
			cout << node->info << " ";
			node = node->next;
		}
	}
}
// 3.Ð?m s? nút trong danh sách
void CountNode(LinkedList& list)
{
	int count = 0;
	if (list.head == NULL)
	{
		cout << "So nut trong danh sach: " << count;
	}
	else
	{
		Node* node = list.head;
		while (node != NULL)
		{
			node = node->next;
			count++;
		}
		cout << "So nut trong danh sach: " << count;
	}
}

// 4. B? sung 1 nút m?i v?i thông tin x vào cu?i danh sách
void InsertTail(LinkedList& list, Node* node)
{
	if (list.head == NULL)
	{
		list.head = node;
		list.tail = node;
	}
	else
	{
		node->prev = list.tail;
		list.tail->next = node;
		list.tail = node;
	}
}

// 5. Xóa nút cu?i trong danh sách
void DeleteTailNode(LinkedList& list)
{
	if (list.head == NULL)
	{
		cout << "Khong co phan tu de xoa";
	}
	else
	{
		if (list.head == list.tail)
		{
			delete list.head;
			list.head = NULL;
			list.tail = NULL;
		}
		else
		{
			Node* node = list.tail;
			list.tail = node->prev;
			list.tail->next = NULL;
			delete node;
		}
	}
}

// 6. S?p x?p danh sách theo th? t? gi?m d?n c?a tru?ng info
void Sort(LinkedList& list)
{
	Node* i = list.head;
	Node* j;
	Node* min;

	while (i != NULL)
	{
		min = i;
		j = i->next;
		while (j != NULL)
		{
			if (j->info > min->info) min = j;
			j = j->next;
		}
		swap(i->info, min->info);
		i = i->next;
	}
}

// Menu
void Menu()
{
	cout << "\n			  Menu\n";
	cout << "+-----------------------------------------------------------+\n";
	cout << "|1. Nhap vao mot danh sach                                  |\n";
	cout << "|2. Hien thi toan bo danh sach                              |\n";
	cout << "|3. Dem so nut cua danh sach                                |\n";
	cout << "|4. Bo sung mot nut moi voi thong tin x vao cuoi danh sach  |\n";
	cout << "|5. Xoa nut cuoi danh sach                                  |\n";
	cout << "|6. Sap xep danh sach theo thu tu giam dan cua truong info  |\n";
	cout << "|7. Thoat                                                   |\n";
	cout << "+-----------------------------------------------------------+\n";
}

int main()
{
	LinkedList list;
	CreateList(list);
	Node* node = new Node;

	while (true)
	{
		Menu();
		int choose;
		cout << "Nhap lua chon: "; cin >> choose;
		if (choose == 7) break;
		switch (choose)
		{
		case 1: 
			DestroyList(list);
			InputList(list, node);
			break;

		case 2: PrintList(list);
			break;

		case 3: CountNode(list);
			break;

		case 4: 
			int info;
			cout << "Nhap phan tu can bo sung: "; cin >> info;
			node = CreateNode(info);
			InsertTail(list, node);
			cout << "Da them phan tu vao cuoi danh sach !";
			break;

		case 5: DeleteTailNode(list);
			cout << "Da xoa phan tu cuoi trong danh sach !";
			break;

		case 6: Sort(list);
			cout << "Danh sach da sap xep giam dan !";
			break;

		default:
			cout << "Nhap sai, moi nhap lai";
			break;
		}
	}
	return 0;
}
