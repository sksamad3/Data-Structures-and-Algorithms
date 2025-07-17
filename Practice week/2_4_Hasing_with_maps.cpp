#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; 
    cout<<"Enter the size of array : "; 
    cin>>n ; 

    int arr[n]; 
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter the value in arrays : ";
        cin>>arr[i];
    }

    // pre-compute 
    map<int,int> mp ; 
    for(int i = 0 ; i<n ; i++){
        mp[arr[i]]++ ; 
    }


    int q; 
    cout<<"Enter the number of queries : ";
    cin>>q ; 
    
    while(q--){
        int nums ; 
        cout<<"Enter the queries : " ; 
        cin>>nums;

        // fetch 
        cout<<"Frequency : "<<mp[nums]<<endl; 
    }
    return 0;
}