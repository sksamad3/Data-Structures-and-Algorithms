#include<iostream>
using namespace std;
//   Pattern 9 
/*
        *
       ***
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *
      
       n = 5
*/

// This will print the top half pyramid 
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

    // This will print the lower pyramid 
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
    // This will combine the upper and lower pyramids  
    void pattern_9(int n){
        pattern_7(n); 
        pattern_8(n); 
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_9(n); 
    return 0;
}