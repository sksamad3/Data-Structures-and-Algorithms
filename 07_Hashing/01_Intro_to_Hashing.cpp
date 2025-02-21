#include<iostream>
using namespace std;
/*
    Problem : Given an array as input , you have to count the number of occurences of each digit 
    and return the count of each digit ; 
    Hint : Use Hashing (Hash array )
*/

void count_Occurence(int n , int arr[]){

    // 9 is the maximum number ; 
    int hash[10] = {0};
    for(int i = 0 ; i<n ; i++){
        hash[arr[i]]+=1 ;
    }

    cout<<"Printing the occurences . "<<endl;
    cout<<"Index" <<" | " <<" Occurences"<<endl; 
    for(int i = 0 ; i<n ; i++){
        cout<<i<<"    |   "  <<hash[i]<<endl;
    }


}
int main(){
    int n ; 
    cout<<"Enter the size of array : "; 
    cin>>n ; 


    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter an element : "; 
        cin>>arr[i];
    }

    count_Occurence(10 , arr);
    return 0;
}