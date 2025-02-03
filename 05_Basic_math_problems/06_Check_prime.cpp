#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Given a number as an input from user check whether its prime or not. 

// Prime numbers are those numbers whom exactly has two factors
// 1 is not a prime number. 

void check_Prime(int n){
    // Brute force
    // Time Complexity : O(n) 
    /*int count = 0 ;  
    for(int i = 1 ;+ i<=n ; i++){
        if(n%i == 0){
            count++; 
        }
    }
    if(count == 2) cout<<n<<" is a prime number. "; 
    else cout<<n<<" is not a prime number. "; */


    int count = 0; 
    for(int i = 1; i<=sqrt(n); i++){
        if(n%i == 0) {
            count++; 

            if(i != (n/i)){
                count++; 
            }
        }
    }
    if(count == 2) cout<<n<<" is a prime number. "; 
    else cout<<n<<" is not a prime number. "; 
}

int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n ; 

    check_Prime(n); 
    return 0;
}