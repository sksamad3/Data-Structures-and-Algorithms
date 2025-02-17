#include<iostream>
using namespace std;
/*
    Print 1 to N counting using recursion but you cannot use 
    + operator instead use '-' operator. That's we called it backtracking
   
*/

void print_count(int n){
    if(n<1) return ; 

    print_count(n-1); 
    cout<<n <<" " ; 
}
int main(){
    int n ; 
    cout<<"Enter a number : "  ; 
    cin>>n ; 

    print_count(n) ; 
    return 0;
}