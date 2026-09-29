#include<iostream>
using namespace std;
#define add ( ( a ) + 1)
#define compare (((a)<(b))?(a):(b))

// shared variable using reference funcion
void k(int& i){
    cout<<i<<" in function ";
}
int main(){
    int a=12;
    int b=9;
    cout<<add;
    cout<<endl;
    cout<<compare<<endl;
    int s=100;
    k(s);
}