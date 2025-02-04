#include<iostream>
using namespace std;
/*
    Print counting from N to 1 using recursion 
*/

void print_count(int n , int o){
    if(n<o) return ; 

    cout<<n<<" "; 
    print_count(n-1, o)  ; 
}
int main(){
    int n ; 
    cout<<"Enter a number : " ; 
    cin>>n; 

    print_count(n,1); 
    return 0;
}