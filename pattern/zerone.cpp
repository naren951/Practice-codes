#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int temp=1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0)
            cout<<temp<<" ";
            else
                cout<<!temp<<" ";
        }
        cout<<endl;
    }
}