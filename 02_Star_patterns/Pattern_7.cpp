#include <iostream>
using namespace std;
//   Pattern 7 
/*
        *
       ***
      *****
     *******
    *********

       n = 5
*/
    void pattern_7(int n){
        for(int i = 1 ; i<=n ; i++){

            // Spaces 
            for(int j = 1 ; j<=(n-i); j++){
                cout<<" "; 
            }

            // Stars 
            for(int j = 1; j<=(2*i-1); j++){
                cout<<"*"; 
            }
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_7(n); 
    return 0;
}