#include<iostream>
using namespace std;

int clearBit(int n,int pos){
    n=(n & ~(1<<pos));
    return n;
}

int main(){
    cout<<clearBit(5,0);
    return 0;
}