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
    int ind[10];
    for(int i=0;i<10;i++){
        ind[i]=-1;
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
            if(ind[a[i]]==-1){
                ind[a[i]]=i;
            }
            else{
                if(ind[a[i]]<min)
                    min=ind[a[i]];
            }
    }
    cout<<min;

}