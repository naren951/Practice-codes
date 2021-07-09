#include<iostream>
using namespace std;

int count(int n){
    int c=0;
    while(n!=0){
        n=n & n-1;
        c++;
    }
    return c;
}

int main(){
    cout<<count(7);
    return 0;
}