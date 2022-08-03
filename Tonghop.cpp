#include<iostream>
using namespace std;
void heaply(int a[], int n, int i){
	int max =i;
	int l= 2*i+1;
	int r = 2*i+2;
	if(l<n && a[l] > a[max]) max =l;
	if(r<n && a[r] > a[max]) max =r;
	if(max!=i){
		swap(a[i], a[max]);
		heaply(a,n,max);
	}
}
void heapsort(int a[], int n){
	for(int i = n/2-1;i >=0; i--){
		heaply(a,n,i);
	}
	for(int i = n-1; i>0;i--){
		swap(a[0], a[i]);
		heaply(a,i,0);
	}
	
	
}
void Nhap(int a[], int &n){
	cout <<"\nNhap n:";
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void Xuat(int a[], int n){
	for(int i=0;i<n;i++){
		cout << a[i] <<"\t";
	}
}


int main(){
	int a[100],n;
	Nhap(a,n);
	heapsort(a,n);
	Xuat(a,n);
	
}
