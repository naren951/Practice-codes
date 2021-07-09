#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int r=n-1,l=0;
    int mid;
    while(r>=l){
        mid=(l+r)/2;
        if(a[mid]==key){
            cout<<mid;
            return 0;
        }
        if(a[mid]>key)
            r=mid-1;
        else
            l=mid+1;
    }
}