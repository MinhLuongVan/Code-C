#include<stdio.h>
#include<iostream>
using namespace std;
void NhapMang(int a[], int &n){
	cout <<"\nNhap vao n:";
	cin >> n;
	for(int  i =0;i<n;i++){
		cin>>a[i];
	}
}
void XuatMang(int a[], int n){
	for(int  i =0;i<n;i++){
	cout << a[i] <<"\t";
		
	}
}
void buble_sort(int a[], int n)
{
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--)
		if(a[j]<a[j-1])
			swap(a[j],a[j-1]);
	}
}
int main(){
	int a[100];
	int n;
	NhapMang(a,n);
	buble_sort(a,n);
	XuatMang(a,n);
}
