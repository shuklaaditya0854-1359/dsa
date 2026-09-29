#include<iostream>
using namespace std;
void saydigit(int n,string arr[]){
    // base case
    if (n==0)
    {
        return;
    }
    // processing unit
    int digit=n%10;
    n = n / 10;
    
    saydigit(n,arr);
    cout<<arr[digit]<<"  ";
}
int main(){
    int n;
    cout<<"enter value of number: "<<endl;
    cin>>n;
    string arr[10]={"zero","one","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    saydigit(n,arr);
}