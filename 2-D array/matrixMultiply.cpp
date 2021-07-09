#include<iostream>
using namespace std;

int main(){
    int n,m,o;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>a[i][j];
        }
    }
    cin>>o;
    int b[m][o];
    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
        cin>>b[i][j];
        }
    }
    int c[n][o];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<o;j++){
            c[i][j]=0;
            for(int k=0;k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<o;j++){
    //     cout<<c[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

}