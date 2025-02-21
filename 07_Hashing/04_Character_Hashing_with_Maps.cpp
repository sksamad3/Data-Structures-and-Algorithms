#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void count_Frequencies(string s){
    map<char,int> hash; 
    
    for(int i =0 ; i<s.size() ;i++){
        hash[s[i]]+=1; 
    }

    cout<<"Key " <<"       |    "<<"Count"<<endl;
    for(auto it : hash){
        cout<<it.first <<"          |        " <<it.second<<endl; 
    }
}
int main(){
    string s ; 
    cout<<"Enter a string : "; 
    cin>>s ;


    count_Frequencies(s); 
    return 0;
}