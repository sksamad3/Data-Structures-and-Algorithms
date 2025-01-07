#include<iostream>
using namespace std;
//   Pattern 21 
/*
        *****        
        *   *
        *   *
        *   *
        *****  

       n = 5
*/

    void pattern_21(int n){
        for(int i = 1; i<=n ; i++){
            for(int j = 1; j<=n; j++){
                if(i==1 || i==n || j==1 || j==n){
                    cout<<"*"; 
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_21(n); 
    return 0;
}