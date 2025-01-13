#include<iostream>
#include<bits/stdc++.h>
#include<set>
// All the operations take O(log n) time complexity and a balanced binary search tree is implemented behind the scenes.
// Only the iterators begin() and rbegin() takes O(1) time complexity

// While erasing any element the set container first sorts the set and then erases the element , this point needs to be considered if using iterators to traversal and removal of elements. 

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


    
    // 3. Inserting a range of elements 
    vector<int> v1 = { 23 ,53, 83 , 34 , 98}; 
    set<int> mst = {1 , 3  , 49 , 38 ,8 }; 

    // Now insert an entire vector into the set 
    mst.insert(v1.begin(), v1.end()); 
    // OF course you can insert a custom range of elements from a vector to the set. 

}
void erase_elements(){
   // While erasing any element the set container first sorts the set and then erases the element , this point needs to be considered if using iterators to traversal and removal of elements.


    // There are 3 ways to erase elements from a set 

    set<int> mst = {1,4,5,6,7,9,8,10,20,3,2,54};

    // 1. Erase the element 
    mst.erase(5); 



    // 2. Erase the element by providing the iterator 
    set<int>::iterator it = mst.begin(); 
    advance(it , 4); // First the set will be sorted 
    // now set is 1 2 3 4 6 7 8 9 10 20 54 , iterator is now at 6 ; 

    mst.erase(it); // Deletes 6 from the set .


    // 3. Erasing a rangle of elements from the set 
    set<int> mst2 = {1,4,5,6,7,9,8,10,20,3,2,54};

    // for selecting range of elements first sort the set and then the elements will be selected 
     // set is 1 2 3 4 6 7 8 9 10 20 54

    set<int>::iterator start = mst2.begin(); 
    set<int>::iterator end = mst2.end(); 

    advance(start,1); // points to 2 
    end = prev(end , 3);   // points to 10  but end is not included so 9 will be considered if u erased 

    mst2.erase(start,end); // Set : 1 10 20 54
}
void size_of_set(){
    set<int> mst = {1,4,5,6,7,9,8,10,20,3,2,54};

    cout<<"Size of the set is : "<<mst.size(); 
}
void check_if_empty_set(){
    // Created a populated set with some elements 
    set<int> mst = {1,4,5,6,7,9,8,10,20,3,2,54};
    // This will give o/p : set is not empty because it contains some elements 
    if(mst.empty()) cout<<"Set is empty "; 
    else cout<<"Set is not empty "<<endl; 



    // Created an empty set 
    set<int> mst2; 
    // This will give o/p : set is empty because it don't have elements in it . 
    if(mst2.empty()) cout<<"Set is empty "; 
    else cout<<"Set is not empty "<<endl; 
}
void find_element_in_set(){
    set<int> mst = {1,4,5,6,7,9,8,10,20,3,2,54};

    // You can only assign find() function to an iterator only and not the normal variable 
    auto element = mst.find(20); // REturns the iterator pointing to the elements otherwise returns end() (after end position)


}
void count_elements_in_set(){
    set<int> mst = {1,4,5,6,7,9,8,10,20,3,2,54};

    // Count returns 0 if element doesn't exist
    //  else return 1 if element exists.
    // The count value can be either 0 or 1 because set don't allow duplicate value so there's no doubt that count would return other than 0 or 1. 

    int count = mst.count(5); 
    cout<<"Does element 5 occurs in set ? : "<<count; 


}
void clear_set(){
    set<int> mst = {1,4,5,6,7,9,8,10,20,3,2,54};

    // Trims down the set into an empty set / clears the set.
    mst.clear(); 

    // Checking if set is empty or not after clearing the set
    if(mst.empty()) cout<<"Set is empty "; 
    else cout<<"Set is not empty "; 
}
void swap_set(){
    set<int> odds = {1 ,3 ,5,7,9};
    set<int> evens = {2,4,6,8};

    odds.swap(evens); 

    // Odds and evens are swapped 
    cout<<"Odds : "; 
    for(auto it : odds) cout<<it<<" ";
    cout<<endl; 

    cout<<"Evens : "; 
    for(auto it : evens) cout<<it<<" "; 
}

int main(){
    //create_Set();
    // insert_element_in_diff_ways(); 
    // erase_elements(); 
    // size_of_set(); 
    // check_if_empty_set(); 
    // find_element_in_set(); 
    // count_elements_in_set(); 
    // clear_set();
    swap_set(); 

    return 0;
}