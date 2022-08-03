#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int pow(int x, int n){
	if(n==0) return 0;
	if(n==1) return x;
	if(n%2==0) return pow(x,n/2)*pow(x,n/2);
	else return x*pow(x,n-1);
}
int main(){
	int x,n;
	cout<<"\nNhap x: ";
	cin>> x;
	cout <<"\nNhap n:";
	cin >>n;
	cout <<"Ket qua cua " <<x<< " mu " <<n<< " la :" ;
	cout << pow(x,n);
}
	
