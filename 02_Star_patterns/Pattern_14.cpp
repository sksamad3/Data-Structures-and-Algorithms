#include<iostream>
using namespace std;
//   Pattern 14 
/*
        A
        A B
        A B C
        A B C D
        A B C D E

       n = 5
*/
    void pattern_14(int n){
        for(int i=1; i<=n ; i++){
        char alpha = 'A'; 
            for(int j = 1; j<=i ; j++){
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
    pattern_14(n); 
    return 0;
}