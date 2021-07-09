#include<iostream>
using namespace std;

void unique(int arr[],int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum= sum ^ arr[i];
        }
        cout<<sum;
    }


int main(){
    int arr[]={1,2,3,2,1};
    unique(arr,5);
    return 0;
}