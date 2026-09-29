#include<iostream>
using namespace std;
int reach(int start, int dest){
    if(start==dest){
        cout<<"pahuch gye";
        return 0;
    }

   return reach(start+1,dest);
}
int main(){
    int dest=10;
    int start=0;
    reach(start,dest);
}