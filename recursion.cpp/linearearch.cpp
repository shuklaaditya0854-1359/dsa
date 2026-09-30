#include<iostream>
using namespace std;
bool search(int *arr,int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    return search(arr+1,size-1,key);
}
int main(){
    int size=5;
    int key=2;
    int arr[]={1,4,7,2,3};
    cout<<search(arr,size,key);
}