#include<iostream>
using namespace std;
//   Pattern 4 
/*
       1
       22
       333
       4444
       55555

       n = 5
*/

void pattern_4(int n){
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=i ; j++){
            cout<<i; 
        }
        cout<<endl; 
    }
}
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_4(n); 
    return 0;
}