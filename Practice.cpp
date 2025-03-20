#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*void count_Frequency(int arr[] , int n){
    int hash[10] = {0} ; 

    for(int i = 0; i<n ; i++){
        hash[arr[i]]+=1;
    }
    cout<<"Count Frequency "<<endl;
    cout<<"Element " <<"   |   " <<"Count"<<endl; 
    for(int i = 0 ;i<n; i++){
        cout<<i <<"    |    "<<hash[i]<<endl;
    }
}*/
// ---------------------------------------------------------------------------------------/


/*void selection_Sort(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        int mini = i ; 
        for(int j = i+1 ; j < n ; j++){
            if(arr[j] < arr[mini]){
                mini = j ; 
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp ; 
    }
}*/


/*void bubble_Sort(int arr[] , int n ){
    for(int i = n-1; i>=1 ; i--){
        for(int j = 0 ; j<i ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j] ; 
                arr[j] = arr[j+1] ; 
                arr[j+1] = temp ; 
            }
        }
    }
}*/
    
    /*void insertion_Sort(int arr[] , int n){
        for(int i = 0 ; i < n ; i++){
            int j = i ; 
            while(j>0 && arr[j-1]>arr[j]){
                int temp = arr[j-1]; 
                arr[j-1] = arr[j]; 
                arr[j]  = temp; 
                j--; 
            }
        }
    }*/

    /*void merge(int arr[] , int low ,int mid ,  int high){

        vector<int> temp ; 
        int left  = low ; 
        int right = mid+1; 

        while(left<=mid && right <= high){
            if(arr[left] < arr[right]){
                temp.push_back(arr[left]); 
                left++; 
            }
            else{
                temp.push_back(arr[right]); 
                right++;
            }

            while(left<=mid){
                temp.push_back(arr[left]); 
                left++;
            }
            while(right<=high){
                temp.push_back(arr[right]); 
                right++;
            }


            for(int i = low ; i<= high ; i++){
                arr[i] = temp[i-low]; 
            }
        }
    }
    void merge_Sort(int arr[] , int low , int high){
        // Base case 
        if(low>= high) return ; 



        int mid = (low + high) / 2 ; 
        merge_Sort(arr , low , mid);
        merge_Sort(arr , mid+1 , high); 

        merge(arr , low , mid , high); 
    }
*/

int partition(int arr[] , int low , int high){
    int pivot  = arr[low];
    int i = low ; 
    int j = high; 

    while(i < j){

        while(arr[i]<=pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j>=low+1){
            j--; 
        }

        if(i<j) swap(arr[i] , arr[j]);
    }
    swap(arr[low] , arr[j]);
    return j ; 
}
void quick_Sort(int arr[] , int low , int high){
    if(low < high){
        int partition_Index = partition(arr , low , high);
        quick_Sort(arr, low , partition_Index-1);
        quick_Sort(arr, partition_Index+1 , high); 
    }
}

int main(){
    /*
    Function name to be called : count_Frequency()
    int n ; 
    cout<<"Enter the size of array : "; 
    cin>>n ; 

    int arr[n]; 
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter an element : " ; 
        cin>>arr[i]; 
    }

    count_Frequency(arr , n); */


// ---------------------------------------------------------------------------------------/




/*
Problem : Perform character hashing using arrays , The input string only contains lower case alphabets

string s ; 
cout<<"Enter the string : "; 
cin>>s; 


int hash[26] = {0}; 
for(int i = 0  ; i<s.size() ; i++){
    hash[s[i] - 'a']+=1; 
    }
    
    // Queries 
    int q ; 
    while(q--){
        cout<<"Enter a char : " ; 
        cin>>  q ; 
        
        cout<<hash[s[q] - 'a'];
        }*/
       // ---------------------------------------------------------------------------------------/
       
      /* 
       //Function Name to be called : selection_Sort();
       int n ; 
       cout<<"Enter the size of array : " ; 
       cin>>n ;
       
       int arr[n]; 
       for(int i = 0 ; i< n ; i++){
        cout<<"Enter an element : "; 
        cin>>arr[i]; 
        }
        
        selection_Sort(arr , n); 
        cout<<"Array : " ; 
        for(auto it : arr){
            cout<<it<<" "; 
            }*/
           
           // ---------------------------------------------------------------------------------------/
           
        // Function Name to be called : bubble_Sort();
        /*int n ; 
        cout<<"Enter the size of array : " ; 
        cin>>n ;
        
        int arr[n]; 
        for(int i = 0 ; i< n ; i++){
            cout<<"Enter an element : "; 
            cin>>arr[i]; 
            }
            
            bubble_Sort(arr , n); 
            cout<<"Array : " ; 
            for(auto it : arr){
                cout<<it<<" "; 
                }*/
               // ---------------------------------------------------------------------------------------/
               
               
    // Function Name to be called : insertion_Sort();
    /*int n; 
    cout<<"Enter the size of array : "; 
    cin>>n ; 

    int arr[n] ; 
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter an element : "; 
        cin>>arr[i]; 
    }

    insertion_Sort(arr, n); 

    cout<<"Array : " ; 
    for(auto it : arr){
        cout<<it <<" " ; 
    }
*/
//-------------------------------------------------------------------------------------------------------

    /*
    // Function to be called : merge_Sort();
    cout<<"Merge Sort "<<endl; 

    int n ; 
    cout<<"Enter the size of array : "; 
    cin>>n ; 

    int arr[n]; 
    for(int i = 0 ; i< n ; i++){
        cout<<"Enter a number : "; 
        cin>>arr[i];
    }

    merge_Sort(arr , 0 , n-1); 
    cout<<"Array : "; 
    for(auto it : arr){
        cout<<it<<" "; 
    }*/


    int n ; 
    cout<<"Enter the size of array : "; 
    cin>>n ; 

    int arr[n] ; 
    for(int i = 0 ; i< n ; i++){
        cout<<"Enter a number : ";
        cin>>arr[i];
    }

    quick_Sort(arr , 0 , n-1);

    cout<<"Array : "; 
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}