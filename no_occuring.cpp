#include<iostream>
using namespace std;
char getoccurence(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z'){
            number =ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
    int ans=0;
    int maxi=-1;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    int clearans=ans+'a';
    return clearans;
}
int main(){
    string s;
    cout<<"enter string: "<<endl;
    cin>>s;
    cout<<getoccurence(s);

}