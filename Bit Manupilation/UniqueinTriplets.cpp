#include<iostream>
using namespace std;
int setBit(int n,int pos){
    return (n | (1<<pos));
}

int getBit(int n,int pos){
    return(n & (1<<pos))!=0;
}

void unique(int arr[],int n){
    int result=0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3){
            result = setBit(result,i);
        }
    }
    cout<<result;
}   

int main(){
    int arr[]={1,2,3,2,1,1,2};
    unique(arr,7);
    return 0;
}