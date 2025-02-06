#include<iostream>
using namespace std;
/*
    Problem Definition 
    Take size of the array from user and construct the array 
    Reverse the array using functional Recursion and print it. 
*/

    // type a[] when passing arrays as parameters 
void reverse_Array(/*Array*/int a[]  , /*Start*/int i , /*End*/int n){

    // If iterator becomes equal to end iterator or crosses it then 
    // recursion will terminate 
    if(i>=n/2) return; 

    // This swaps the elements at start and end positions 
    swap(a[i] , a[n-i-1]); 

    // Type array name only when passing array to a function call 
    reverse_Array(a , i+1 , n); 
}
int main(){
    int n ;  
    cout<<"Enter a number : "; 
    cin>>n; 

    int a[n]; 

    for(int i = 0 ; i<n ; i++){
        cout<<"Enter an element : "; 
        cin>>a[i]; 
    }
/*  1. a[] is only used when passing an array as a parameter to a   function
    2. a (Only name of array) is typed when passing arrays to a function call 
 */
    reverse_Array(a , 0 , n); 

    // Printing the array
    cout<<"Array : "; 
    for(auto it : a){
        cout<<it<<" "; 
    }
    return 0;
}