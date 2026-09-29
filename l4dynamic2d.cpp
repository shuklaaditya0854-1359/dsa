#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"enter value of row: "<<endl;
    cin>>row;
    cout<<"enter value of col: "<<endl;
    cin>>col;

    // create an 2d array
    int**arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    // input value
    cout<<"enter input value of 2d array : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;


    // output value
    cout<<"output value in 2d array witoput sum: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;

    // make an new array for store sum of row using loop
    int *summrow=new int[row];
    for(int i=0;i<row;i++){
        int rowsum=0;
       for(int j=0;j<col;j++){
         rowsum = rowsum + arr[i][j];
       }
       summrow[i]=rowsum;
    }

    // print sum of row
    cout<<"sum of row value is: "<<endl;    
    for(int i=0;i<row;i++){
        cout<<summrow[i]<<" ";
    }
    cout<<endl;

    // make an new array for adding sum of col using loop  
     int *summcol= new int[col];
    for(int i=0;i<col;i++){
        int colsum=0;
        for(int j=0;j<row;j++){
            colsum = colsum + arr[j][i];
        }
        summcol[i]=colsum;
    }

    // print sum of col
    cout<<"sum of col value is: "<<endl;
    for(int i=0;i<col;i++){
        cout<<summcol[i]<<" ";
    }
    cout<<endl;

    // delete an firstly array and later pointer after loop
    for(int i=0;i<row;i++){
        delete[] arr[i];
    }
    delete[] summrow;
    delete[] summcol;
    delete[] arr;
}