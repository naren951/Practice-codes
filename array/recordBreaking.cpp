#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<n;
        return 0;
    }
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=-1;
    int days=0;
    for (int i = 0; i < (n)-1; i++)
    {
        if(a[i]>max){
            max=a[i];
            if(a[i]>a[i+1]){
                days++;
            }
        }
    }
    cout<<days;
    return 0;
}