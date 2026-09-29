#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter value of row: "<<endl;
    cin>>row;

    int col;
    cout<<"enter value of col: "<<endl;
    cin>>col;

    // creation of 2d Array
    int **arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    //  Taking value of 2D Array
    cout<<"enter value of array: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // print value of 2D Array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // delete an column of each row array
    for(int i=0;i<row;i++){
        delete[] arr[i];
    }

    // delete an pointer's array
    delete arr;
}