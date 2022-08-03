#include<iostream>
#include<stdio.h>
using namespace std;
void NhapMang(int a[], int &n){
	cout <<"\nNhap vao n:";
	cin>>n;
	for(int i=0; i <n;i++)
	cin >> a[i];
}
int timkiem(int a[], int l, int r, int x){
	int mid = (l + r) / 2;
	if(a[mid]==x) return true;
	  if(a[mid] > x) return timkiem(a,l,mid-1,x);
	 	 else return timkiem(a,mid+1,r ,x);
	 return false;	 
}
void XuatMang(int a[], int n){
	for(int i=0; i<n;i++)
	cout <<a[i]<< " \t";
}
void SapXep(int a[], int n){
	for(int i=0; i<n-1;i++)
		for(int j =i+1; j<n;j++)
			if(a[i]>a[j])
			swap(a[i] , a[j]);		
}
int main(){
	int a[100];
	int n,x;
	NhapMang(a,n);
	SapXep(a,n);
	XuatMang(a,n);
	cout <<"\nNhap so x :";
	cin>>x;
	if(timkiem(a,0,n-1,x)) cout<< x << "co trong mang";
	else  cout <<x<<"khong co trong mang";
	return 0;
}
 
