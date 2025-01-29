#include<iostream>
using namespace std;
/*
    Given a number as input from a user 
    check whether its a palindrome number or not .
    Print yes or not depending on no.
    

    Palindrome numbers are those numbers that on reversing
    remains the same , example : 121 is a palindrome no. 
    single digit nos are palindrome numbers 


*/

    void check_Palindrome(int n ){
        int dup = n ; 
        int ans = 0 ; 

        while(dup!=0){
            int bit = dup %10 ; 
            dup = dup /10 ; 
            ans = (ans * 10) + bit;
        }

        if(ans == n) cout<<n<<" is a palindrome number. "; 
        else cout<<n <<" is not a palindrome number. ";
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n ; 

    check_Palindrome(n); 
    return 0;
}