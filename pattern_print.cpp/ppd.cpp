#include<iostream>
using namespace std;
int main(){
    int row,col;
    //int count =1;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            //cout<<count<<"  ";
            //count=count +1;
            int l = ((row-1)*5+col)*2;
            //cout<<(row-1)*5+col<<"   ";
            cout<<l<<" ";
        }
        cout<<endl;
    }
}