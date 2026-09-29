#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    char name,m;
    cout<<"enter num: ";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            std::cout<<" ";
        }
        for(m='A';m<='A'+(row-1);m++){
            
            std::cout<<m;
        }
        std::cout<<endl;
    }
}