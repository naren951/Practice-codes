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
    int maxSum=INT_MIN;
    for(int i=1;i<=n;i++){
            
            if((b[i-1]+a[i-1])<0 )
                b[i]=0;
            else
                b[i]=b[i-1]+a[i-1];
            maxSum=max(maxSum,b[i]);
        }
    cout<<maxSum;
}