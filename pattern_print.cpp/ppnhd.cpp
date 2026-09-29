#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"enter num:";
    cin>>n;
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        for(col=1;col<=2*(n-row);col++){
            cout<<"  ";
        }
        for(col=row;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=1;row<=4;row++){
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        for(col=1;col<=2*(n-row);col++){
            cout<<"  ";
        }
        for(col=row;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
}