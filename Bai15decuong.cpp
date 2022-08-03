#include<stdio.h>
#include<iostream>
using namespace std;
void NhapMang(int a[], int n){
	for(int i=0;i<n;i++){
	cout << "Nhap vao phan tu a[" << i+1 << "] : ";
	cin >> a[i];
	}
}

void SapXep(int a[], int n){
	for(int i=0; i<n-1;i++)
		for(int j =i+1; j<n;j++)
			if(a[i]>a[j])
			swap(a[i] , a[j]);		
}
void ToiDa(int a[], int n, int l1, int l2){
	SapXep(a,n);
	int i=0;
	while(i<n && l1 >=a[i]){
		l1=l1-a[i];
		cout<<"\nBang nho 1 luu duoc chuong trinh "<<i+1<<" co dung luong "<<a[i];
		i++;
	}
	while(i<n && l2 >=a[i]){
		l2=l2-a[i];
		cout<<"\nBang nho 2 luu duoc chuong trinh "<<i+1<<" co dung luong "<<a[i];
		i++;
	}
}
int main(){
	int a[100];
	int n,l1,l2;
	cout <<"\nNhap n:";
	cin >> n;
	NhapMang(a,n);
	cout <<"\nNhap do dai bang nho l1 = "; cin >>l1;
 	cout <<"\nNhap do dai bang nho l2 = "; cin >>l2;
	ToiDa(a,n,l1,l2);
}
	

