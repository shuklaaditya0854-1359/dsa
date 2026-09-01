#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    while(a!=b){
        if(b>a){
            b=(b-a);
        }
        else if(a>b){
            a=(a-b);
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"enter two number for gcd where for a & b is: "<<endl;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"gcd of "<<a<<" and b "<<b<<" is "<<ans<<endl;
}