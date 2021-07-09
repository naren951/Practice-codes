#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str ="Narendiran";
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z')
        str[i]+=32;
    }
    int arr[26];
    for(int i=0;i<26;i++)
        arr[i]=0;
    int count=-1;
    char ans;
    for(int i=0;i<str.size();i++)
        arr[str[i]-'a']++;
    for(int i=0;i<26;i++)
        if(arr[i]>count){
            count=arr[i];
            ans=i+'a';
        }
    cout<<count<<" "<<ans;
}