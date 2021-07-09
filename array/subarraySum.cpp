#include<iostream>
using namespace std;
#include<math.h>

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int final=0;
    //for(int k=0;k<n;k++){
    for (int j = 0; j < (n); j++)
    {
        sum=0;
        for(int i=j;i<n;i++){
        sum+=a[i];
        final+=sum;
        }
    }
    //}
    cout<<final;
}