#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int check[10];
    for(int i=0;i<10;i++){
        check[i]=0;
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0 && check[a[i]]==0){
            check[a[i]]=1;
        }
    }
    for(int i=0;i<10;i++){
        if(check[i]==0){
            cout<<i;
            return 0;
        }
    }
}