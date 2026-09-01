#include<iostream>
using namespace std;
/* int printsum(int arr[][3],int row,int col){
    cout<<"printing sum"<<endl;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
} */
int largestrowsum(int arr[][3],int row,int col){
    int maxi=INT8_MIN;
    int rowindex=0;
    cout<<"printing sum is: ";
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(maxi<sum){
            maxi=sum;
            rowindex++;
        }
        cout<<sum<<" ";
    }
    return rowindex;
}
int main(){
    int arr[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    int row=3;
    int col=3;
    // cout<<printsum(arr,row,col)<<endl;
    int ans= largestrowsum(arr,3,3);
    cout<<endl;
    cout<<"largest sum of row is: "<<ans<<endl;
    
}