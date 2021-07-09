#include<iostream>
using namespace std;

bool sorted(int a[],int n){
    if(n==1){
        return true;
    }

    bool restArray =sorted(a+1,n-1);
    return (a[0]<a[1] && restArray);
}


int main(){
    int arr[]={1,2,6,4,5};
    cout<<sorted(arr,5);
}