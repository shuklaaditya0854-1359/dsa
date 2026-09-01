#include<iostream>
using namespace std;
void sum(int m,int n){ //function declare
    int ans= m + n;  //function define
    cout<<ans<<endl;
}

int mul( int m,int n){
    int ans = m*n;
    return ans;
}

void fun(){
    cout<<"hello sir!";
}

int main(){
    int a,b;
    cout<<"enter two number: ";
    cin>>a>>b;

    sum(a,b);   //function call
    
    cout<<mul(a,b);
    cout<<endl;
    fun(); //isme cout ka use nhi krenge sirf function hi
}