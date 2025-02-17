#include<iostream>
using namespace std;
int fibonacci_series(int n){
    if(n == 0 || n== 1 ) return n; 
    
    int last  = fibonacci_series(n-1); 
    int slast = fibonacci_series(n-2) ; 

    return last + slast; 
}
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n ; 

    int res = fibonacci_series(n) ; 
    cout<<"The "<<n<<"th fibbonacci number is : "<<res; 
    return 0;
}