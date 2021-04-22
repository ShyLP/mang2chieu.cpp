//1. Tính tổng cách phần tử lẻ nằm trên đường chéo chính và đường chéo phụ của mảng 2 chiều a[dong][cot]
#include <iostream>
#define MAX 50
using namespace std;
void nhap(int a[MAX][MAX], int cot, int dong);
void xuat(int a[MAX][MAX], int cot, int dong);
int tong(int a[MAX][MAX], int cot, int dong);
int main()
{
	int a[MAX][MAX];
	int cot = 3;int dong = 3;
	nhap(a, cot, dong);
	xuat(a, cot, dong);
	cout <<"\ntong so le tren duong cheo chinh va phu:"<< tong(a, cot, dong)<<endl;
	system("pause");
}
void nhap(int a[MAX][MAX], int cot, int dong) 
{
    cout << "\t\t-----------nhap-----------"<<endl;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << "Nhap pt a[" << i << "][" << j << "] :"; cin >> a[i][j];
		}
	}
}
void xuat(int a[MAX][MAX], int cot, int dong) 
{   cout << "\t\t-----------xuat-----------"<<endl;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << a[i][j]<<"   ";
		}
		cout << endl;
	}
}
int tong(int a[MAX][MAX], int cot, int dong) 
{
	int tong = 0;	
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (i == j)
			{
				if (a[i][j] % 2 != 0) 
				{
					tong += a[i][j];
				}
			}
			if (i+j+1 == dong)
			{
				if (a[i][j] % 2 !=0)
				{
				  tong += a[i][j];
				}

			}
		}
	}
	return tong;
}
