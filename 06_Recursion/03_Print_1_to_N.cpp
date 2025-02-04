#include<iostream>
using namespace std;

/*
    Print counting of numbers using recursion 
*/
void print_count(int i , int n){
    if(i>n) return ;

    cout<<i<<" "; 
    print_count(i+1, n);  
}
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n ; 

    print_count(1,n) ; 
    return 0;
}