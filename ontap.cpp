#include<iostream>
using namespace std;
int a[100];
int n,k;
void xuat(){
	for(int i=1;i<=k;i++)
		cout <<a[i]<<" \t";
	cout <<endl;
}
void tohop(int i){
	for(int j = a[i-1]+1; j <= n-k+i;j++){
		a[i] = j;
		if(i==k) xuat();
		else tohop(i+1);
	}
}
int main(){
	
	cout <<"\nNhap vao so n:";
	cin >> n;
	cout <<"\nNhap vao so k:";
	cin >> k;
	tohop(1);
	
}



