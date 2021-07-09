#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int b[n+1];
    b[0]=0;
    int nonwrap=INT_MIN;
    for(int i=1;i<=n;i++){
            
            if((b[i-1]+a[i-1])<0 )
                b[i]=0;
            else
                b[i]=b[i-1]+a[i-1];
            nonwrap=max(nonwrap,b[i]);
        }
    int wrap=INT_MIN;
    for(int i=0;i<n;i++){
        a[i]-=2*a[i];
        
    }
    for(int i=1;i<=n;i++){
            
            if((b[i-1]+a[i-1])<0 )
                b[i]=0;
            else
                b[i]=b[i-1]+a[i-1];
            wrap=max(wrap,b[i]);
        }
        wrap=wrap+sum;
    cout<<max(wrap,nonwrap);
}