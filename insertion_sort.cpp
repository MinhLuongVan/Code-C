#include<stdio.h>
#include<iostream>
using namespace std;
void NhapMang(int a[], int n)
{
	for(int i=0;i<n ;i++){
		cin >>a[i];
	}
}
void hienThi(int a[], int n)
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void insertion_sort(int a[],int n){
	for(int i=1;i<n;i++){
		int x = a[i];
		int pos = i;
		while(pos >0 && a[pos -1 ] >x)
		{
			a[pos] = a[pos-1];
				pos--;
		}
		a[pos]=x;
	}
}
int main(){
	int a[100],n;
	cout<<"Nhap n = ";
	cin>>n;
	NhapMang(a,n);
	insertion_sort(a,n);
	cout<<"\nThuat toan sau khi sap xep la : ";
	hienThi(a,n);
}
