#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n+1];
    b[0]=0;
    int sum;
    for(int i=1;i<=n;i++){
            b[i]=b[i-1]+a[i-1];
        } 
    int maxsum=INT_MIN;
    for(int i=1;i<n+1;i++){
        for(int j=0;j<i;j++){
            sum=b[i]-b[j];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;
}