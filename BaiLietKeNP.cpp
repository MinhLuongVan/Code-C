#include<iostream>
#include<stdio.h>
using namespace std;
	int dem =0;
	int n;
	int x[100];
void inkq(){

	dem++;
	for(int j=0;j<n;j++)
	cout <<x[j]<<"\t";
	cout<< endl;
}
void Xuly(int i){
	for(int j=0;j<=1;j++){
		x[i] =j;
		if(i==n-1) inkq();
		else  Xuly(i+1);
	}
}
int main(){
	cout<<"\nNhap do dai day nhi phan:";
	cin >>n;
	cout<<endl;
	Xuly(0);
	return 0;
}
