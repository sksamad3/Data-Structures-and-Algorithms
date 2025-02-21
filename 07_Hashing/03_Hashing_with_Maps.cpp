#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void count_Frequencies(int arr[] , int size){
    map<int,int> hash; 
    
    for(int i =0 ; i<size ;i++){
        hash[arr[i]]+=1; 
    }

    cout<<"Key " <<"       |    "<<"Count"<<endl;
    for(auto it : hash){
        cout<<it.first <<"          |        " <<it.second<<endl; 
    }
}
int main(){
    int n ; 
    cout<<"Enter the size of array : "; 
    cin>>n ;

    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter an element : "; 
        cin>>arr[i]; 
    }

    count_Frequencies(arr , n); 
    return 0;
}