#include<bits/stdc++.h>
using namespace std;
static int a = 9;
static int b = 8;
string mahoa(string m) {

   string c = "";
   for (int i = 0; i < m.length(); i++) {
   
      if(m[i]!=' ')
       
         c = c + (char) ((((a * (m[i]-'A') ) + b) % 26) + 'A');
      else

         c += m[i];
   }
   return c;
}
string giaima(string c) {
   string m = "";
   int a_inverse = 0;
   int flag = 0;
   
   for (int i = 0; i < 26; i++) {
      flag = (a * i) % 26;
     
      if (flag == 1) {
         a_inverse = i;
      }
   }
   for (int i = 0; i < c.length(); i++) {
      if(c[i] != ' ')
        
         m = m + (char) (((a_inverse * ((c[i]+'A' - b)) % 26)) + 'A');
      else
         
         m += c[i];
   }
   return m;
}
int main(void) {
	string s;
   cout<<" nhap ma ban dau :";
   cin>>s; 
   string c = giaima(s);
   cout << "ma hoa : " << c<<endl;
   cout << "giai ma : " << giaima(c);
   return 0;
}
