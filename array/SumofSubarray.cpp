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
    int sum;
    cin>>sum;
    int s=0,e=-1,currsum=0;
    while(currsum<sum && e++<n){
        currsum+=a[e];
    }
    if(currsum==s){
        cout<<s<<" "<<e;
        return 0;
    }
    else{
        while (s<=e)
        {
            if(currsum==sum){
            cout<<s<<" "<<e;
            return 0;
            }
            currsum-=a[s];
            s++;
        }
        
    
    }
}