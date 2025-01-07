#include<iostream>
using namespace std;
//   Pattern 18 
/*
        E
        D E
        C D E
        B C D E
        A B C D E

       n = 5
*/
    void pattern_18(int n){
        for(int i = 1; i<=n ; i++ ){

        char alpha = 'A' + ((n-i+1)-1);
      //char alpha =  n-i+'A' is also correct 
            for(int j = 1 ; j<=i ; j++){
                cout<<alpha ; 
                alpha++; 
            }
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_18(n); 
    return 0;
}