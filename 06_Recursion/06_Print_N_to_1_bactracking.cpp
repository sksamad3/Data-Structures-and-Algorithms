#include<iostream>
using namespace std;
/*
    Print N to 1 using backtracking with recursion 
    You cannot use '-' operator in this case.
*/
    void print_count(int i , int n){
        if(i>n) return ; 

        print_count(i+1, n); 
        cout<<i<<" "; 
    }
int main(){
    int n ;
    cout<<"Enter a number : "; 
    cin>>n; 

    print_count(1,n) ; 
    return 0;
}