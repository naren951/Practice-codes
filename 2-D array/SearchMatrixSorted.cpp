#include<iostream>
using namespace std;

int main(){
    int n,m,key;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>a[i][j];
        }
    }
    cin>>key;
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(a[i][j]==key){
            cout<<true;
            return 0;
        }
        else if(a[i][j]<key)
            i++;
        else
            j--;
    }
    cout<<false;
    return 0;
}