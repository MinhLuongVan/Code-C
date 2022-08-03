#include<stdio.h>
#include<iostream>
using namespace std;
void NhapMang(int a[], int n)
{
	for(int i=0;i<n ;i++){
		cout <<"\nNhap phan tu thu "<<i<<" : ";
		cin >>a[i];
	}
}
void hienThi(int a[], int n)
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<" \t ";
	}
}
void selection_sort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
			   min = j;
		}
		if (min != i)
			swap(a[min], a[i]);
	}
}
int main(){
	int a[100],n;
	cout<<"Nhap n = ";
	cin>>n;
	NhapMang(a,n);
	selection_sort(a,n);
	cout<<"\nThuat toan sau khi sap xep la : ";
	hienThi(a,n);
}
