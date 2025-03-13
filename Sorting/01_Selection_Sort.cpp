#include<iostream>
using namespace std;

void selection_Sort(int arr[] , int n){
    for(int i = 0 ; i< n-2 ; i++){
         int mini = i ; 
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
            int temp = arr[i] ; 
            arr[i] = arr[mini]; 
            arr[mini] = temp; 

        }
    }
}
int main(){
    int n ; 
    cout<<"Enter the size of array : "; 
    cin>>n ; 

    int arr[n] ; 
    for(int i = 0 ; i < n ; i++) {
        cout<<i<<"." <<" Enter an element : ";
        cin>>arr[i]; 
    }

    selection_Sort(arr , n); 
    cout<<"Array : "; 
    for(auto it : arr){
        cout<<it<<" "; 
    }
    return 0;
}