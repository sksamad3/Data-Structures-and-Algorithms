#include<iostream>
using namespace std;

bool check_Palindrome_String(int i , string s){
    // base case 
    if(i>= s.size()/2 ) return true ; 


    if(s[i] != s[s.size()-i-1]){
        return false; 
    }
    else{
        return check_Palindrome_String(i+1 , s); 
    }
}
int main(){
    string s; 
    cout<<"Enter a string : "; 
    cin>>s; 

    int res = check_Palindrome_String(0 , s); 
    if(res == 0 ){
        cout<<s <<" is not a palindrome string" ; 
    }
    else{
        cout<<s <<" is a palindrome string"; 
    }
    
    return 0;
}