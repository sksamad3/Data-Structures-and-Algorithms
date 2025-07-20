#include<iostream> 
using namespace std; 

// Difficulty : Easy 
// Given an array arr[]. The task is to find the largest element and return it.

int largest_element(int arr[] , int n ){
    int maxi = 0 ; 
    for(int i = 0 ; i< n ; i++){
        if(arr[i] > arr[maxi]){
            maxi = i ; 
        }
    }
    return arr[maxi] ;
}
int main(){
    int n ; 
    cout<<"Enter the size of array : " ; 
    cin>>n; 

    int arr[n] ; 
    for(int i = 0 ; i<n ;i++){
        cout<<"Enter the elements in array : "  ; 
        cin>>arr[i]; 
    }

    int res  = largest_element(arr,n) ; 
    cout<<"Largest Element : "<<res; 
    return 0 ; 
}
