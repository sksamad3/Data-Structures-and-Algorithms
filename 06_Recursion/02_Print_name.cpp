#include<iostream>
using namespace std;
/*
    Problem 
    Print your name 5 times using recursion . 
*/

int count = 0 ; 
void print_name(int i , int n){
    if(i > n) return ; 
    
    cout<<"Samad"<<endl; 

    // This is called as change of parameters
    print_name(i+1, n); 
}
int main(){
    int n; 
    cout<<"Enter a number : "; 
    cin>>n; 

    print_name(1 , n); 
    return 0;
}