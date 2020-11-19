#include <iostream>

using namespace std;

int main(){

    int n,arr[3],sum=0,ques = 0;
    cin>>n;
    for (int i=0;i<n;i++){

        for (int j=0;j<3;j++){
            cin>>arr[j];
            sum = sum +arr[j];
            }

        if(sum>=2){
            ques++;
            }
        sum = 0;
    }
    cout<<ques;

}
