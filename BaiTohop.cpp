#include<iostream>
using namespace std;
void tohop(int a[100][100], int k,int n){
	for(int i=0;i<=n;i++)
		for(int j=0;j<=i;j++){
			if(i==j||j==0)
				a[i][j] = 1;
			else 
				{
				a[i][j] = a[i-1][j-1] + a[i-1][j];
				}	
		}
			cout <<"\nTo hop chap " << k << "cua" << n << " la : " <<a[n][k];
}
int main(){
	int a[100][100];
	int k,n;
	cout <<"\nNhap k:"; cin >>k;
	cout <<"\nNhap n:" ; cin >>n;
	tohop(a,k,n);
}
