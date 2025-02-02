#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
    Print all the divisors of a number (take from user input) and print them 
    in the sorted order. 
 */
void print_all_divisors(int n){
    // Brute force approach 
    /*cout<<"Divisors of "<<n <<" are : "; 
    for(int i = 1; i<=n ; i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }*/


    // Optimal approach
    vector<int> div; 
    for(int i = 1; i<=sqrt(n) ; i++){
        if(n%i == 0){
           div.push_back(i); 

            if(i != n/i){
                div.push_back(n/i); 
            }
        }
    }

    sort(div.begin() , div.end()); 
    for(auto it : div){
        cout<<it<<" "; 
    }

}

int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n ; 

    print_all_divisors(n); 
    return 0;
}