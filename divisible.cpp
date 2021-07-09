#include<iostream>
using namespace std;

int divisible(int a,int b,int n){
    int count =0;
    count+=n/a;
    count+=n/b;
    count-=n/(a*b);
    return count;
}


int main(){
    cout<<divisible(5,7,1000);
}