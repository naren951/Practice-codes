#include<iostream>
using namespace std;
int main(){// 1 2 2 2 4 3 5 3 pd=1 cd=2 l=s-e+1 s=5 e=3
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0,e=1;
    int pd=0;
    int cd=a[1]-a[0];
    int len=2,maxlen=2;
    for (int i = 1; i < (n)-1; i++)
    {
        pd=cd;
        cd = a[i+1]-a[i];
        
        if(cd != pd){
            len=e-s+1;
            if(len>maxlen)
                maxlen=len;
            s=i+1;
            e=i+2;
        }
        else
            e++;
    }
    cout<<maxlen;
}