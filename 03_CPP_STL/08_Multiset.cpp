#include<iostream>
#include<bits/stdc++.h>
#include<set>
/*
Red-black trees are maintained under the hood to keep the elements sorted
*/
using namespace std;
/*Multiset have two properties
    1. Stores everything in sorted order
    2. It allows storing duplicates means example :  you can store  5 occurences of 20 in multiset 
    which was not allowed in set
    and its enough it also allows you to sequentially traverse the multiset .*/

void create_Multiset(){
    multiset<int> mymultiset   ; 
    mymultiset.insert(4)  ; 
    mymultiset.insert(99) ;
    mymultiset.insert(78) ;
    mymultiset.insert(95) ; 
    mymultiset.insert(89) ; 
    mymultiset.insert(89) ; // storing multiple elements 
    mymultiset.insert(89) ; 
    mymultiset.insert(89) ; 
    mymultiset.insert(54) ; 
    mymultiset.insert(43) ;

    cout<<"Multiset : "; 
    // It first sorts the set and then iterates over it 
    for(auto it : mymultiset){
        cout<<it <<" ";
    }
}
void add_elements_to_Multiset(){
    multiset<int> mymultiset   ; 
    mymultiset.insert(4)  ; 
    mymultiset.insert(10) ;
    mymultiset.insert(78) ;
    mymultiset.insert(89) ; 
    mymultiset.insert(54) ; 
    mymultiset.insert(43) ;
    mymultiset.emplace(38);
    mymultiset.emplace(70);
    
}
void insert_element_in_diff_ways(){
    // There are multiple ways to use insert function with a multiset. 

    multiset<int> mymultiset ; 
    mymultiset.insert(4); 
    mymultiset.insert(10) ;
    mymultiset.insert(78);
    mymultiset.insert(89) ; 
    mymultiset.insert(89) ; 
    mymultiset.insert(89) ; 
    mymultiset.insert(54) ; 
    mymultiset.insert(43) ; 

    // Multiset sorted and stored 
    // 4 10 43 54 78 89 89 89 
    
    // 1. Insert the element you want 
    mymultiset.insert(54);

    // 2. Specifying the position to insert element
    // If we try to specify the position to insert element , then set will ignore that and will insert according to his calculation . 
    //Multiset maintains the sorted order to no matter at whatever position you try to insert an element multiset 
    // will decide where to insert to maintain the sorted order. 
    
    multiset<int>::iterator it = mymultiset.begin(); 
    advance(it,4);
    mymultiset.insert(it , 7); 


    
    // 3. Inserting a range of elements 
    vector<int> v1 = { 23 ,53, 83 , 34 , 98}; 
    multiset<int> mmst = {1 , 3  , 49 , 38 ,8 }; 

    // Now insert an entire vector into the multiset 
    mmst.insert(v1.begin(), v1.end()); 
    // OF course you can insert a custom range of elements from a vector to the multiset. 
}
void erase_elements(){
    // 1. While erasing any element the multiset container first sorts the elements and then erases the element , 
    //this point needs to be considered if using iterators to traversal and removal of elements.

    // 2. While erasing elements : lets say there are 5 occurences of 20 
    // in the multiset so if you directly find the element 20 using find()
    // and then erased so all the occurences will be erased. as multisets 
    // allows duplicates , so its better to traverse the iterator at a position 
    // and  then erase the element  

    // There are 3 ways to erase elements from a multiset 

    multiset<int> mmst = {1,4,5,6,7,9,8,10,20,3,2,54};

    // 1. Erase the element 
    mmst.erase(5); 



    // 2. Erase the element by providing the iterator 
    multiset<int>::iterator it = mmst.begin(); 
    advance(it , 4); // First the set will be sorted 
    // now set is 1 2 3 4 6 7 8 9 10 20 54 , iterator is now at 6 ; 

    mmst.erase(it); // Deletes 6 from the set .



    // 3. Erasing a range of elements from the set 
    multiset<int> mst2 = {1,4,5,6,7,9,8,10,20,3,2,54};

    // for selecting range of elements first sort the multiset and then the elements will be selected 
    // multiset is 1 2 3 4 6 7 8 9 10 20 54

    multiset<int>::iterator start = mst2.begin(); 
    multiset<int>::iterator end = mst2.end(); 

    // multiset is 1 2 3 4 6 7 8 9 10 20 54
    advance(start,1); // points to 2 
    end = prev(end , 3);   // points to 10  but end is not included so 9 will be considered if u erased 

    mst2.erase(start,end); // Set : 1 10 20 54





    // 4. Finding and then deleting the elements 
    auto ele = mst2.find(6);
    mst2.erase(ele);





    // 5. Finding the elements and deleting all the elements between them. 
    multiset<int> multiset_5 = {4, 10 , 78, 89 ,54 , 43} ; 

    auto start5 = multiset_5.find(4);
    auto end5 = multiset_5.find(54);

    // first the multiset will be sorted 
    // 4 , 10 , 43 ,54 ,78 , 89 
    // start iterator will be at 4 
    // end iterator will be at 54 
    // so elements from 4 to 43 (which is just before 54); will be deleted 

    multiset_5.erase(start5, end5); // 4 , 10 , 43  will be deleted 
    
}
void size_of_multiset(){
    multiset<int> mst = {1,4,5,6,7,9,8,10,20,3,2,54};

    cout<<"Size of the multiset is : "<<mst.size(); 
}
void check_if_empty_multiset(){
    // Created a populated multiset with some elements 
    multiset<int> mst = {1,4,5,6,7,9,8,10,20,3,2,54};
    // This will give o/p : set is not empty because it contains some elements 
    if(mst.empty()) cout<<"Multiset is empty "; 
    else cout<<"Multiset is not empty "<<endl; 



    // Created an empty set 
    multiset<int> mst2; 
    // This will give o/p : set is empty because it don't have elements in it . 
    if(mst2.empty()) cout<<"Multiset is empty "; 
    else cout<<"Multiset is not empty "<<endl; 
}
void find_element_in_multiset(){
    multiset<int> mst = {1,4,5,6,7,9,8,10,20,3,2,54};

    // You can only assign find() function to an iterator only and not the normal variable 
    auto element = mst.find(20); // Returns the iterator pointing to the elements otherwise returns end() (after end position)
}
void count_elements_in_multiset(){
    multiset<int> mst = {1,5,4,5,5,6,6,6,7,9,8,10,20,5,3,2,54};

    // In case of multiset which allows storing duplicates, 
    // Count returns the count of elements in the multiset 
    //  else returns 0  if element don't exists.

    int count = mst.count(5); 
    cout<<"Does element 5 occurs in multiset ? : "<<count; 
}
void clear_multiset(){
    multiset<int> mst = {1,4,5,6,7,9,8,10,20,3,2,54};

    // Trims down the set into an empty multiset / clears the multiset.
    mst.clear(); 

    // Checking if multiset is empty or not after clearing the multiset
    if(mst.empty()) cout<<"Multiset is empty "; 
    else cout<<"Multiset is not empty "; 
}
void swap_multisets(){
    multiset<int> odds = {1 ,3 ,5,7,9};
    multiset<int> evens = {2,4,6,8};

    odds.swap(evens); 

    // Odds and evens are swapped 
    cout<<"Odds : "; 
    for(auto it : odds) cout<<it<<" ";
    cout<<endl; 

    cout<<"Evens : "; 
    for(auto it : evens) cout<<it<<" "; 
}

int main(){
    create_Multiset();
    add_elements_to_Multiset();
    insert_element_in_diff_ways();
    erase_elements();
    size_of_multiset();
    check_if_empty_multiset();
    count_elements_in_multiset();
    swap_multisets();

    return 0;
}