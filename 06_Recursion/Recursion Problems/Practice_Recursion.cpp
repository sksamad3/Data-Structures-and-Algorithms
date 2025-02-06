#include<iostream>
using namespace std;

void reverse_Array(int a[] , int i , int n){

    // Base Case 
    if(i >= n/2) return ; 

    // Swaps the start and end 
    swap(a[i] , a[n-i-1]); 

    // Calls self 
    reverse_Array(a , i+1 , n); 
}
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 

    int a[n] ; 
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter an element : "; 
        cin>>a[i]; 
    }

    reverse_Array(a , 0 , n); 

    // Printing the Array 
    cout<<"Array : "; 
    for(auto it : a){
        cout<<it <<" "; 
    }
    return 0;
}