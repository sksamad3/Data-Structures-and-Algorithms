#include<iostream>
using namespace std;
//   Pattern 12 
/*
        1        1
        12      21
        123    321
        1234  4321 
        1234554321

       n = 5
*/
    void pattern_12(int n){
        int spaces = 2*n-2; 
        for(int i = 1; i<=n ; i++){
            // Print left half 
            for(int j = 1; j<=i ; j++){
                cout<<j ; 
            }

            // Prints the spaces 
            for(int j = 1; j<=spaces; j++){
                cout<<" "; 
            }

            // Prints the right half 
            for(int j = i ; j>=1; j--){
                cout<<j ; 
            }
            spaces-=2;
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_12(n); 
    return 0;
}