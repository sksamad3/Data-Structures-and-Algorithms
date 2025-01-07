#include<iostream>
using namespace std;
//   Pattern 15 
/*
        A B C D E
        A B C D 
        A B C
        A B 
        A

       n = 5
*/
    void pattern_15(int n){
        for(int i = 1 ; i<=n ; i++){
        char alpha = 'A'; 
            for(int j =1 ; j<=(n-i+1); j++){
                cout<<alpha<<" ";
                alpha = alpha + 1; 
            }
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_15(n); 
    return 0;
}