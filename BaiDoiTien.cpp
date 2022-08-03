#include<bits/stdc++.h>
using namespace std;
void NhapMang(int a[], int &n){
	cout <<"\nNhap vao n:";
	cin>>n;
	for(int i=0; i <n;i++)
	cin >> a[i];
}
void XuatMang(int a[], int n){
	for(int i=0; i<n;i++)
	cout <<a[i]<< " \t";
}
void SapXep(int a[], int n){
	for(int i=0; i<n-1;i++)
		for(int j =i+1; j<n;j++)
			if(a[i]<a[j])
			swap(a[i] , a[j]);		
}
void DoiTien(int a[], int n, int M){
	int soto[100];
	int sum =0;
	int i=0;
	while( sum <= M && i <n){
		soto[i] = (M-sum) /a[i];
		if(sum+soto[i]*a[i] <=M){
			sum = sum+soto[i]*a[i];
		}
		i++;
		
	}
	if(sum == M){
		cout <<"\nDoi duoc" <<endl;
		XuatMang(soto,n);
	}
	else{
		cout <<"\nKhong doi duoc";
	}
}
int main(){
	int a[100] , n, M;
	NhapMang(a,n);
	SapXep(a,n);
	cout <<"\nMang sau khi sap xep la: \t";
	XuatMang(a,n);
	cout <<"\nNhap so tien can doi:";
	cin >>M;
	DoiTien(a,n,M);
	return 0;
}
