#include<iostream> 
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
    insertion_sort(arr,n); 

    print_Array(arr,n); 




    return 0; 
}