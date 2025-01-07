#include<iostream>
using namespace std;
//   Pattern 8
/*
    *********
     *******
      *****
       ***
        *

       n = 5
*/

    void pattern_8(int n){

        // Prints spaces 
        for(int i = 1 ; i<=n ; i++){
            for(int j = 1 ; j<=(i-1); j++){
                cout<<" "; 
            }

        // Prints stars 
        for(int j = 1; j<=(2*(n-i+1)-1); j++){
            cout<<"*" ; 
        }
        cout<<endl; 
    }
}
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_8(n); 
    return 0;
}