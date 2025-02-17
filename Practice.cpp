#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fibonacci_series(int n ){

}
void print_All_Divisors(int n){
    vector<int> v1 ; 
    for(int i = 1 ; i<=sqrt(n) ; i++){
        if(n % i == 0){
           v1.push_back(i);

            if(i  != n/i) {
                v1.push_back(n/i); 
            }
        }
    }

    sort(v1.begin() , v1.end()); 
    cout<<"Divisors of "<<n <<" are : "; 
    for(auto it : v1) cout<<it<<" "; 
}
void print_All_Divisors_Recursion(int i , int n){
    
    // Base case 
    if(i*i > n) return ; 

    // What to do 
    if(n%i == 0){
        cout<<i<<" ";

        // When to terminate (if something wrong happens)
        if(i != n/i){
           cout<<(n/i)<<" "; 
        }
    }

    print_All_Divisors_Recursion(i+1, n); 
}
bool check_Palindrome_String(int i , string s){
    // Base case 
    if(i >= s.size()/2) return true ; 

    // If alphabets at both the sides are not identical 
    if(s[i] != s[s.size()-i-1]){
        return false; 
    }

    // If they are equal then check for the next digit 
    return check_Palindrome_String(i+1 , s); 
}
void reverse_Array(int i , int size , int arr[]){
    // Base case 
    if(i>= size/2) return ; 


    swap(arr[i] , arr[size-i-1]); 
    reverse_Array(i+1 , size , arr); 
}
int main(){
    /*string s ; 
    cout<<"Enter a string : "; 
    cin>>s; 





    bool res = check_Palindrome_String(0,s);
    if(res == 0 )  cout<<s<<" is not a palindrome string"; 
    else cout<<s <<" is a palindrome string";*/

    /*int arr[] = { 2 , 5 , 6 , 7  , 8 ,4};
    reverse_Array(0 ,  6 , arr); 

    cout<<"Array : "; 
    for(auto it : arr){
        cout<<it<<" "; 
    }*/



    /*int n ; 
    cout<<"Enter a number : " ; 
    cin>>n ; 

   print_All_Divisors_Recursion(1 , n) ;*/
   




   int n ; 
   cout<<"Enter a number : "; 
   cin>>n ;
   fibonacci_series(n); 
    return 0;
}