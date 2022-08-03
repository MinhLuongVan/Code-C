#include<iostream>
#include<string.h>
 
using namespace std;
 
int main(){
    char s[] = "NGAYMAIGAPNHAU";
    char key[] = "HOAHUE";
    int n = strlen(s), m = strlen(key), i, j;
 
    char newKey[n], mahoa[n], giaima[n];
 
    for(i = 0, j = 0; i < n; ++i, ++j){
        if(j == m)
            j = 0;
 
        newKey[i] = key[j];
    }
 
    newKey[i] = '\0';
 
   
    for(i = 0; i < n; ++i)
       mahoa[i] = ((s[i] + newKey[i]) % 26) + 'A';
 
    mahoa[i] ='\0';

    for(i = 0; i <n; ++i)
       giaima[i] = (((mahoa[i] - newKey[i]) + 26) % 26) + 'A';
 
    giaima[i] = '\0';
    cout<<"\nKey: "<<key;
    cout<<"\nMa hoa: "<<mahoa;
    cout<<"\nGiai ma: "<<giaima;
 
return 0;
}
