#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[] , int low, int mid , int high){

    vector<int> temp; 
    int left  = low  ; 
    int right = mid+1 ; 

    while(left<=mid && right<=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]); 
            right++;
        }
    }
    
    while(left<=mid){
        temp.push_back(arr[left]);
        left++ ;
    }
    while(right<=high){
        temp.push_back(arr[right]) ; 
        right++;
    }

    for(int i = low  ; i<=high ; i++){
        arr[i] = temp[i-low];
    }



}
void merge_Sort(int arr[] , int low , int high){
    if(low<high){
        int mid = (low+high)/2; 

        merge_Sort(arr,low,mid) ; 
        merge_Sort(arr,mid+1,high); 
        merge(arr,low , mid , high); 
    }
}
int pI(int arr[], int low , int high){
    int pivot  = arr[low];
    int i = low ; 
    int j = high; 

    while(arr[i]<=pivot && i<=high-1){
        i++; 
    }
    while(arr[j]> pivot && j>=low+1){
        j--; 
    }
    if(i<j){
        swap(arr[i] , arr[j]);
    }

    swap(arr[low] , arr[j]) ; 
    return j ; 

}
void quick_Sort(int arr[] , int low , int high){
    if(low<high){
        int partitition_index = pI(arr,low , high); 
        quick_Sort(arr,low,partitition_index-1); 
        quick_Sort(arr,partitition_index+1,high);
    }
}
void selection_Sort(int arr[] , int n ){
    for(int i = 0 ; i<n ;i++){
        int mini = i ; 
        for(int j = i+1; j<n ;j++){
            if(arr[j] < arr[mini]){
                mini = j ; 
            }
        }
        swap(arr[i] , arr[mini]); 
    }
}
void insertion_Sort(int arr[] , int n){
    for(int i = 1; i<n ; i++){
        int j = i  ; 
        while(j>0 && arr[j]<arr[j-1] ){
            swap(arr[j] , arr[j-1]); 
            j--; 
        }
    }
}
void bubble_Sort(int arr[] , int n){
    for(int i = n-1 ; i>=1 ; i--){
         
        for(int j = 0 ; j<=n-1 ; j++ ){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n ; 

    int arr[n]; 
    for(int i = 0 ; i<n ;i++){
        cout<<"Enter an element : "; 
        cin>>arr[i] ; 
    }

    //merge_Sort(arr,0,n-1); 
    //quick_Sort(arr,0,n-1);
    //selection_Sort(arr,n);
    //insertion_Sort(arr,n);
    bubble_Sort(arr,n);
    for(auto it  : arr){
        cout<<it<<" " ; 
    }
    return 0;
}