#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    char s;
    while(cin>>s){
        s=tolower(s);
        if(!(s=='a' ||s=='e' ||s=='i' ||s=='o' ||s=='u' ||s=='y')){
            cout<<"."<<s;
        }
    }

}
