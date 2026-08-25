#include<iostream>
using namespace std;
int getlength(char name[]){
    int count=0;
    for(int i=0;name!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[22];
    cout<<"enter your name: "<<endl;
    cin>>name;

    cout<<"your name is: "<<name<<endl;
    cout<<"string length is: "<<getlength(name)<<endl;

}