#include<iostream>
using namespace std;
void reverse(string &love,int s,int e){
    if(s>e){
        return ;
    }
    swap(love[s],love[e]);
    return reverse(love,s+1,e-1);
}
int main(){
    string love="Babbar";
    int s=0;
    int e=love.size()-1;
    reverse(love,s,e);
    cout<<love<<" ";
}