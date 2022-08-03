#include<iostream>
using namespace std;

// Nhap mang hai chieu
void iparr(int arr[10][10], int &n){
	cout<<"Nhap so dinh: "; cin>>n;
	cout<<"Nhap do dai dinh (-1 cho khong co duong di): \n";
	for(int i =0; i<n; i++){
		for(int j =0; j<n; j++){
			cin>>arr[i][j];
		}
	}
}

// In mang hai chieu
void printarr(int a[10][10], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j] == -1)
				cout<<"-  ";
			else
				cout<<a[i][j]<<"  ";
		}
		cout<<"\n";
	}
}
// Ham tim do dai ngan nhat trong cac dinh
int minD(int D[], bool b[], int n){
	int vt, mind;
	for(int i =0; i<n; i++){  // Tim vi tri ban dau cho min
		if(b[i] && D[i] != -1 ){
			vt =  i;
			mind = D[i];
			break;
		}
	}
	
	for(int i =0; i <n; i++){
		if(b[i] && D[i] < mind && D[i] != -1){ // Neu b[i] chua xet va D[i] < mind
			vt=i;
			mind = D[i];
		}
	}
	
	return vt  +1; // Tra ve vi tri min theo so dinh ( 0 ->1)
	
}

// Ham tim duong di ngan nhat
void findway(int a[10][10], int n){
	int start, end; // Dinh dau va dinh dich
	cout<<"Start, end: "; cin>>start>>end;
	int temp = start;  // Luu dinh dau dung cho truy vet
	
	int D[n]; /// Mang luu do dai duong di
	int p[n]; // mang luu vet
	bool b[n]; // Mang kiem tra da xet chua
	
	for(int i =0; i<n; i++){  
		D[i]= a[start-1][i];	//  Luu do dai tu dinh bat dau
		b[i]= 1;               // Danh dau la chua xet
		p[i]= start;          // Dat vet ban dau la dinh bat dau
	}
	b[start-1] = 0; // Danh dau dinh bat dau da xet
	
	while(start != end){
		start = minD(D,b,n);
		b[start-1] = 0;
		for(int i=0; i<n; i++){
			if( (b[i] && D[i] > (a[start-1][i] + D[start-1]) && a[start-1][i] != (-1)) || (b[i] && D[i] ==-1  && a[start-1][i] != (-1)) ){
				D[i] = a[start-1][i] + D[start-1];
				p[i] = start;
			}
			
		}
	}

// Tim vet
	int vet[n]; 
	int j=0;
	vet[j] = end;
	
	while(vet[j]!= temp){ // Trong khi chua den dinh bat dau
		j++;
		vet[j]= p[vet[j-1]-1];
	}
	
	cout<<"\nP: "<<endl;
	for(int i=0; i<n; i++)
		cout<<" "<<p[i];	
		
	cout<<"\nDo dai duong di ngan nhat: "<<D[end-1]<<endl;
	cout<<"Vet: ";
	
	for(int t=j; t>0; t--)
		cout<<vet[t]<<" --> ";
	cout<<vet[0];
	
}

void solve(){
	int a[10][10];
	int n;
	iparr(a,n);
	cout<<"\n";
	findway(a,n);
//	printarr(a,n);
}
int main(){
	solve();
	return 0;  // Vi ham main tra ve kieu int nen co dong nay
}
