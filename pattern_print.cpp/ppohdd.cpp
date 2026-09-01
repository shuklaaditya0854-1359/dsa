#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    //print star
    for(row=1;row<=4;row++){
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        //print space
        for(col=1;col<=2*(4-row);col++){
            cout<<"  ";
        }
        //print star
        for(col=row;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=3;row>=1;row--){
        //print star
        for(col=1;col<=row;col++){
            cout<<"* ";
        }
        //print space
        for(col=1;col<=2*(4-row);col++){
            cout<<"  ";
        }
        //print star
        for(col=row;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
}