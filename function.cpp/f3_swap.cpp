#include<iostream>
using namespace std;
void swap(int &a, int &b){ //pass by reference
    int c;
    c = a;
    a = b;
    b = c;

}
void swap(float &x,float &y){
    float z=x;
    x=y;
    y=z;
}
int main(){
    int a, b;
    cin>>a>>b;

     float f1=2.3,f2=3.4;
    swap(f1,f2);
    cout<<f1<<" "<<f2<<" ";
    cout<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<" ";

    //float f1=2.3,f2=3.4;
   // swap(f1,f2);
}