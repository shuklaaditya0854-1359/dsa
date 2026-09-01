#include<iostream>
using namespace std;
bool checkpalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char string[],int n){
    for(int i=0;i<n/2;i++){
        char temp=string[i];
        string[i]=string[n-1-i];
        string[n-1-i]=temp;
    }
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[12];
    cout<<"enter name: "<<endl;
    cin>>name;
    cout<<"your name is: "<<name<<endl;

    int change=getlength(name);
    reverse(name,change);
    bool shukla = checkpalindrome(name,change);
    cout<<"reverse string is: "<<name<<endl;
    cout<<"length of string is: "<<change<<endl;
    cout<<"It is palindrome or not: "<<shukla<<endl;
}