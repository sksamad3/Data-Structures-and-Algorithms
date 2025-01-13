#include<iostream>
#include<bits/stdc++.h>
#include<set>
// All the operations take O(log n) time complexity and a balanced binary search tree is implemented behind the scenes.
// Only the iterators begin() and rbegin() takes O(1) time complexity
using namespace std;


    /*Set have two properties
    1. Stores everything in sorted order
    2. No duplicates allowed 
    and its enough it also allows you to sequentially traverse the map .*/

void create_Set(){

    set<int> myset   ; 
    myset.insert(4)  ; 
    myset.insert(10) ;
    myset.insert(78) ;
    myset.insert(89) ; 
    myset.insert(54) ; 
    myset.insert(43) ;

    cout<<"Set : "; 
    for(auto it : myset){
        cout<<it <<" ";
    }
}
void add_elements_to_set(){
    set<int> myset   ; 
    myset.insert(4)  ; 
    myset.insert(10) ;
    myset.insert(78) ;
    myset.insert(89) ; 
    myset.insert(54) ; 
    myset.insert(43) ;
    myset.emplace(38);
    myset.emplace(70);
}
void insert_element_in_diff_ways(){
    // There are multiple ways to use insert function with a set. 

    set<int> myset ; 
    myset.insert(4); 
    myset.insert(10) ;
    myset.insert(78);
    myset.insert(89) ; 
    myset.insert(54) ; 
    myset.insert(43) ; 

     //4 , 10 , 43 54 78 89 54 43 54
    
    // 1. Insert the element you want 
    myset.insert(54);

    // 2. Specifying the position to insert element
    // If we try to specify the position to insert element , then set will ignore that and will insert according to his calculation . Set maintains the sorted order to no matter at whatever position you try to insert an element set will decide where to insert to maintain the sorted order. 
    
    set<int>::iterator it = myset.begin(); 
    advance(it,4);
    myset.insert(it , 7); 

    cout<<"Set : "; 
    for(auto it : myset) cout<<it<<" ";

    
}
int main(){
    //create_Set();
    insert_element_in_diff_ways(); 
    return 0;
}