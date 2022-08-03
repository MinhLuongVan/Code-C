#include<iostream> 
using namespace std; 
void merge(int a[], int l, int m, int r) 
{ 
    int n1 = m - l + 1; 
    int n2 = r - m;  
    int L[n1], R[n2]; 
    for(int i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for(int j = 0; j < n2; j++) 
        R[j] = a[m + 1 + j]; 
    int i = 0;   
    int j = 0;  
    int k = l; 
      
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j])  
        { 
            a[k] = L[i]; 
            i++; 
        } 
        else 
        { 
            a[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1)  
    { 
        a[k] = L[i]; 
        i++; 
        k++; 
    }  
    while (j < n2) 
    { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int a[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l + (r - l) / 2; 
        mergeSort(a, l, m); 
        mergeSort(a, m + 1, r); 
  
        merge(a, l, m, r); 
    } 
} 
void nhapmang(int a[], int &n){
	cout <<"\nNhap n:";
    cin>> n;
	for(int i=0;i<n;i++)
	{
	cout <<"\nNhap phan tu thu " << i<< " la :";
	cin >> a[i];
	}
}
void xuatmang(int a[], int n) 
{ 
    for(int i = 0; i < n; i++) 
        cout << a[i] << " \t "; 
} 

int main() 
{ 
    int a[100];
    int n;
    nhapmang(a,n);
    mergeSort(a, 0, n - 1); 
    cout << "\nMang sau khi sap xep la : \t"; 
    xuatmang(a, n); 
    return 0; 
} 
 
