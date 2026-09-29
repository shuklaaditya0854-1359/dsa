#include<iostream>
using namespace std;
int main(){
    int n;int i=1;
    int sum=0;
    cout<<"enter num: ";
    cin>>n;
    do{
        sum=sum+i;
        cout<<sum<<" \n";
        i++;
    }while(i<=n);
}