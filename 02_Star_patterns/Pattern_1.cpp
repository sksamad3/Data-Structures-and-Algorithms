#include<iostream>
using namespace std;
//   Pattern 1 
/*
       *****
       *****
       *****
       *****
       *****

       n = 5
*/


void pattern_1(int n){
    for(int i = 1; i<=n ; i++){
        for(int j = 1 ; j<=n ; j++){
            cout<<"*"; 
        }
        cout<<endl; 
    }
}
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 

    pattern_1(n); 
    return 0;
}

