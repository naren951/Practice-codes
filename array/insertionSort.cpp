#include<iostream>
using namespace std;

int main(){//20 30 40 50 10
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]>a[i]){
                temp=a[i];
                for(int b=i;b>j;b--){
                    a[b]=a[b-1];
                }
                a[j]=temp;           
                break;
            }   
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}