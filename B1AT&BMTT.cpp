#include <iostream>

using namespace std;
int TimRoSo(string BangChuCai, char Chuoi) {
 int temp = 0;
 for (int i = 0; i < BangChuCai.length(); i++) {
  if (BangChuCai[i] == Chuoi) {
   temp = i;
   break;
  }
 }
 return temp;
}

string TimMaChu(string BangChuCai, string Chuoi, int k){
 string MaChu = "";
 int MaSo;
 for (int i = 0; i < Chuoi.length(); i++) { 
  MaSo = TimRoSo(BangChuCai, Chuoi[i]); 
  int temp = (MaSo + k) % 26; 
  MaChu += BangChuCai[temp]; 
 }
 return MaChu;
}

string TimGiaiMa(string BangChuCai, string Chuoi, int k){
 string GiaiMa = "";
 int MaSo;
 for (int i = 0; i < Chuoi.length(); i++) {
  MaSo = TimRoSo(BangChuCai, Chuoi[i]);
  MaSo -= k;
  if (MaSo < 0) {
   int temp = 26 + MaSo;
   MaSo = temp;
  }
  GiaiMa += BangChuCai[MaSo];
 }
 return GiaiMa;
}
int main(){
 string BangChuCai = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
 string Chuoi;
 int k;
 int chon;
 do
 {
  
  cout << "1. Ma hoa. " << endl;
  cout << "2. Giai ma. " << endl;
  cout << "Chon: ";
  cin >> chon;
  switch (chon)
  {
  case 1: {
   cin.ignore();
   cout << "Nhap chuoi: ";
   getline(cin, Chuoi);
   cout << "Nhap khoa: ";
   cin >> k;
   cout << TimMaChu(BangChuCai, Chuoi, k) << endl;
   system("pause");
   break;
  }
  case 2: {
   cin.ignore();
   cout << "Nhap chuoi: ";
   getline(cin, Chuoi);
   cout << "Nhap khoa: ";
   cin >> k;
   cout << TimGiaiMa(BangChuCai, Chuoi, k) << endl;
   system("pause");
   break;
  }
  }
 } while (chon != 0);
 return 0;
}
