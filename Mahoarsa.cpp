
#include <cstring>
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int mod(int m, int e, int n);
char Ten[50];
int M[50];
int C[50];
void NhapTen();
int e=7, n=187, d =23;
 
int _tmain(int argc, TCHAR* argv[])
{
    /*cout<<"Ho ten: Nguyen Dinh Vuong\n";
    cout<<"Lop: Tin 2c\n";
    cout<<"MSSV: K35.103.079\n";*/
    cout<<"Ma hoa RSA\n\n\n";
    cout<<"Khoa cong khai: <"<<e<<","<<n<<">\n";
    cout<<"Khoa bi mat: <"<<d<<",17,11>\n\n";
    NhapTen();
    _getch();
    return 0;
}
void NhapTen()
{  
    cout<<"Nhap vao chuoi can ma hoa: ";
    cin.getline(Ten,50);// NHAP CHUOI CO CHUA KHOANG TRANG
    for(int i=0; Ten[i]!='\0';i++)
    {
        M[i] = Ten[i];
        //cout<<"Ma ASCII cua "<<Ten[i]<<" la"<<"  "<<M[i]<<endl;
        C[i] = mod(M[i],e,n); //C = M^e mod n
       
       
    }
 
 
    cout<<"========================================================\n";
    cout<<"\t\t\tPHAN MA HOA\n\n";
    cout<<"Ban ro\tMa ASCII\t  Cong Thuc \t\tBan ma\n\n";
    for(int i=0; Ten[i]!='\0';i++)
    {
            cout<<"  "<<Ten[i]<<"  \t   "<<M[i]<<"\t   C = "<<M[i]<<"^"<<e<<" mod "<<n<<" = "<<C[i]<<"\t  "<<char(C[i])<<endl;
    }
 
 
    cout<<"========================================================\n";
    cout<<"\t\t\tPHAN GIAI MA\n\n";
    cout<<"Ban ma\tMa ASCII\t  Cong Thuc \t\tBan ro\n\n";
    for(int i=0; Ten[i]!='\0';i++)
    {
        int m = mod(C[i],d,n); //m = C^d mod n
        cout<<"  "<<char(C[i])<<"\t   "<<C[i]<<"\t   M = "<<C[i]<<"^"<<d<<setw(5)<<"mod "<<n<<" = "<<m<<"\t   "<<Ten[i]<<endl;
    }
   
   
}
int mod(int m, int e, int n) // Thuat toan binh phuong nhan
{
    int a[100];
    int k = 0;
    do
    {
        a[k] = e % 2;
        k++;
        e = e / 2;
    }
    while (e != 0);
 
    //Qua trinh lay du
    int kq = 1;
    for (int i = k - 1; i >= 0; i--)
    {
        kq = (kq * kq) % n;
        if (a[i] == 1)
            kq = (kq * m) % n;
    }
    return kq;
}
