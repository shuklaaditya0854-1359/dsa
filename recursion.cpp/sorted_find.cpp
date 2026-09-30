#include<iostream>
using namespace std;
bool sorted(int *arr,int size){
    // base case
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    
    return sorted(arr+1,size-1); 
}
int main(){
    int size=4;
    int arr[]={1,2,3,4};
    bool ans=sorted(arr,size);
    cout<<ans<<endl;
}