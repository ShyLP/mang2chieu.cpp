// Tìm giá trị trong mảng các phần tử phân biệt xa giá trị x nhất (x nhập từ bàn phím)
#include<iostream>
using namespace std;
#define MAX 100
#include<math.h>
void nhapmang(int a[], int &n);
void xuatmang(int a[], int n);
int x_xa_nhat(int a[], int n, int x);
int main()
{
  int a[MAX];
	int n; 
	cout << "Nhap so luong phan tu mang a: ";
	cin >> n;
	cout << "\nNhap mang\n";
	nhapmang(a, n);
	cout << "\nXuat mang\n";
	xuatmang(a, n);
	int x;
	cout << "\nNhap gia tri x: ";
	cin >> x;
	cout << "\nPhan tu xa nhat la: " << x_xa_nhat(a, n, x);
	system("pause");
	return 0;    
}
void nhapmang(int a[], int&n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void xuatmang(int a[], int n)
{ 
	for (int i=0;i<n;i++)
	{
		cout << a[i] << "  ";
	}
}
int x_xa_nhat(int a[], int n, int x)
{
	int max = abs(a[0] - x); 
	int j = 0;
	for (int i = 1; i < n; i++)
	{
		if (max < abs(a[i] - x))
		{
			max = abs(a[i] - x);
			j = i;
		}
	}
	return a[j];
}
