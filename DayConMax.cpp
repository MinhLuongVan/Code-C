#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
void NhapMang(int a[], int &n){
	cout << "\nNhap vao n:";
	cin >> n;
	for(int i=0;i<n;i++){
		cout <<"\nNhap phan tu thu a["<<i<<"] :";
		cin >> a[i];
	}
}
/*void XuatMang(int a[], int n){
	for(int i=0;i<n;i++){
		cout << a[i] << "\t";
	}
}*/
void DayConMax(int a[], int n){
	int l[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j)
			l[i][j]=a[i];
			else if(i<j) l[i][j]=l[i][j-1]+a[j];
			else l[i][j] = 0;	
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << l[i][j] << "\t";
		}
		cout <<"\n";
	}
	int max=l[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(l[i][j]>max)
			max=l[i][j];
		}
	}
	cout << "\nDay on lon nhat la:" << max;
	int x,y;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(l[i][j]==max)
			y=j;
		}
	}
	cout <<"\n";
	for(int i=0;i<=y;i++){
		cout << a[i] << " \t ";
	}
}
int main(){
	int a[100];
	int n;
	NhapMang(a,n);
	DayConMax(a,n);
	//XuatMang(a,n);
}
	

