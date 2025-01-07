#include<iostream>
using namespace std;
//   Pattern 19
/* 
        **********
        ****  ****
        ***    ***
        **      ** 
        *        * 
        *        * 
        **      **
        ***    ***
        ****  ****
        **********

       n = 5 (Solved in 2 parts (Upper and then lower))
*/

    void pattern_19(int n){
        // Upper half 
        int spaces = 0; 
        // First half 
        for(int i = 1 ; i<=n ; i++){
            // Prints left inverted triangle 
            for(int j = 1 ; j<=(n-i+1); j++){
                cout<<"*"; 
            }

            // spaces 
            for(int j = 1 ; j<=spaces ; j++){
                cout<<" "; 
            }

            // stars 
            for(int j = 1; j<=(n-i+1); j++){
                cout<<"*"; 
            }

            spaces+=2; 
            cout<<endl; 
        }

    // Lower half 
        spaces = 2*n-2; 
        // First half 
        for(int i = 1 ; i<=n ; i++){
            // Prints left inverted triangle 
            for(int j = 1 ; j<=i; j++){
                cout<<"*"; 
            }

            // spaces 
            for(int j = 1 ; j<=spaces ; j++){
                cout<<" "; 
            }

            // stars 
            for(int j = 1; j<=i; j++){
                cout<<"*"; 
            }

            spaces-=2; 
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_19(n); 
    return 0;
}