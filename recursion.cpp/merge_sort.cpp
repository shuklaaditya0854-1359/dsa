#include<iostream>
#include<vector>
using namespace std;
void mergehalves(int*arr,int s,int e,int mid){
    
    int len1 = mid-s+1;
    int len2= e- mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }
    int i=0;
    int j=0;
    mainArrayIndex=s;
    while(i<len1 && j<len2){
        if(first[i]<=second[j]){
            arr[mainArrayIndex++]=first[i++];
        }
        else{
            arr[mainArrayIndex++]=second[j++];
        }
    }
    while(i<len1){
        arr[mainArrayIndex++]=first[i++];
    }
    while(j<len2){
        arr[mainArrayIndex++]=second[j++];
    }
    delete[] first;
    delete[] second;
}
void mergesort(int*arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
     mergesort(arr,s,mid);
     mergesort(arr,mid+1,e);
     mergehalves(arr,s,e,mid);
}
int main(){
    int arr[]={5,8,9,2,4};
    int s=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,s,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}