#include<iostream>
using namespace std;
void print_digits(int n){
    int ans = 0 ;
    while(n!=0){
        int ld = n%10 ; 
        n=n/10 ; 

        ans = ans * 10 +ld;
    }
    cout<<"Reversed number : "<<ans;
}
void print_all_divisors(int n){
    for(int i = 1 ; i*i<=n ; i++){
        if(n%i == 0){
            cout<<i<<" "; 

            if(i!=n/i){
                cout<<(n/i) <<" " ; 
            }
        }
        
    }
}
void gcd(int n1 , int n2){
    int gcd  = 1 ; 
    for(int i = 1 ; i<=(min(n1,n2)); i++){
        if(n1%i==0 && n2%i==0){
            gcd = i ; 
        }
    }
    cout<<"GCD is : "<<gcd; 
}
void optimal_gcd(int a , int b){
    for(int i = 1 ; i<=min(a,b) ; i++){
        if(a>b){
            a = a%b ; 
        }
        else{
            b= b%a; 
        }
    }
    if(a==0) cout<<"GCD is : "<<b; 
    else cout<<"GCD is : "<<a; 
}
void r1(int n , int i){
    // base case 
    if(i>n) {
        return;
    }
    cout<<i<<" " ;
    r1(n,i+1); 
}
void r2(int n){
    // base case 
    if(n<1){
        return;
    }

    cout<<n<<" " ; 
    r2(n-1);
}
void r2b(int n){
    // base case 
    if(n<1){
        return ; 
    }

    r2b(n-1);
    cout<<n<<" ";
}
void r3b(int i , int n ){
    //base case 
    if(i>n){
        return; 
    }
    
    r3b(i+1,n); 
    cout<<i<<" "; 

}
int r4(int n, int sum){
    // base case 
    if(n<1){
        return sum; 
    }

    r4(n-1,sum+n); 
}
int r5(int n){
    // base case 
    if(n<1){
        return n; 
    }

    return n + r5(n-1);
}
int r6(int n){
    if(n==0){
        return 1; 
    }
    return n * r6(n-1) ; 
}
bool palindrome_string(string s,int i){
    // Base case 
    if(i>s.size()/2){
        return true ; 
    }

    if(s[i] != s[s.size()-i-1] ){
        return false; 
    }

    return palindrome_string(s,i+1);
}
void reverse_array(int arr[] , int n , int i ){
    //base case 
    if(i>=n/2){
        return ; 
    }

    swap(arr[i] , arr[n-i-1]);

    reverse_array(arr,n,i+1);
}
int main(){
    //int n ; 
    /*cout<<"Enter a number : "; 
    cin>>n; */
    //print_digits(n); 
    // print_all_divisors(n); 
    // gcd(30,40); 
    //optimal_gcd(20,40); 
    // r1(5,1);
    // r2(10);
    //r2b(10);
    //r3b(1,10);
    // int sum = r4(3,0);
    // cout<<"Sum is : "<<sum; 
    // int res = r5(5);  
    /*int res = r6(5);  
    cout<<res; */


   /* string s ; 
    cout<<"Enter a string : " ; 
    cin>>s; 

    bool res  = palindrome_string(s,0);
    if(res == 1){
        cout<<s<< " is a palindrome string ";
    }
    else{
        cout<<s<<" is not a palindrome string "; 
    }*/

    /*int arr[] = {1,2,3,4,5 }; 

    reverse_array(arr,5,0);

    for(auto it : arr){
        cout<<it<<" "; 
    }*/




    // Number Hashing complete program 
   /*int max ; 
   cout<<"Enter the value of max element : " ; 
   cin>>max ;
   
    int n ; 
    cout<<"Enter the size of array : "; 
    cin>> n ; 

    int arr[n] ; 
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter an element : " ; 
        cin>>arr[i] ; 
    }

    int hsh[max+1]  = {0}; 
    for(int i = 0 ; i<n ; i++){
        hsh[arr[i]]+=1; 
    }

    int q; 
    cout<<"Enter the number of queries : " ; 
    cin>> q; 


    while(q--){
        int num  ; 
        cout<<"Enter your query : "; 
        cin>>num; 


        cout<<"Count of "<<num<<" is : "<<hsh[num]<<endl;
    }*/

    string s ; 
    cout<<"Enter a string : " ; 
    cin>>s; 

    // pre-compute 
    int hsh[26 ] = {0};
    for(int i = 0 ; i<s.size() ; i++){
        hsh[s[i]-'a']+=1 ; 
    }


    int q ; 
    cout<<"Enter the number of queries : " ; 
    cin>>q ; 

    while(q--) { 
        char ch; 
        cout<<"Enter your queries " ; 
        cin>>ch ; 

        cout<<"Count of "<<ch <<" is : " <<hsh[ch-'a']<<endl ; 
    }

    return 0;

}