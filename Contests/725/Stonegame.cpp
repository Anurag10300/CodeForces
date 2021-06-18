#include<bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> p(n);

    for(auto &e:p){
        cin>>e;
    }
    
    int max_pos = max_element(p.begin(),p.end()) - p.begin();
    int min_pos = min_element(p.begin(),p.end()) - p.begin();

    int res = min({
        max(max_pos,min_pos)+1,
        n-min(max_pos,min_pos),
        n-max(max_pos,min_pos)+min(max_pos,min_pos)+1
    });
    cout<<res<<endl;

}




 int main(){
     int t;
     cin>>t;
     while(t--){
         solve();
     }
     return 0;
 }