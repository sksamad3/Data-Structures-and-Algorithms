#include<iostream>
using namespace std;
bool check_Palindrome(string s , int i , int n){
    if(s[i] != s[n-i-1]) return false; 

    
    return check_Palindrome(s, i+1 , n);
}
int main(){
    string name ; 
    cout<<"Enter a string : "; 
    cin>>name; 

    check_Palindrome(name , 0 , 5); 
    return 0;
}