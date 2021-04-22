// Tính trung bình cộng các số lẻ ở vị trí chẵn
#include<iostream>
using namespace std;
void nhapmang(int a[], int &n);
void xuatmang(int a[], int n);
float tbc(int a[], int n);
int main()
{
    int a[100];
    int n;
    nhapmang(a,n);
    xuatmang(a,n);
    float kq=tbc(a,n);
    cout<<"trung binh cong so le o vi tri chan =  "<<kq<<endl;    
}
void nhapmang(int a[], int&n)
{
    cout<<"nhap so phan tu :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void xuatmang(int a[], int n)
{ 
    cout<<"xuat"<<endl;
	for (int i=0;i<n;i++)
	{
		cout << a[i] << "  ";
	}
}
float tbc(int a[], int n)
{
    int s=0;
    int dem=0;
        for(int i=2;i<n;i++)
        {
            if(i%2==0)
            { 
                if(a[i]%2!=0)
                {
                    s=s+a[i];
                    dem++;
                }
            }
        }
        return s/dem;
}
