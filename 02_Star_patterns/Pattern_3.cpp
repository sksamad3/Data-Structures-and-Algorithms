#include<iostream>
using namespace std;
//   Pattern 3 
/*
       1
       12
       123
       1234
       12345

       n = 5
*/
    void pattern_3(int n ){
        for(int i = 1; i<=n ; i++){
            for(int j = 1 ; j<=i ; j++){
                cout<<j; 
            }
            cout<<endl ; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_3(n); 
    return 0;
}