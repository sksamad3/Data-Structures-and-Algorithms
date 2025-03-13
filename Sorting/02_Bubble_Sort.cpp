#include<iostream>
using namespace std;
// Bubble Sort - O(N^2)
// The key concept here is adjacent swapping 
// Placed i at the end and j at the start 
// i will keep coming back and j will keep moving forward 
// until j < i-1 (just before i ) , 
// Swapping will continue till i-1. 
// Swapping will continue till i-1 because if we check equal to i then 
// for the very last element swap will check for last element and the next element which doesn't exist
//  will throw runtime error . 
void bubble_Sort(int arr[] , int n ){
    int swapped = 0 ; 
    for(int i = n-1 ; i >= 1; i--){
        for(int j = 0 ; j<=i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapped = 1; 
                cout<<"runs" << i <<endl ;
            }
            if(swapped == 0 ){
                break ; 
            }
        }
    }
}
int main(){
    int n ; 
    cout<<"Enter the size of array : ";
    cin>>n; 

    int arr[n]; 
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter an element : ";
        cin>>arr[i];
    }

    bubble_Sort(arr,n);


    cout<<"Array : ";
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}