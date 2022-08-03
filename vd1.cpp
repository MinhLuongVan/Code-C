#include<iostream>
using namespace std;
void nhapmang(int a[], int &n){
	cout << "\nNhap vao n:";
	cin >> n;
	for(int i=0;i<n;i++){
		cout << "\nNhap phan tu thu a["<<i<<"] :";
		cin >> a[i];
	}
}
void quicksort(int a[], int l, int r){
	int i = l;
	int j = r;
	int pivot = a[(l+r)/2];
	while(i<=j){
		while(a[i]<pivot)
		i++;
		while(a[j]> pivot)
		j--;
		if(i <=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if(l < j){
		quicksort(a,l,j);
	}
	if(i<r){
		quicksort(a,i,r);
		
	}
}
void xuatmang(int a[], int n){
	for(int i=0;i<n;i++)
	cout << a[i]<< "\t";
	cout << endl;
}
int main(){
	int a[100], n;
	nhapmang(a,n);
	quicksort(a,0,n-1);
	xuatmang(a,n);
}
	
	
