#include<iostream>
using namespace std;
int partition(int arr[] , int low , int high){
    int pivot = arr[low] ; 
    int i = low ; 
    int j = high ; 


    while(i < j){

        while(arr[i] <= pivot && i <= high-1){
            i++; 
        }

        while(arr[j] > pivot && j >= low+1){
            j--; 
        }
        if(i<j ){
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[low] , arr[j]);
    return j ; 
}
void quick_Sort(int arr[] , int low  , int high){

    if(low < high){
    int partition_index = partition(arr , low , high) ;
    
    quick_Sort(arr , low , partition_index-1); 
    quick_Sort(arr , partition_index+1 , high); 
    }
}
int main(){
    int n ; 
    
    cout<<"Enter the size of array : " ; 
    cin>>n ; 

    int arr[n]; 
    for(int i = 0 ; i< n ; i++){
        cout<<"Enter a number : " ; 
        cin>>arr[i]; 
    }

    quick_Sort(arr, 0 , n-1) ;

    cout<<"Array : " ; 
    for(auto it : arr){
        cout<<it<<" " ; 
    }
    return 0;
}