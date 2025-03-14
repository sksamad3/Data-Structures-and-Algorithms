#include<iostream>
using namespace std;
void insertion_Sort(int arr[] , int n ){
    for(int i = 0 ; i<n ;i++){
        int j = i ; 
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j]; 
            arr[j] = arr[j-1]; 
            arr[j-1] = temp ;
            j-- ;  
        }
    }
}
int main(){
    int n ; 
    cout<<"Enter the size of array : "; 
    cin>>n ; 

    int arr[n]; 
    for(int i = 0 ; i< n ; i++){
        cout<<"Enter the element : "; 
        cin>>arr[i]; 
    }

    insertion_Sort(arr,n ); 

    cout<<"Array : "; 
    for(auto it : arr){
        cout<<it<<" "; 
    }
    return 0;
}