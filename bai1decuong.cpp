#include<bits/stdc++.h>

using namespace std;

int n = 6, a[6] = { 3,4,1,-2,8,-5};

void ChiaDeTri(){
		int best = INT_MIN, sum = 0, start =0, end = 0;
		for(int i =0; i<n; i++){
			if(sum + a[i]< a[i])
				start = i;
				sum = max(a[i], sum + a[i]);
			if(best < sum){
				end = i;
				best = max(best, sum);
			}
		} 
	cout<<"Day so co tong lon nhat bang "<<best<< " la: ";
	for(int i=start; i<=end; i++){
		cout<<a[i];
		if(i != end)
			cout<<" , ";
	}
}

void DuyetDayCon(){
	int best = INT_MIN, end = 0, start =0;
	for(int i=0; i<n; i++){
		int sum =0;
		for(int j = i; j<n; j++){
			sum = sum + a[j];
			best = max(best, sum);
			if(best == sum){
				end = j;
				start = i;
			}
		}
	}
	cout<<endl<<"Day so co tong lon nhat bang "<< best <<" la: ";
	for( int i = start; i<= end; i++){
		cout<<a[i];
		if(i != end ){
			cout<<" , ";
		}
	}
}

void QuyHoachDong(){
	
}

int main(){
	
	ChiaDeTri();
	DuyetDayCon();
}

