#include<iostream>
using namespace std;
/*
    Given a number example : 123 , print its reversed number
    for 123 , output will be 321 , use digit extraction logic

*/


// Brute Force Approach 
void reverse_Number(int n){
    // Time complexity : O(n)
    int ans = 0 ; 
    int dup = n ; 

    while(n!=0){
        int digit = n % 10 ; 
        n = n/10; 

        ans = ans * 10 + digit;
    }

    cout<<"The reverse of "<<dup <<" is : "<<ans; 
}

int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n ; 

    reverse_Number(n); 
    return 0;
}