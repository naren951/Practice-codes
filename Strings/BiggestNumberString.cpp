#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str ="16457938";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str;
}