#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int second_largest(int arr[]  , int n ){ // Brute force 
    sort(arr , arr+n);

    for(int i = n-2  ; i>=0 ; i--){
        if(arr[i] != arr[n-1]){
            return arr[i] ;  
       }
    }

    // If all the elements are same , or second largest doesn't exist 
    return -1 ; 
} 
void print_Array(int arr[] , int n ){
 
    cout<<"Array : " ; 

    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" " ; 
    }
}
int second_largest_Better(int arr[] , int n ){
    int largest = 0 ; 
    for(int i = 0 ; i<n ;i++){
        if(arr[i] > arr[largest]) {
            largest = i ; 
        }
    }

    int slargest = -1 ; 
    for(int i = 0 ; i<n ; i++){

        // In order to update slargest  , the element should be greater than largest as well != slargest 
        // example : [2 , 7 , 7 ] 
        // in this 2 is slargest , but we can see 
        // slargest = 2  , we can see  7 is greater than slargest i.e. 2 ,  but is should be also less than largest (7) , this means  

        // if we dont check then 7 greater than slarge which is 2 , will be updated to 7 , which is incorrect . 
        
        // for an element to be second largest , it should fall between slargest and largest (that element should be in middle . ) ; 
        if(arr[i] > slargest && arr[i] != arr[largest]){
            slargest = i ; 
        }
    }
    return  arr[slargest] ; 
}
int second_largest_Optimal(int arr[] , int n ){
    int largest = arr[0] ; 
    int slargest = -1 ;
    for(int i = 1  ; i<n ; i++){
        if(arr[i]>largest){
            slargest = largest; 
            largest = arr[i]   ; 
        }

        // This will run , what if 
        // largest = 90    ||| slargest = 80  ||| current element arr[i] = 85  
        // 85 < 90 (true) and 85 > 80 (true),so largest will be updated to 85 , 
        // which is incorrect , largest is 90 and not 85 ,but 85 is second largest 
        // so even if 85 is not largest , but its second largest so 
        // slargest will be updated only ; 
        else if(arr[i] < largest  && arr[i] >slargest) {
            slargest = arr[i]  ; 
        }
    }
    return slargest ; 
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

    // Brute force 
    //int res = second_largest(arr,n) ;
    
   //int res = second_largest_Optimal(arr,n);
   
   int res = second_largest_Optimal(arr,n);
     cout<<"Second largest is : "<<res;
    // print_Array(arr,n); 
    
    return 0;
}