#include<iostream>
using namespace std;
//   Pattern 22 
/*
        4444444
        4333334
        4322234
        4321234
        4322234
        4333334
        4444444

       n = 4

    Procedure (0 Based Indexing)
    Outer loop --> 2*n-1;
    Innter loop--> 2*n-1; 

    Printing (Do this inside inner loop)
    1. Calculate the distance top , right , bottom , left 
    Find the formula inside the inner loop for all the 4 sides
    top = i ; 
    left = j ;
    right = (2*n-2)-j;   because for n= 4 , 2*n-2  = 6 is the boundary of the matrix 2*n-1 is beyond the bound
    bottom = (2*n-2)-i;  because for n = 4, 2*n-2 = 6 is the boundary of the matrix 
    2*n-1 is the 7th index which is out of matrix so we use 2*n-2 (if using 0 based indexing); 
    2. Take the min of all 4 using min() 
    min(min(top,left),min(right ,bottom))

    3. Subtract it from n 
*/

    void pattern_22(int n){
        // Outer loop for rows
        for(int i = 0 ; i<(2*n-1); i++){

            // Inner loop for columns
            for(int j = 0 ; j<(2*n-1); j++){

                // Calculating the distance from all sides 
                int top = i ; 
                int left = j ; 
                int right = (2*n-2)-j;
                int bottom = (2*n-2)-i;

                // Taking the minimum distance among all sides and subracting the minimum distance from n; 
                cout<<n-(min(min(top,left),min(bottom,right)));
            }
            cout<<endl; 
        }
    }
int main(){
    int n ; 
    cout<<"Enter a number : "; 
    cin>>n; 
    pattern_22(n); 
    return 0;
}