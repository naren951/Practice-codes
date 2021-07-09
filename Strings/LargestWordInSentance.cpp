#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int ans=0,maxLen=INT_MIN,s=0,e=0,finalS,finalE;
    for(int i=0;i<=n;i++){
        if(a[i]==' ' || a[i]=='\0'){
            if(ans>maxLen){
                maxLen=ans;
                finalS=s;
                finalE=e;
            }
            s=i+1;
            e=i;
            ans=0;
        }
        else{
            ans++;
            e++;
        }
    }
    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++){
        cout<<a[i+finalS];
    }
}