#include<iostream>
using namespace std;
//   Pattern 5 
/*
       *****
       ****
       ***
       **
       *

       n = 5
*/
    void pattern_5(int n){
        for(int i = 1; i<=n ; i++){
            for(int j = 1 ; j<=(n-i+1); j++){
                cout<<"*"; 
            }
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_5(n); 
    return 0;
}