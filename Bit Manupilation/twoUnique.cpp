#include<iostream>
using namespace std;
int setBit(int n,int pos){
    return (n & (1>>pos))!=0;
}

void unique(int arr[],int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum= sum ^ arr[i];
        }   
    int tempsum=sum;
    int setbit=0,pos=0;
    while(setbit!=1){
        setbit = sum&1;
        pos++;
        sum=sum>>1;
    }
    int xorsum=0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],pos-1)){
            xorsum=xorsum^arr[i];
        }
    }
    cout<<xorsum<<endl;
    cout<<(tempsum^xorsum)<<endl;
}   

int main(){
    int arr[]={1,2,3,2,1,6};
    unique(arr,6);
    return 0;
}