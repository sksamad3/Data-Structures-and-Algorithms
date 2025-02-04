#include<iostream>
using namespace std;
/*
    Print 1 to N counting using recursion but you cannot use 
    + operator instead use '-' operator. That's we called it backtracking

*/

void print_count(int i , int n){
    if(i<1) return ;

    print_count(i-1,n);
    cout<<i<<" "; 
}
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n ;

    print_count(n , n); 
    return 0;
}