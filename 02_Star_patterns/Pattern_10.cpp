#include<iostream>
using namespace std;
//   Pattern 10 
/*
        *
        **
        ***
        ****
        *****
        ****
        ***
        **
        *

       n = 5
*/
    void pattern_10(int n){
        for(int i = 1 ; i<=(2*n-1); i++){
            int stars = i ; 

            if(i>n) stars = 2*n-i; 
            for(int j = 1; j<=stars; j++){
                cout<<"*"; 
            }
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_10(n); 
    return 0;
}