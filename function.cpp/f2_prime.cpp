#include<iostream>
using namespace std;

void prime(int n){
    if(n<2){
        cout<<0<<endl;
    }

    for(int i=2;i<n;i++){
        if(n%i==0)
        {
            cout<<0<<endl;
            return;
        }
        
        else
        {
            cout<<1<<endl;
            return;
        }
        
    }

}

int fact(int n){
    int ans =1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"enter two number: ";
    cin>>a>>b;

     prime(a);
    cout<<fact(a)<<endl;
    prime(b);
    cout<<fact(b)<<endl;
    prime(b-a);
    cout<<fact(b-a)<<endl;
}