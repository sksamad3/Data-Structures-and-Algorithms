#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
/* 1. Hash tables are used under the hood for the operation of unordered sets
 2. All the operations in unordered set takes O(1) time complexity due to use of hash tables. 
    
    If you need faster performance with unique elements but don't care about the order, unordered_set is a good choice.*/
using namespace std;
/*  Unordered sets have two properties
    1. Allows only unique elements / No duplicates allowed
    2. As the name , it doesn't stores elements in sorted order / order in which they are inserted &  allows you to sequentially traverse the unordered set .*/


void create_Unorderedset(){
    unordered_set<int> uset   ; 
    
    // In this even if you try to insert duplicates 
    //It will ignore and insert only unique elements this is mentioned at the top of the page.
    uset.insert(4)  ; 
    uset.insert(99) ;
    uset.insert(78) ;
    uset.insert(95) ; 
    uset.insert(89) ; 
    uset.insert(89) ; 
    uset.insert(89) ; 
    uset.insert(89) ; 
    uset.insert(54) ; 
    uset.insert(43) ;

    cout<<"Unordered Set : ";  
    for(auto it : uset){
        cout<<it <<" ";
    }
}
void add_elements_to_Unorderedset(){
    // Unordered sets only allows unique elements 
    // Duplicates are not allowed 
    unordered_set<int> ust   ; 
    ust.insert(4)  ; 
    ust.insert(10) ;
    ust.insert(78) ;
    ust.insert(89) ; 
    ust.insert(54) ; 
    ust.insert(43) ;
    ust.emplace(38);
    ust.emplace(70);
    
}
void insert_element_in_diff_ways(){
    // There are multiple ways to use insert function with an unordered set . 

    unordered_set<int> ust ; 
    ust.insert(4); 
    ust.insert(10) ;
    ust.insert(78);
    ust.insert(89) ; 
    ust.insert(89) ; 
    ust.insert(89) ; 
    ust.insert(54) ; 
    ust.insert(43) ; 

    // Here 89 is inserted thrice ,but only one occurence will be stored
    // Unorderset set  will be 
    // 4 10 78 89 54 43 
    
    // 1. Insert the element you want 
    ust.insert(54);

    // 2. Specifying the position to insert element
    // We can  specify the position to insert an element in an unordered set  
    
    unordered_set<int>::iterator it = ust.begin(); 
    advance(it,4);
    ust.insert(it , 7); 
    
    // 3. Inserting a range of elements 
    vector<int> v1 = { 23 ,53, 83 , 34 , 98}; 
    unordered_set<int> ust1 = {1 , 3  , 49 , 38 ,8 }; 

    // Now insert an entire vector into the multiset 
    ust.insert(v1.begin(), v1.end()); 
    // OF course you can insert a custom range of elements from a vector to the unordered set. 
}
void erase_elements(){
    // 1. Erasing elements from an unordered set will simply erase the elements.  

    // There are 3 ways to erase elements from a unordered set  

    unordered_set<int> ust = {1,4,5,6,7,9,8,10,20,3,2,54};

    // 1. Erase the element 
    ust.erase(5); 



    // 2. Erase the element by providing the iterator 
    // 1 4 5 6 7 9 8 10 20 3 2 54
    unordered_set<int>::iterator it = ust.begin(); 
    advance(it , 4); // Iterator will be at 7 

    ust.erase(it); // Deletes 7 from the unordered set.




    // 3. Finding and then deleting the elements 
// Unordered set ust2 : 1 4 5 6 7 9 8 10 20 3 2 54
    unordered_set<int> ust2 = {1,4,5,6,7,9,8,10,20,3,2,54};
    auto ele = ust2.find(6);
    ust2.erase(ele); // Erases 6 from the unordered set 





    // 4. Erasing a range of elements from the set . 
    unordered_set<int> armstrongs = {4, 10 , 78, 89 ,54 , 43} ;
    // Unordered sets doesn't allow selecting a range of elements because they are stored in random order based on hash value 
    // Deleting a range of elements directly is not possible , 
    // If you want to erase elements between two values (e.g., between 4 and 20), you 
    // can iterate through the unordered_set and use a condition to erase them:

    // Define the range you want to erase (e.g., values between 4 and 20 inclusive)
    int lower = 4, upper = 20;

    // Iterate and erase elements within the range
    for (auto it = ust2.begin(); it != ust2.end(); ){
        if(*it >= lower && *it <= upper){
            it = ust2.erase(it); // Erases the current element and updates the iterator 
            }
        else{
            ++it; // Move to the next element
            }
    }

}
void size_of_unorderedset(){
    unordered_set<int> ust = {1,4,5,6,7,9,8,10,20,3,2,54};

    cout<<"Size of the unordered set is : "<<ust.size(); 
}
void check_if_empty_unorderedset(){
    // Created a populated unordered set with some elements 
    unordered_set<int> ust = {1,4,5,6,7,9,8,10,20,3,2,54};
    // This will give o/p : set is not empty because it contains some elements 
    if(ust.empty()) cout<<"Unordered set is empty "; 
    else cout<<"Unordered set is not empty "<<endl; 



    // Created an empty set 
    unordered_set<int> ust2; 
    // This will give o/p : set is empty because it don't have elements in it . 
    if(ust2.empty()) cout<<"Unordered set is empty "; 
    else cout<<"Unordered set is not empty "<<endl; 
}
void find_element_in_unorderedset(){
    unordered_set<int> ust = {1,4,5,6,7,9,8,10,20,3,2,54};

    // You can only assign find() function to an iterator only and not the normal variable 
    auto element = ust.find(20); // Returns the iterator pointing to the elements otherwise returns end() (after end position)
}
void count_elements_in_unorderedset(){
    unordered_set<int> ust = {1,4,5,6,7,9,8,10,20,3,2,54};

    // Count returns 0 if element doesn't exist
    //  else return 1 if element exists.
    // The count value can be either 0 or 1 because unordered sets don't allow duplicate values 
    //so there's no doubt that count would return other than 0 or 1. 

    int count = ust.count(5); 
    cout<<"Does element 5 occurs ? : "<<count; 


}
void clear_unorderedset(){
    unordered_set<int> ust = {1,4,5,6,7,9,8,10,20,3,2,54};

    // Trims down the set into an empty set / clears the set.
    ust.clear(); 

    // Checking if set is empty or not after clearing the set
    if(ust.empty()) cout<<"Set is empty "; 
    else cout<<"Set is not empty "; 
}
void swap_unorderedsets(){
    unordered_set<int> odds = {1 ,3 ,5,7,9};
    unordered_set<int> evens = {2,4,6,8};

    odds.swap(evens); 

    // Odds and evens are swapped 
    cout<<"Odds : "; 
    for(auto it : odds) cout<<it<<" ";
    cout<<endl; 

    cout<<"Evens : "; 
    for(auto it : evens) cout<<it<<" "; 
}

int main(){
    create_Unorderedset(); 
    erase_elements();
    size_of_unorderedset(); 
    check_if_empty_unorderedset();
    count_elements_in_unorderedset();
    swap_unorderedsets();
    return 0;
}