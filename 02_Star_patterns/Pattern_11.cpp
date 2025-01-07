#include<iostream>
using namespace std;
//   Pattern 11 
/*
        1
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1
       

       n = 5
*/
    void pattern_11(int n){
        int bit = 1; 
        for(int i = 1; i<=n ; i++){
            if(i%2!=0) bit = 1; 
            for(int j = 1 ; j<=i ; j++){
                cout<<bit<<" "; 
                bit = 1 - bit; 
            }
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_11(n); 
    return 0;
}