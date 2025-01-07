#include<iostream>
using namespace std;
//   Pattern 6 
/*
       12345
       1234
       123
       12
       1

       n = 5
*/

    void pattern_6(int n){
        for(int i = 1 ; i<=n ; i++){
            for(int j = 1 ; j<=(n-i+1) ; j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_6(n); 
    return 0;
}