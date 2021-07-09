#include<iostream>
using namespace std;

int isPower2(int n){
    return !(n & (n-1));
}

int main(){
    cout<<isPower2(6);
    return 0;
}