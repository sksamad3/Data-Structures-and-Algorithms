#include<iostream>
using namespace std;

bool check_if_array_sorted(int arr[] , int n ){
    for(int i = 1 ; i<n ;i++){
        if(arr[i] >= arr[i-1]){

        }
        else{
            return false ; 
        }

    }
    return true; 
}
int main(){
    int n ; 
    cout<<"Enter the size of array ; " ; 
    cin>>n ; 

    int arr[n] ; 
    for(int i = 0 ; i< n; i++){
        cout<<"Enter the elements in array : " ; 
        cin>>arr[i]   ; 
    }

    if(check_if_array_sorted(arr,n)) {
        cout<<"Array is Sorted "; 
    }
    else{
        cout<<"Array is not Sorted" ; 
    }


    return 0;
}