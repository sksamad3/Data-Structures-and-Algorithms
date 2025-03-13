#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void f(int arr[] , int n){
    unordered_map<int,int> hashh ; 

    for(int i = 0 ; i<n; i++){
        hashh[arr[i]]+=1; 
    }

    cout<<"Key " <<"     |     " <<"Count "<<endl ;
    for(auto it : hashh){
        cout<<it.first <<"  : "<< it.second<<endl; 
    }
}
int main(){
    int n ; 
    cout<<"Enter the size of array : "; 
    cin>>n ;

    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter an element in array : ";
        cin>>arr[i];
    }

    f(arr , n);
    return 0;
}