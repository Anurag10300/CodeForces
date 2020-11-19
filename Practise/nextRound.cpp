#include <iostream>

using namespace std;

int main(){
    int n,k,j=0;
    int key=0;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    key=arr[k-1];

    for (int x=0;x<n;x++){
        if(arr[x]>0 && arr[x]>=key){
           j++;
        }



    }


    cout<<j;
}
