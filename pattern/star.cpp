#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int temp=row-1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=i;j<=i && j>1;j--){
            cout<<"**";
        }
        //cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<=row;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=temp--;j>0;j--){
            cout<<"**";
        }
        cout<<"*";
        
        cout<<endl;
    }
}