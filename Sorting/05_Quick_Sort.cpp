#include<iostream>
using namespace std;
int partition(int arr[] , int low , int high){
    int pivot = arr[low] ; 
    int i = low ; 
    int j = high ; 

    // This checks whether array have more than one element or not 
    while(i < j){

        // If this loop stops then it means we got the element smaller than pivot on left 
        while(arr[i] <= pivot && i <= high-1){
            i++; 
        }

        // If this loop stops then it means we got the element greater than pivot on right 
        while(arr[j] > pivot && j >= low+1){
            j--; 
        }

        // If i and j have not crossed and we got the greater element from left and smaller element from right then swap both 
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