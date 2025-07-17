#include<iostream>
#include<bits/stdc++.h>

using namespace std; 
void count_Digits(int n){
    int count = 0 ; 
    while(n>0){
        int last_digit = n%10; 
        n = n/10;
        count = count+1;  
    }
    cout<<count<<" Digits."<<endl; 

    // Another approach 
    //int count = (int)log10(count)+1; 
}
void reverse_Integer(int n){
    int dup = n ; 
    int revnum = 0 ; 

    while(dup>0){
        int digit = dup%10 ; 
        revnum = (revnum*10)+digit ; 
        dup = dup/10 ; 
    }
    cout<<"Reversed :"<<revnum<<endl; 

}
void check_Palindrome(int n){
    int dup = n ; 
    int revnum = 0 ; 
    while(dup>0){
        int digit = dup%10; 
        dup = dup/10 ; 

        revnum = (revnum * 10) +digit;
    }
    if(revnum == n){
        cout<<n<<" is a palindrome number ";
    }
    else{
        cout<<n<<" is not a palindrome number";
    }
}
void check_Armstrong(int n){
    int answ = 0 ; 
    int dup = n ; 
    int count = 0; 
    while(dup > 0){
        int digit = dup%10 ; 
        dup = dup/ 10; 
        count = count + 1 ; 
    }

    dup = n ; 
    while(dup>0){
        int digit = dup%10; 
        dup = dup/10 ; 
        answ+=round(pow(digit,count));
    }
    if(answ == n) cout<<n <<" is an Armstrong Number"; 
    else cout<<n <<" is not an Armstrong Number "; 
}
void print_AllDivisors(int n){
    vector<int> factors; 
    for(int i = 1 ; i<=sqrt(n); i++){
        if(n%i==0){
            factors.push_back(i); 
            if(i!=(n/i)){
               factors.push_back(n/i); 
            }
        }
    }
    sort(factors.begin() , factors.end()); 
    cout<<"Divisors : "; 
    for(auto it : factors){
        cout<<it<<" "; 
    }
}
void check_Prime(int n){
    int count  = 0 ;
    for(int i = 1 ; i<=sqrt(n) ; i++){
        if(n%i==0){
            count++; 
            if((n/i) != i){
                count++; 
            }
        }
    }

    if(count > 2){
        cout<<n <<" is not a prime number"; 
    }
    else{
        cout<<n <<" is a prime numbere"; 
    }
}
void findGCD(int n1 , int n2){
    int gcd = 1; 
    for(int i = 1; i<=min(n1,n2); i++){
        if(n1%i==0 && n2%i==0){ 
            gcd = i; 
        }
    }
    cout<<"GCD of "<<n1 <<" , "<<n2 <<" is : "<<gcd; 

}
void findGCD_optimal(int n1 , int n2){
    int gcd = 1; 
    while(n1>0 || n2>0){
        if(n1>n2){
            n1 = n1%n2; 
        }
        else{
          n2  = n2%n1; 
        }
    }
    if(n1==0 ) cout<<"GCD is : "<<n2; 
    else cout<<"GCD is : "<<n1; 
}

int main(){
    /*int n ; 
    cout<<"Enter a number : "; 
    cin>>n ; */

    //count_Digits(n); 
    //reverse_Integer(n); 
    //check_Palindrome(n);
    //check_Armstrong(n);
    //print_AllDivisors(n); 
    //check_Prime(n) ; 
    findGCD(11,13); 
    return 0; 
}