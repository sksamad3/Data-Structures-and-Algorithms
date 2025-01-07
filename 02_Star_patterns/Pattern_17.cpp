#include<iostream>
using namespace std;
//   Pattern 17 
/*
         A
       A B A
     A B C B A
   A B C D C B A

       n = 5
*/
    void pattern_17(int n){
        for(int i = 1 ; i<=n ; i++){
            char alpha = 'A'; 

            // spaces 
            for(int j = 1; j<=(n-i); j++){
                cout<<" "; 
            }

            // Print characters 
            for(int j = 1 ; j<=(2*i-1); j++){
                cout<<alpha; 
                if(j>(2*i-1)/2) alpha--; 
                else alpha++; 
            }
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_17(n); 
    return 0;
}