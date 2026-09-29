#include<iostream>
using namespace std;
inline int func(int& a, int& b){
    return ((a)<(b))? a : b;
}
int main(){
    int k=1, b=9;
    int ans=func(k,b);
    cout<<ans<<endl;

    
}