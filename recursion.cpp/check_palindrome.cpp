#include<iostream>
using namespace std;
bool palindrome(const string &str,int s,int e){
    if(s>=e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    if(str[s]==str[e]){
        return palindrome(str,s+1,e-1);
    }
}
int main(){
    string name="abnitinba";
    int s=0;
    int e=name.length()-1;
    bool check=palindrome(name,s,e);
    if(check){
        cout<<"it is palindrome ";
    }
    else{
        cout<<"it is not palindrome ";
    }
}