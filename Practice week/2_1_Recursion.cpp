#include<iostream>
using namespace std;

void example_1(int i,int n){
    if(i>n){
        return ; 
    }

    cout<<i<<" "; 
    example_1(i+1,n); 
}
void example_2(int i){
    // Base case 
    if(i<1){
        return; 
    }

    cout<<i<<" "; 
    example_2(i-1); 
}
void example_3(int i){
    if(i<1){
        return ; 
    }
    example_3(i-1); 
    cout<<i<<" "  ; 
}
void example_4(int i , int n){
    // Base Case 
    if(i>n){
        return; 
    }

    example_4(i+1,n);
    cout<<i<<" ";
}
int example_5(int i , int sum){
    // Base Case 
    if(i<1){
        return sum ; 
    }

    example_5(i-1,sum+i);
}
int example_6(int n){

    // Base Case 
    if(n==0){
        return 0; 
    }

    return n + example_6(n-1);

}
int example_7(int n){
    if(n==0 || n==1){
        return 1; 
    }

    return n*example_7(n-1);
}
void example_8(int arr[] , int l , int r){
    if(l>=r){
        return ; 
    }

    swap(arr[l] , arr[r]);
    example_8(arr, l+1 , r-1);
}
void example_9(int arr[], int i , int n){
    // Base Case 
    if(i>n/2){
        return  ;
    }
    swap(arr[i] , arr[n-i-1]);
    example_9(arr, i+1  , n);
}
bool example_10(string str , int i ){

    // Base Case 
    if(i>str.size()/2){
        return true ; 
    } 

    if(str[i] != str[str.size()-i-1]){
      return false ; 
    }

    return example_10(str , i+1);
}
int example_11(int n){
    // Base Case 
    if(n <= 1 ) {
        return n; 
    }

    int last = example_11(n-1);
    int slast = example_11(n-2);
    return last + slast;

}
int main(){
    //example_1(0,10);
    //example_2(10); 
    //example_3(10);
    // example_4(0,10); 
    
    // int res = example_5(5,0);
    // cout<<"Sum is : "<<res; 

    // int res = example_6(5);
    // cout<<"Sum is : "<<res;  

    // int fact = example_7(5);
    // cout<<"Factorial is : "<<fact; 
    
    /*int n ; 
    cout<<"Enter the size of Array : "; 
    cin>>n ; 
    
    int arr[n] ; 
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter the values in array : ";
        cin>>arr[i]; 
        cout<<endl; 
    }

    example_8(arr,0,n-1);
    cout<<"Array : "; 
    for(auto it : arr){
        cout<<it<<" "; 
    }*/

    /*int n ; 
    cout<<"Enter the size of Array : "; 
    cin>>n ; 
    
    int arr[n] ; 
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter the values in array : ";
        cin>>arr[i]; 
        cout<<endl; 
    }

    example_9(arr,0,n);
    cout<<"Array : "; 
    for(auto it : arr){
        cout<<it<<" "; 
    }*/

    /*string str ; 
    cout<<"Enter a string : "; 
    cin>>str; 

    bool res = example_10(str, 0 ); 
    if(res==true) cout<<str<<" is a palindrome string. "; 
    else cout<<str<<" is not a palindrome string. "; */


    int n; 
    cout<<"Enter a number : " ; 
    cin>>n ; 

    int fib = example_11(n);
    cout<<"The nth fibonacci term is : "<<fib; 



    return 0;
}