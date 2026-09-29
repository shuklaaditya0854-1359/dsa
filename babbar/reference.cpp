#include<iostream>
using namespace std;
void update(int &n){
    n++;
}
int main(){
    int n=8;
    cout<<"before "<<n<<endl;
    n++;
    cout<<"after in main  "<<n<<endl;
    update(n);
    cout<<"after in function  "<<n<<endl;
}