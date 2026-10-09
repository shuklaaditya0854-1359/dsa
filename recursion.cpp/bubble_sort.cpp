#include<iostream>
using namespace std;
void bubblesort(int arr[],int i,int n){
    if(n==1 || n<=0){
        return ;
    }
    while(i<n-1){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        i++;
    }
    return bubblesort(arr,0,n-1);

}
int main(){
    int arr[]={7,8,9,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    bubblesort(arr,i,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}