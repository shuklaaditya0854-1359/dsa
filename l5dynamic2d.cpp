#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row=3;
    int col=3;
    int **arr= new int*[row];
    for(int i=0 ; i<row ; i++){
        arr[i]=new int[col];
    }

    cout<<"enter input value of array: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // int *d1sum=new int[row];

    cout<<"left diagonal value is: "<<endl;
    int sum1=0;
    for(int i=0;i<row;i++){
        int leftdiagonalsum = *(*(arr+i)+i);
        cout<<leftdiagonalsum<<" ";
        sum1 = sum1+leftdiagonalsum;
    }
    cout<<endl;

    cout<<"value of right diagonal is: "<<endl;
    int sum2=0;
    for(int i=0;i<row;i++){
        int colnew=col-1-i;
        int rightdiagonalsum=*(*(arr+i)+colnew);
        cout<<rightdiagonalsum<<" ";
        sum2 = sum2 + rightdiagonalsum;
    }
    cout<<endl;

    cout<<"value of left diagonal value is: "<<sum1<<endl;
    cout<<"value of Right diagonal value is: "<<sum2<<endl;

    for(int i=0;i<row;i++){
        delete[] arr[i];
    }
    delete[] arr;

}