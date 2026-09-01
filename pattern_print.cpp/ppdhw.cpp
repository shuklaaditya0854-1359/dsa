#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            //int k=(row-1)*5+col;
            //cout<<k*k<<" ";
            cout<<col*col<<" ";
        }
        cout<<endl;
    }
}