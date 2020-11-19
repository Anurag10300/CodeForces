#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int len;
        len = s.size();
        if(len<=10){
            cout<<s<<endl;

        }
        else{
            string f,l;
            int mid = len-2;
            f = s[0];
            l = s[len-1];
            cout<<f<<mid<<l<<endl;
        }
    }
}
