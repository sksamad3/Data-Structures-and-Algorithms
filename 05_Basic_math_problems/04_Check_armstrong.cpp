#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void check_Armstrong(int n ){
    int dup = n ; 
    int ans = 0 ; 
    
    while(dup !=0 ){
        int digit = dup%10; 

        dup = dup/10 ; 

        ans = ans + digit*digit*digit;
    }

    if(ans==n) cout<<n<<" is an Armstrong number. ";
    else cout<<n <<" is not an Armstrong number. ";
}
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n ; 

    check_Armstrong(n) ; 
    return 0;
}