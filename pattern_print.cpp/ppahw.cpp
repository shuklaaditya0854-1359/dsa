#include<iostream>
using namespace std;
int main(){
    int row;
    char col;
    for(row=1;row<=5;row++){
        for(col='f';col<='k';col++){
            std::cout<<col<<"  ";
        }
        std::cout<<endl;
    }
}