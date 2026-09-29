#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of 1D Array : "<<endl;
    cin>>n;

    // creation of 1D Array
    int *arr=new int[n]; 
    cout<<"enter value of array : "<<endl;

    // enter value of 1D Dynamic Array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // print value of 1D Array
    cout<<"value of  1D Array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}