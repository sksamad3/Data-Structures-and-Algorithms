#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 
void merge(int arr[] , int low , int mid , int high){
    vector<int> temp ; 
    int left = low ; 
    int right = mid+1 ; 
    
    while(left<=mid && right <=high){
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]) ; 
            left++; 
        }
        else{
            temp.push_back(arr[right]) ; 
            right++; 
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]) ; 
        left++ ; 
    }

    while(right<= high){
        temp.push_back(arr[right]) ; 
        right++ ; 
    }

    for(int i = low ; i<=high ; i++){
        arr[i] = temp[i-low]  ; 
    }

}
void merge_Sort(int arr[] , int low , int high) {
    if(low<high){
        int mid = (low+high) / 2; 
        merge_Sort(arr,low,mid) ; 
        merge_Sort(arr,mid+1,high) ; 
        merge(arr,low,mid ,high) ; 
    }
}
void printArray(int arr[] , int n ){
    cout<<"Array : " ; 
    for(int i = 0 ; i< n ;i++){
        cout<<arr[i]<<" " ; 
    }
}
int main(){
    int n ; 

    // The max size of array allowed is 10^6
    cout<<"Enter the size of array : "  ; 
    cin>>n ; 

    
    int arr[n] ; 
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter the element of array : " ; 
        cin>>arr[i] ; 
    }

    merge_Sort(arr,0,n-1); 
    
    return 0 ; 
}