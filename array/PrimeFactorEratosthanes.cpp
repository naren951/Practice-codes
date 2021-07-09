#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=0;
    }
    for(int i=2;i<=n;i++){
        for(int j=i*i;j<=n;j++){
            if(j%i==0 && arr[j]==0){
                arr[j]=i;
            }
    }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==0)
            arr[i]=i;
    }
    // for(int i=2;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }
    while(n!=1){
        cout<<arr[n]<<" ";
        n=n/arr[n];
    }
}