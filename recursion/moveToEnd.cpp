 #include<iostream>
using namespace std;

string MoveToEnd(string s,char a){
    if(s.length()==0)
        return "";
    char ch=s[0];
    string ans =MoveToEnd(s.substr(1),a);
    if(ch==a){
        return ans+ch;
    }
    return ch+ans;
}


int main(){
    cout<<MoveToEnd("Naaareeeendiran",'a');
}