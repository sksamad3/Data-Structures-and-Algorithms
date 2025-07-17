#include<iostream>
using namespace std;

int main(){
    string s; 
    cout<<"Enter a string : "; 
    cin>>s ; 

    int q ;
    cout<<"Enter the number of queries : ";  
    cin>>q ;
    cout<<endl; 
    
    // pre compute 
    int hash[26] = {0}; 
    for(int i = 0 ; i<s.size() ; i++){
        hash[s[i]-'a']++; 
    }

    while(q--){
        char ch ;
        cout<<"Enter the queries : ";  
        cin>>ch ; 

        // fetch 
        
        cout<<"Frequency : " <<hash[ch-'a']<<endl ;
    }
    return 0;
}