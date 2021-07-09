#include<iostream>
using namespace std;

int first(int arr[],int n,int i,int num){
    if(i==n){
        return -1;
    }
    if(arr[i]==num){
        return i;
    }
    return first(arr,n,i+1,num);
}
int last(int arr[],int n,int i,int num){
    if(i<0){
        return -1;
    }
    if(arr[i]==num){
        return i;
    }
    return last(arr,n,i-1,num);
    }


int main(){
    int a[6]={1,2,3,4,2,5};
    cout<<first(a,6,0,2);
    cout<<last(a,6,6,2);
}