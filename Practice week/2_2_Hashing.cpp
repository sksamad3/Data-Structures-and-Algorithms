#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n ; 

    int arr[n] ; 
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter the elements in array : " ; 
        cin>>arr[i]; 
    }

        // Do hashing (Precompute)
        int hashh[13] = {0};
        for(int i = 0 ; i<n ; i++){
            hashh[arr[i]]+=1; 
        }

    int q ; 
    cout<<"Enter the no. of queries : "; 
    cin>>q; 


    while(q--){
        int num ; 
        cout<<"Enter the queries : "  ; 
        cin>>num;

        // Fetching from the hash Array 
        cout<<"Frequency : "<<hashh[num] <<endl ;  
    }
    return 0; 
}