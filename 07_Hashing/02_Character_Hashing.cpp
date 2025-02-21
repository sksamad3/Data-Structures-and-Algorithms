#include<iostream>
using namespace std;
void count_Characters(string s){
    int hash[26] = {0}; 

    for(int i = 0 ; i<s.size() ; i++){
        hash[s[i]-'a']+=1; 
    }

    cout<<"Count of characters "<<endl; 

    cout<<"Chars" <<"   |    " <<"Count"<<endl;
    for(int i = 0 ; i<26 ; i++){
        cout<<(char(i + 'a')) <<"   |   " <<hash[i]<<endl; 
    }
    
}
int main(){
    string s ; 
    cout<<"Enter a string : "; 
    cin>>s; 

    count_Characters(s);
    return 0;
}