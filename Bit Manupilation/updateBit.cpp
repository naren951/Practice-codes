#include<iostream>
using namespace std;

int updateBit(int n,int pos,int bit){
    if(bit){
    n=(n | (bit<<pos));
    }
    else{
        n=(n & ~(1<<pos));
    }
    return n;
}

int main(){
    cout<<updateBit(5,0,0);
    return 0;
}