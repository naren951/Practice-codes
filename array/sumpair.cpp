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
    int key;
    cin>>key;
    int s=0,e=n-1;
    while(s<e){
        if((a[s]+a[e])==key){
            cout<<s<<" "<<e<<endl;
            return 0;
        }else if((a[s]+a[e])<key){
            s++;
        }else{
                e--;
        }
    }
    cout<<"not found";
    return 0;
}