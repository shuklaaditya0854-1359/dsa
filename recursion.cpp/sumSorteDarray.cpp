#include<iostream>
using namespace std;
int sumsorted(int *arr,int size){
    if(size<=0){
        return 0;
    }
    
    return arr[0]+sumsorted(arr+1,size-1);
}
int main(){
    int size=4;
    int arr[]={1,2,3,4};
    int sum=0;
    int ans=sumsorted(arr,size);
    cout<<ans<<endl;
}