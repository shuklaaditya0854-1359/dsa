#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int row, int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // input-row wise
    /* for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            // cout<<"enter 2d array"<<endl;
            cin>>arr[i][j];
        }
    } */
    int target;
    cout<<"enter the target: "<<endl;
    cin>>target;
    if(ispresent(arr,3,4,target)){
        cout<<"element found "<<endl;
    }
    else{
        cout<<"element not found "<<endl;
    }
    // print
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[j][i];
            cout<<" ";
        }
        cout<<endl;
    }
}