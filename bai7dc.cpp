#include<iostream>
using namespace std;

void solve(){
	int n;

	cout<<"Nhap n: "; cin>>n;
	int s[n];
	int f[n];
	int a[n], b[n];
	cout<<"Nhap s - f: "<<endl;
	for(int i =0; i<n ; i++)
		cin>>s[i]>>f[i];
	
	for(int i =0; i<n-1; i++){
		for(int j =i +1; j<n; j++){
			if(f[i]>f[j]){
				int temp = s[i];
				s[i] = s[j];
				s[j] = temp;
				
				temp = f[i];
				f[i] = f[j];
				f[j] = temp;
			}
		}
	}
	
	a[0] = s[0];
	b[0] = f[0];
	int z = 1;
	int t = 0;
	while (z<n){
		if(s[z] >= b[t]){
			t++;
			a[t]=s[z];
			b[t] = f[z];
		}
		z++;
	}
	
	cout<<"\n----KET QUA----";
	cout<<"\nSo cong viec: "<<t+1;
	cout<<"\nS: ";
	for(int x=0; x<=t; x++)
		cout<<a[x]<<" ";
	cout<<"\nF: ";
	for(int z =0; z<=t; z++)
		cout<<b[z]<<" ";
}
int main(){
	solve();
	return 0;
}
