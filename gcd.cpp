#include<iostream>
using namespace std;

int gcd(int a,int b){
    int big;
    int small;
    if(a>b){
        big=a;
        small=b;
    }
    else{
        big=b;
        small=a;
    }
    while(small!=0){
        int temp=big%small;
        big=small;
        small=temp;
    }

    return big;
}


int main(){
    cout<<gcd(42,24);
}