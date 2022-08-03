#include <iostream>

using namespace std;
int TimSo(string BangChuCai, char Chuoi) {
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
  MaSo = TimSo(BangChuCai, Chuoi[i]); 
  int temp = (MaSo + k) % 26; 
  MaChu += BangChuCai[temp]; 
 }
 return MaChu;
}

string TimGiaiMa(string BangChuCai, string Chuoi, int k){
 string GiaiMa = "";
 int MaSo;
 for (int i = 0; i < Chuoi.length(); i++) {
  MaSo = TimSo(BangChuCai, Chuoi[i]);
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
 	string BangChuCai = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
 	string Chuoi;
 	int k;
 	cout << "Nhap chuoi: ";
    getline(cin, Chuoi);
    cout << "Nhap khoa k <=26 : ";
    cin >> k;
    cout << "Ma hoa :";
    cout << TimMaChu(BangChuCai, Chuoi, k) << endl;
    cout << "Giai ma :";
    cout << TimGiaiMa(BangChuCai, Chuoi, k) << endl;
}
