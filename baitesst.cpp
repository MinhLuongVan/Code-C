#include<iostream>
using namespace std;
void xaucon(string a, string b){
	int n = a.size();
	int m = b.size();
	int L[n+1][m+1];
	for(int i=0;i<=n;i++)
	for(int j=0;j<=m;j++){
		if(i==0 || j==0) L[i][j] =0;
		else{
			if(a[i-1]==b[j-1]) L[i][j] = L[i-1][j-1]+1;
			else{
				if(L[i-1][j] > L[i][j-1]) 
				L[i][j] = L[i-1][j];
				else
				L[i][j] = L[i][j-1];
			}
		}
	}
	int max = L[n][m];
	string kq = "";
	int i =n;
	int j =m;
	while(L[i][j] !=0){
		if(a[i-1]==b[j-1]){
			kq  += a[i-1];
			i--;
			j--;
		}else{
			if(L[i-1][j] > L[i][j-1])
			{
			i--;}
			else
			j--;
		}
	}
	cout <<"\nDo dai xau con chung la : "<<max;
	cout <<"\nXau chung la :";
	for(int k = max-1;k>=0;k--)
	cout << kq[k];
}
int main(){
	string a,b;
	cout <<"\nNhap vao xau a : ";
	cin >> a;
	cout <<"\nNhap vao xau b : ";
	cin >> b;
	xaucon(a,b);
	
}
