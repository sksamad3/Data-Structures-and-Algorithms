#include<iostream>
#include<math.h>
using namespace std;
/* Given a number 31775 as input from the user ,
   write a c++ program to count the digits , and the return the count 
   of digits in the number , For example : in 31775 , output should be 5 , as it contains
   5 digits , write a function for it .*/


   // We use log because we were just dividing by 10 
   // When division is happening , we can use log
   // Time Complexity : O(log10(n))

   void count_Digits(int n){
    int dup = n ; 
    int count = 0; 
    /*while(n!=0){
        int bit = n%10; 
        n = n/10 ; 
        count++; 
    }*/


   
    cout<<"No. of digits in "<<dup <<" is : "<<count; 
   }
   void count_Digits_Optimal(int n){
    int dup = n ;
    int count = (int) log10(n) + 1; 
    cout<<"No. of digits in "<<dup <<" is : "<<count; 

    
   }


int main(){
    int n; 
    cout<<"Enter a number : "; 
    cin>>n ; 

    // count_Digits(n); 
    count_Digits_Optimal(n);
    return 0;
}