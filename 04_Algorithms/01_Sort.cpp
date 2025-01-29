#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
void sort_array(int a[] , int size){
    
    // 1. Sorting the entire array
    sort(a , a+size); // This is done with arrays 
    //sort(v.begin() , v.end());  // This is done when using vectors 

    cout<<"Sorted Array : "; 
    for(int i = 0 ; i< size; i++){
        cout<<a[i] <<" " ; 
    }

}
void sort_a_part_of_array(int b[] , int size_b){
    // 2. Sorting the part of an array 


    // Array : 1 3 5 2 
    // b + 2 points to -> 5 
    // b + size_b points to -> last elements means 2 ; 
    sort(b+2, b+size_b); // Sorts only  5 and 2 (a portion of array)

    cout<<"Sorted Array : ";
    for(int i = 0 ; i<size_b ; i++){
        cout<<b[i]<<" ";
    }
}
void sort_array_in_descending(int c[] , int size_c){

    // c is the starting element 
    // c + size_c is the last element 
    // greater<int>() sorts them in descending order
    sort(c , c+size_c , greater<int>());

    // Printing the array 
    cout<<"Sort in Descending : "; 
    for(int i = 0 ; i<size_c ; i++){
        cout<<c[i]<<" "; 
    }
}

bool comp(pair<int,int> p1 , pair<int,int>p2){
    if(p1.second<p2.second) return true; 
    if(p1.second>p2.second) return false; 

    if(p1.first>p2.first) return true; 
    else return false; 
}
void sort_in_custom_fashion(pair<int,int> d[], int size_d){

    // Sort in following way 
    // 1. Sort it according to the second element
    // 2. if second element is same then 
    // 3. sort it according to the first element,but in descending


    // Step 1 
    //         {1,2} , {2,1} , {4,1}
    // Sort them according to 2nd element in ascending
    // array : {4,1} , {2,1} , {1,2}
    

    // Step 2 
    //       {2,1} , {4,1} , {1,2}
    // if second element is same then sort according 
    // to first element in descending, 

    // Step 3 
    //       {2,1} , {4,1} , {1,2}
    // So second element of first 2 pair is same that is 1  , so we 
    // sort by looking at first element in descending
    // Array : {4,1} {2,1} {1,2}

    // For doing so , pass the first and last element and the comparator that will be self-written

    sort(d , d+size_d , comp);

    cout<<"Sorted : "; 
    for(int i = 0 ; i<size_d ; i++){
        cout<<d<<" "; 
    }

}
void using_builtin_popcount(){
    int num = 7 ; 

    /*The built-in popcount function is a function that counts the number of 1-bits (set bits) in a binary representation of an integer. It's a very efficient way to determine how many bits are set to 1 in the binary form of a number.
    
    It converts the number into binary and then return the count of 1 bits . */

    // For integers 
    int count = __builtin_popcount(num);
    cout<<"Number of 1's in "<<num <<" is : "<<count<<endl; 

    int num2 = 3; 
    int set_bits = __builtin_popcount(num2);
    cout<<"Number of 1's in "<<num2 <<" is : "<<set_bits<<endl;


    // For long long numbers
    // IF we want to check the number of set bits in long long number
    // We can do the following below
    long long n = 98765472194;
    long long cnt = __builtin_popcountll(n); // Include ll in end of __builtin_popcountll();

    cout<<"Number of 1's in "<<n <<" is : "<<cnt<<endl; 
}
void next_permuations_of_a_string(){
    
    string str = "123" ; 

    cout<<"All possible permuations  "<<endl; 
    cout<<str<<endl; 
    while(next_permutation(str.begin(),str.end())){
        cout<<str<<endl; 
    }
}
void find_maximum_element(int arr[] , int size_arr){
    int maxi = *max_element(arr,arr+size_arr);
    cout<<"Maximum element in array : "<<maxi<<endl;

    int mini = *min_element(arr, arr+size_arr); 
    cout<<"Minimum elemet in array : "<<mini<<endl;
}

int main(){
    //1. Sorting the entire array 
    int a[] = {1,5 , 3, 2};
    int size_a = 4; 
    //sort_array(a , size_a); 


    // 2. Sorting a part of array 
    int b[] = {1 , 3 , 5 , 2 };
    int size_b = 4; 
    //sort_a_part_of_array(b , size_b);

    int c[] = {1 , 3 ,5 ,2}; 
    int size_c = 4 ; 
    //sort_array_in_descending(c , size_c);

    pair<int,int> d[] = { {1,2} , {2,1} , {4,1} };
    int size_d = 3;
    //sort_in_custom_fashion(d,size_d);


    //using_builtin_popcount(); 


    //next_permuations_of_a_string();



    int arr1[] = {1 , 10 , 5 , 6};
    int size_arr1 = 4; 
    find_maximum_element(arr1, 4);

    return 0;
}