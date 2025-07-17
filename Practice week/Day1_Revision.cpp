#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void f(int i , int n){
    
    // Base Case
    if(i>n){
        return ; 
    }

    cout<<i<<" "; 
    f(i+1, n); 
}
void f2(int n){
    // Base 
    if(n<1){
        return ; 
    }

    cout<<n<<" ";
    f2(n-1);
}
void f3(int n ){
    if(n<1){
        return ; 
    }

    f3(n-1);
    cout<<n<<" "; 
}
void f4(int i , int n){

    // Base case 
    if(i>n){
        return ; 
    }

    f4(i+1 , n);
    cout<<i<<" ";
}
int f5(int sum  , int n){
    // base case 
    if(n<1){
        return sum;
    }

    f5(sum+n ,n-1 );
}
int f6(int n){

    if(n==0) return 0  ; 
    return n + f6(n-1);
}
int f7(int n){
    // Base Case 
    if(n == 0 || n==1){
        return 1; 
    }
    return n * f7(n-1);
}
int f8(int n){
    // Base Case 
    if(n == 2){
        return 1; 
    }

    if(n%2==0){
        return n * f7(n-2);
    }
}
bool checkPalindrome(string s , int i){
    int n = s.size();
    // Base Case 
    if(i>n/2){
        return true ; 
    }

    if(s[i] != s[n-i-1]){
        return false ; 
    }

    return checkPalindrome(s,i+1);   
}
int main(){
    /*int n ; 
    cin>>n ; 
    cout<<"Factorial of N even nos  : "<<f8(n);*/

    string s ; 
    cin>>s; 


    bool res = checkPalindrome(s,0); 
    if(res ==1 ) cout<<s<<" is a palindrome string " ; 
    else cout<<s <<" is not a palindrome string."  ; 
    return 0;
}