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
void upper_Half(int n){
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
    void lower_Half(int n){
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
        upper_Half(n);
        lower_Half(n);
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_9(n); 
    return 0;
}