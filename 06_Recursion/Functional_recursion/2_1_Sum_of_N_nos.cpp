#include<iostream>
using namespace std;


    /*Functional Recursion
    Functional recursion is a type of recursion where the function calls itself and returns 
    a value , which is then used in the computation of the final result.  

    Key Points:
    1. Each recursive call returns a result that contributes to the final answer.  
    2. No extra parameters are passed to accumulate values (unlike parameterized recursion).  
    3. It follows the "break down → solve → combine" approach.  

    Example Concept (Sum of First N Numbers)
    The function returns `sum(n-1) + n` instead of carrying forward the sum as a parameter.  
    Each recursive call relies on the return value of the next recursive call to compute the result.  
    The base case stops recursion when `n == 0`.  
    
    Functional recursion is widely used in problems like factorial, 
    Fibonacci series, and tree traversal, where results are built up as the recursion unwinds.*/


int sum_Of_N_Natural_Numbers(int n){
    if(n == 0) return 0; 

    return n + sum_Of_N_Natural_Numbers(n-1);
}
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 

    int res = sum_Of_N_Natural_Numbers(n); 
    cout<<"Sum of "<<n <<" natural nos is : "<<res; 
    return 0;
}