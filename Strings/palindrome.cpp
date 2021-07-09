#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int i=0,temp=n-1;
    while(i<=temp){
        if(arr[i]!=arr[temp]){
            cout<<"Not a palindrome";
            return 0;
        }
        i++;
        temp--;
    }
    cout<<"palindrome";
    return 0;
}