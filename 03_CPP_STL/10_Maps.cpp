#include<iostream>
#include<map>
#include<bits/stdc++.h>
/*
        Maps 
    1. Map is a data structure in C++ STL which stored data in key value pairs , a value is associated with each key 
    2. It stores unique keys but allows duplicate values. two unique keys can have same values 
    3. key can be of any data type and value also can be of any data type
    example : key can be of pair data structure and value can be single integer or a string .
    4. It stores the data in the sorted order order by keys
    5. It is an associative container stores data in key value pairs
    6. Maps are implemented using balanced binary search trees (like a red-black tree)
    7. Search, insert, and delete operations have O(log n) time complexity.
    8. It alows sequential access / traversal 
    9. Swap , size , clear all rest functions are same in map 
*/

/*
    1. Stores in sorted order 
    2. Unique keys 
    3. stores in key-value pairs 
*/

using namespace std;
void create_Maps(){
    map<int,int> mp1 ; 
}
void insert_elements_to_map(){
    
    // 1. Inserting using emplace()
    map<int,string> s_data; 

    s_data.emplace(1,"Usman"); 
    s_data.emplace(2,"Samad"); 
    s_data.emplace(3,"Ibrahim"); 
    s_data.emplace(4,"Hamza"); 
    s_data.emplace(5,"Umar"); 
    s_data.emplace(6,"Hasan");

    cout<<"ID"<<" | "<<"Name"<<endl; 
    for(auto it : s_data){
        cout<<it.first <<"  | "<<it.second<<endl; 
    }

    


    // 2. Inserting using insert()

    map<int,int> mp2 ; 
    mp2.insert({0,34}) ; 
    mp2.insert({1,23}); 
    mp2.insert({2,64}); 
    mp2.insert({3,100}); 
    mp2.insert({4,231});


    // 3. We can also modify the values directly using random access 
    mp2[3] = 153;


}
void map_of_pairs(){
    map<pair<int,int>,int> mp; 

    mp[{0,1}] = 45; 
    mp[{0,2}] = 54; 
    mp[{1,2}] = 69; 
    mp[{2,5}] = 57;
}
void access_elements_in_maps(){
    map<int,int>mp; 

    mp.emplace(0,34); 
    mp.emplace(1,23);
    mp.emplace(2,64); 
    mp.emplace(3,100); 
    mp.emplace(4,231);

    // 1. One of the way to access elements in a map is to 
    // access like we do with arrays . 
    // Use this when you want to just use the value 
    cout<<"Value at key 4 : "<<mp[4]<<endl; 

    //2. 2nd Way 
    // We want to find the value of key 3 , so how we will do this 
    // First find the key using find(); and then access its value using
    // member functions. 
    // Use this method when you want to access the key as well as its value 
    auto key = mp.find(3) ;
    cout<<"Key : "<<key->first <<" " <<"Value : "<<key->second; 
}
void erasing_elements(){
    map<int,int>mp; 

    mp.emplace(0,34); 
    mp.emplace(1,23);
    mp.emplace(2,64); 
    mp.emplace(3,100); 
    mp.emplace(4,231);

    mp.erase(1);  // Removes the key-value pair with key 1
}
void find_elements(){
     map<int,int>mp; 

    mp.emplace(0,34); 
    mp.emplace(1,23);
    mp.emplace(2,64); 
    mp.emplace(3,100); 
    mp.emplace(4,231);
    
    auto it = mp.find(3); // Returns an iterator to key 3 if found, or `map.end()` if not
    cout<<"The value at 3 is : "<<it->second;  // it->second returns the value of the key 

}

int main(){
    create_Maps(); 
    insert_elements_to_map(); 
    access_elements_in_maps(); 
    erasing_elements(); 
    find_elements(); 
    return 0;
}