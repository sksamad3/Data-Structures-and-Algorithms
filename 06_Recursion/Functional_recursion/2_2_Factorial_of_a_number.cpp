#include<iostream>
using namespace std;

int factoriall(int n){
    if( n==0 || n==1 ) return 1; 

    return n * factoriall(n - 1); 
}
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 

    int res = factoriall(n); 
    cout<<"Factorial of "<<n <<" is : "<<res; 
    return 0;
}