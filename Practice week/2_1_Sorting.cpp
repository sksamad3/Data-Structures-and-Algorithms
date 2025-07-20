#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 
void selection_sort(int arr[], int n){
    for(int i = 0 ; i<n-1 ; i++){  // Outer loop 
       
        int mini = i ; 

        for(int j = i+1; j<n ; j++){ // Inner Loop 
            
            if(arr[j] < arr[mini]){

                // Swap logic 
                int temp = 0 ; 
                temp = arr[j] ; 
                arr[j] = arr[mini] ; 
                arr[mini] = temp ; 
            }
        }
    }
}
void bubble_sort(int arr[] , int n){
    for(int i = n-1 ; i>=1; i--){
        int didSwap = 0; 
        for(int j=0 ; j<=i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            //    cout<<"swaps" ; 
                didSwap = 1 ; 
            }
        }
        if(didSwap == 0 ) break ; 
        cout<<"runs" ; 
    }
}
void insertion_sort(int arr[] , int n){
    for(int i = 1 ; i<n ; i++){
        int j = i ; 
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1] , arr[j]);
            j--;
        }
    }
}
void print_Array(int arr[] , int n ){
 
    cout<<"Array : " ; 

    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" " ; 
    }
}
void merge(int arr[] , int low , int mid , int high){
    vector<int> temp; 
    int left = low ; 
    int right = mid+1; 

    while(left<=mid && right<=high) {
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]); 
            left++; 
        }
        else{
            temp.push_back(arr[right]); 
        }
    }

    while(left<=mid) {
        temp.push_back(arr[left]) ; 
        left++; 
    }
    while(right<=high){
        temp.push_back(arr[right]) ; 
        right++; 
    }

    for(int i = low ; i<=high ; i++) {
        arr[i] = temp[i-low] ; 
    }



}
void merge_Sort(int arr[] , int low , int high){
    // Base case 
    if(low >= high){
        return; 
    }

    int mid = (low+high) / 2 ; 

    merge_Sort(arr, low , mid)  ; 
    merge_Sort(arr, mid+1 , high)  ; 
}
void recursive_Bubble_Sort(int arr[] , int n){
    
    // Base case 
    if(n==1) {
        return ; 
    }

    for(int j = 0 ; j<=n-2 ; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j] , arr[j+1]) ; 
        }
    }

    recursive_Bubble_Sort(arr, n-1);

}
void recursive_Insertion_Sort(int arr[] ,int i,  int n){
    if(i==n){
        return ; 
    }

    int j = i ; 
    while(j>0 && arr[j] < arr[j-1]){
        swap(arr[j] , arr[j-1]);
        j--;  
    }
    recursive_Insertion_Sort(arr,i+1 , n);
}


int pI(int arr[] , int low , int high){
    int i = low;
    int j = high; 
    int pivot = arr[low]  ; 

    while(i<j){
    
        while(arr[i]<=pivot && i<=high-1 ) {
        i++; 
    }  

        while(arr[j] > pivot && j>= low+1){
        j--; 
    }

    if(i<j){
    swap(arr[i] , arr[j]);
}
}
    

swap(arr[low] , arr[j]); 

return j ; 


}
void quick_Sort(int arr[] , int low , int high){

    // base case 
    if(low < high) {     
        int partitionIndex = pI(arr, low , high);
        quick_Sort(arr,low , partitionIndex-1); 
        quick_Sort(arr,partitionIndex+1 , high); 
    }
}

int pI2(int arr[] , int low , int high){
    int pivot = arr[low] ; 
    int i = low; 
    int j = high;

    while(i<j){
        while(arr[i] <= pivot && i<= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }

        if(i<j){
            swap(arr[i] , arr[j] ) ; 
        }  
    }
    swap(arr[j] , arr[low]); 
    return j ; 
}
int quick_Sort2(int arr[] , int low , int high){
    // Base case 
    if(low < high){
        int partition_Index = pI2(arr,low, high); 

        quick_Sort2(arr,low , partition_Index-1 ); 
        quick_Sort2(arr,partition_Index+1, high);

    }
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

    //selection_sort(arr,n) ;
    //bubble_sort(arr,n);
    //insertion_sort(arr,n); 
    // merge_Sort(arr,0,n-1) ;  
    //recursive_Bubble_Sort(arr,n); 
    //recursive_Insertion_Sort(arr , 1, n) ; 
    quick_Sort2(arr,0 , n-1) ; 
    print_Array(arr,n); 




    return 0; 
}