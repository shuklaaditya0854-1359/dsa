#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        while(i<pivotindex && arr[i]<=arr[pivotindex]){
            i++;
        }
        while(j>pivotindex && arr[j]>=arr[pivotindex]){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;

}
void quicksort(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    // quick sort
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main(){
    vector<int>arr={4,6,9,2,1};
    int n=arr.size();
    int e=n-1;
    int s=0;
    quicksort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}