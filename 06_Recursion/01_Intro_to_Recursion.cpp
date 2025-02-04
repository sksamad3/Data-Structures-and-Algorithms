#include<iostream>
using namespace std;

/*
    Recursion 
    Recursion is made up of two statements 
    1. When a function calls itself
    2. Until a specified condition is met. (Base case ); 

    1. Function calls are stored in a stack memory.
    2. When the specified condition is met the function returns. 
    3. Base case is written usually at the start of function body 
    4. When numerous functions are waiting in the stack it leads to 
       segmentation fault / stack overflow. 
    5. Recursion is a method of solving problems where a function calls itself to break down the problem into smaller subproblems. It continues until it reaches a base case, which stops the recursion.

    Recursion Tree 
    A recursion tree is a visual representation of recursive calls. It shows how the function breaks down into smaller subproblems.

    Stack Space 
    Stack space (or call stack) is a memory region where function calls and local variables are stored during program execution. Every time a function is called, a stack frame is created to store function data, and when the function returns, its stack frame is removed.

    Basically a place where all the waiting / non completed functions rather / yet to be completed functions resides.  
 */
int count = 0 ; 

void f(){
    if(count==3) return; 
    cout<<count<<endl; 
    count++; 
    f(); 
}
int main(){
    f(); 
    return 0;
}