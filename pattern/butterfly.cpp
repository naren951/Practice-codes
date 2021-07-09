#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int temp=row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
        if(j<=i)
            cout<<"*";
        else
            cout<<" ";
        }
        for(int j=1;j<=row;j++){
        if(j<=row-i)
            cout<<" ";
        else
            cout<<"*";
        }
    cout<<endl;
    }
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
        if(j<=row-i+1)
            cout<<"*";
        else
            cout<<" ";
        }
        for(int j=1;j<=row;j++){
        if(j<=i-1)
            cout<<" ";
        else
            cout<<"*";
        }
    cout<<endl;
    }
    
}