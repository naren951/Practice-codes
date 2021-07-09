#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0,e=0;
    while(s!=n && e!=n){
        
        for(int i=s;i<=e;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        e++;
        if(e==n){
            s++;
            e=s;
        }
    }
}