#include<iostream>
using namespace std;
	int dem =0;
	int n;
	int x[100];
	int a[100];
void inkq(){

	dem++;
	for(int j=0;j<n;j++)
	if(x[j]==1)
	cout <<a[j]<<"\t";
	cout<< endl;
}
void Xuly(int i){
	for(int j=0;j<=1;j++)
		{
		x[i] =j;
		if(i==n-1) inkq();
		else  Xuly(i+1);
	}
	
}
int main(){
	cout<<"\nNhap vao to hop:";
	cin >>n;
	for(int k=0;k<n;k++)
	cin >> a[k];
	cout<<endl;
	Xuly(0);
	return 0;
}
