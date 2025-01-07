#include<iostream>
using namespace std;
//   Pattern 16
/*
        A
        B B
        C C C 
        D D D D
        E E E E E 

       n = 5
*/
    void pattern_16(int n){
        char alpha = 'A'; 
        for(int i = 1; i<=n ; i++){
            for(int j = 1; j<=i ; j++){
                cout<<alpha<<" "; 
            }
            cout<<endl;
            alpha = alpha + 1; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_16(n); 
    return 0;
}