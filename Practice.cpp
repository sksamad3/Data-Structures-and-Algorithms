#include<iostream>
using namespace std;
void count_Frequency(int arr[] , int n){
    int hash[10] = {0} ; 

    for(int i = 0; i<n ; i++){
        hash[arr[i]]+=1;
    }
    cout<<"Count Frequency "<<endl;
    cout<<"Element " <<"   |   " <<"Count"<<endl; 
    for(int i = 0 ;i<n; i++){
        cout<<i <<"    |    "<<hash[i]<<endl;
    }



}
int main(){
    /*int n ; 
    cout<<"Enter the size of array : "; 
    cin>>n ; 

    int arr[n]; 
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter an element : " ; 
        cin>>arr[i]; 
    }

    count_Frequency(arr , n); */

    string s ; 
    cout<<"Enter the string : "; 
    cin>>s; 


    int hash[26] = {0}; 
    for(int i = 0  ; i<s.size() ; i++){
        hash[s[i] - 'a']+=1; 
    }

    // Queries 
    int q ; 
    while(q--){
        cout<<"Enter a char : " ; 
        cin>>  q ; 

        cout<<hash[s[q] - 'a'];
    }

    return 0;
}