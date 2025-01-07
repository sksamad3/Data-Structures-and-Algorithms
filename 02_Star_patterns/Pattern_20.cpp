#include<iostream>
using namespace std;
//   Pattern 20 
/*
        *        *
        **      **
        ***    ***
        ****  ****
        **********
        ****  ****
        ***    ***
        **      **
        *        * 

       n = 5
*/
    void pattern_20(int n){
        int spaces = 2*n-2;
        for(int i = 1; i<=(2*n-1); i++){ 

            // Left half 
            int stars = i; 
            if(i>n) stars = (2*n-i);
            for(int j = 1; j<=(stars); j++){
                cout<<"*"; 
            }

            // spaces
            for(int j = 1 ; j<=spaces ;j++){
                cout<<" ";
            }

            // Right half  
             if(i>n) stars = (2*n-i);
             for(int j = 1; j<=(stars); j++){
                 cout<<"*"; 
             }
            
            // Handling spaces 
            if(i>=n) spaces +=2; 
            else spaces -=2; 
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_20(n); 
    return 0;
}