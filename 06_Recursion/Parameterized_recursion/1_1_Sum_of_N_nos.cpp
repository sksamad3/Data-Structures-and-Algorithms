#include<iostream>
using namespace std;

// Parameterized Recursion 
/*Parameterized recursion is a technique where extra parameters are passed to the recursive function to 
carry forward computed values instead of returning them.*/

int sum_Of_N_Natural_Numbers(int i , int sum){
    if(i<1) return sum; 

    sum_Of_N_Natural_Numbers(i-1 , sum+i); 
}

int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 

    int res = sum_Of_N_Natural_Numbers(n , 0); 
    cout<<"The sum of " <<n <<" natural nos are : " <<res;
    return 0;
}