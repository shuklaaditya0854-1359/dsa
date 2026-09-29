#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"enter number: ";
    cin>>n;
    for(row=1;row<=4;row++){
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=n;row>=1;row--){
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}