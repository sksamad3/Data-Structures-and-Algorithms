#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_GCD(int n1 , int n2){

    // Extreme brute force approach 

    // Case : 1 : This will run for all the values of i , and check whether i 
    //divides both n1 as well as n2 

    // Time complexity : O(n); 

    /*int gcd = 0 ; 
    for(int i = 1; i <= i*i; i++){
        if(n1%i == 0 && n2%i == 0){
            gcd = i ; 
        }
    }*/







    // Case : 2 
    // n1 = 12 , n2 = 9 ;
    // But one thing i know for sure is that , 
    // if n1 = 12 , n2 = 9 , then the loop running for iterations 10 , 11 and 12 doesn't make sense 
    // in this case any number greater than 9 will not divide 9 , and above 9 there cannot be any number that 
    // divides both n1 and n2 . 
    // So can i run the loop till the smallest value , that is minimum(n1, n2); 
    // So the further iterations will be saved. 

    // Example 
    // n1 = 20 , n2 = 40 
    // In this case also , running the loop till 40 will not make sense 
    // because at the end of the day , the number that will divide both will be surely less than 20
    // So running the loop and checking for i=21 to i = 40 doesn't make sense and will waste the processing power and time. 
    // That's why we will run the loop till minimum of both n1 and n2 , in our case which is 20 

    // By using this approach 
    // Time complexity : O(min(n1, n2)) , where n1 and n2 are two numbers whose GCD or HCF will be calculated 
    /*int gcd = 0 ; 
    for(int i = 1; i <= min(n1,n2); i++){
        if(n1%i == 0 && n2%i == 0){
            gcd = i ; 
            break; 
        }
    }*/



    // Case 3 
    // Instead of running from 1 to minimum number among n1 and n2 , why don't we start from minimum number and loop till 1 (Reverse fashion) 
    // This is only applicable in best case if the GCD of n1 and n2 is near to the min of n1 and n2 
    // But if the n1 and n2 are such numbers that their CGD is 1 then the loop will iterate in reverse order from min number till 1 
    // that is the loop will fully run , because GCD is at the lowest boundary and loop running from forward to back
    /*int gcd = 0 ; 
    for(int i = min(n1,n2); i>=1 ; i--){
        if(n1%i == 0 && n2%i == 0){
            gcd = i ; 
            break  ; 
        }
    }*/



    // Using Euclidean algorithm 
    int d1 = n1 , d2 = n2 ; 
    for(int i = 1; i<=min(n1,n2) ; i++){
        if(n1>n2) n1 = n1 % n2 ;
        else n2 = n2 % n1; 

    }
        if(n1 == 0) cout<<"GCD of "<<d1 <<" and "<<d2 <<" is : "<<n2<<endl;
        else cout<<"GCD of "<<d1 <<" and "<<d2 <<" is : "<<n1<<endl;




    //cout<<"GCD of "<<n1 <<" and "<<n2 <<" is : "<<gcd; 
}

int main(){
    int n1 , n2 ; 
    cout<<"Enter n1 and n2 : "; 
    cin>>n1 >> n2 ; 

    print_GCD(n1 , n2) ; 
    return 0;
}