#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v){
    int s=0;
    int e=v.size()-1;
    while (s<e)
    {
       swap(v[s],v[e]);
       s++;
       e--;
    }
    cout<<"After reverse an vector: "<<endl;
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}

void first_print(vector<int>n){
    cout<<"before reverse an vector: "<<endl;
    for(int i: n){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(23);
    v.push_back(33);
    v.push_back(4);
    v.push_back(20);
    v.push_back(53);
    v.push_back(13);
    v.push_back(21);

    first_print(v);
    
    print(v);
}