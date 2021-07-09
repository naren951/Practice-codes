#include<iostream>
using namespace std;

void towerOfHanoi(char src,char aux,char dest,int n){
    if(n==0){
        return;
    }
    towerOfHanoi(src,dest,aux,n-1);
    cout<<"Move from"<<src<<" to "<<dest<<endl;
    towerOfHanoi(aux,src,dest,n-1);
}


int main(){
    towerOfHanoi('A','B','C',3);
}