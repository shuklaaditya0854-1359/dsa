#include<iostream>
using namespace std;
/* int &func(int j){
    int num=j;
    int &ans=num;
    cout<<ans;
    return ans;
}
int main(){
    int j=3;
    func(j);
} */
int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n; i++){
        sum+=arr[i];
        cout<<sum<<endl;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;

    int *ans=new int[n];
    cout<<"enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }

    getsum(ans,n);
    return 0;

}