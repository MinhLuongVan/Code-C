#include<stdio.h>
#include<iostream>
using namespace std;
 
int partition (int a[], int low, int high)
{
    int pivot = a[high];    
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && a[left] < pivot) left++;
        while(right >= left && a[right] > pivot) right--;
        if (left >= right) break;
        swap(a[left], a[right]);
        left++;
        right--;
    }
    swap(a[left], a[high]);
    return left;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
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
    int i;
    for (i=0; i < n; i++)
      cout << a[i]<< "\t";
}
 
 
int main()
{
   int a[100], n;
   nhapmang(a,n);
    quickSort(a, 0, n-1);
    cout << "\nMang sau khi sap xep la : \t ";
    xuatmang(a, n);
    return 0;
}
