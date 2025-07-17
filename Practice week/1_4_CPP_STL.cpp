#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void explain_pair(){

    // Pairs are a part of Utility library 
    pair<int,int> p = {1,3};
    
    // Accessing the elements of a pair
    /*cout<<"First element : "<<p.first<<endl; 
    cout<<"Second element : "<<p.second; */

    // Nested Pairs 
    pair<int , pair<int,int>> p2 = {2,{4,5}};

    cout<<"First element : "<<p2.first<<endl; 
    cout<<"Seconds first : "<<p2.second.first<<endl; 
    cout<<"Seconds second : "<<p2.second.second<<endl; 

    // Array of Pairs 
    pair<int , int> arr[] = {{1,2},{2,5},{5,1}};

    cout<<arr[2].first; 
    
}
void explain_vector(){
    vector<int> v; 
    v.push_back(1); 
    v.emplace_back(2);

    // vector of pairs 
    vector<pair<int,int>> v2; 
    v2.push_back({1,2}); 
    v2.emplace_back(1,2);

    vector<int> va(5, 100);
    
    // Copies va vector into vb; 
    vector<int> vb(va);

    // Iterators 
    vector<int> vec = {20,10,15,6,7}; 
    
    // Creating Iterators
    vector<int>::iterator it = vec.begin();
    
    it++; 
    it+=2; 
    
    cout<<"Second element of vector : "<<(*it)<<endl; 
    
    // Iterators 
    /*
    1. begin()
    2. end()
    3. rbegin()
    4. rend()
    */
   
  vector<int> vec2 = {20,10,15,6,7}; 
   
   // Looping through a vector 
   cout<<"Vector : "; 
   for(vector<int>::iterator it = vec2.begin()  ; it!=vec2.end() ; it++){
        cout<<(*it)<<" " ;
    }
    
    // second way to print the vector 
    cout<<"Vector : "; 
    for(auto it = vec2.begin() ; it!= vec2.end() ; it++){
        cout<<(*it)<<" "; 
    }
    
    // Third way to print a vector using for-each loop 
    cout<<"Vector : "; 
    for(auto it : vec2){
        cout<<it<<" "; 
    }
    
    vector<int> vec3 = {20,10,15,6,7}; 

    // Erasing single element 
    vec3.erase(vec3.begin()+1);
    
    // Erasing a range of elements 
    //           start           ,    end 
    vec3.erase(vec3.begin()+1   , vec3.begin()+4);



    // Inserting elements in a vector 
   vector<int> v10 = {20,10,15,6,7}; 

   // Inserting single element  , insert(position , element)
   v10.insert(v10.begin()+1 , 30);

   // Inserting multiple elements  , insert(position , count of elements, element )
   v10.insert(v10.begin()+1 , 2 , 5);

   // Insert a vector from start to end inside another vector 
   vector<int> v11 = {50,50}; 
   v10.insert(v10.end()  ,v11.begin() , v11.end()); 

   cout<<"Vector : "; 
   for(auto it : v10){
    cout<<it<<" "; 
   }

   // Knowing the size of a vector 
   cout<<"Size of vector v10 : "<<v10.size();
   
   v10.pop_back(); 

   v.clear() ; // Clears down the vector 

   if(v10.empty()){
    cout<<"Vector is empty.";
   }
   else{
    cout<<"Vector is not empty. ";
   }


}
void explain_list(){
    list<int> ls ; 

    ls.push_back(2); 
    ls.emplace_back(3); 

    ls.push_front(5); 
    ls.emplace_front(29);
}
void explain_stack(){
    stack<int> st; 

    st.push(4); 
    st.push(34); 
    st.push(23); 
    st.push(65); 
    st.push(54); 

    cout<<"Top element of stack : "<<st.top()<<endl; 

    st.pop();

    cout<<"Size of the vector : "<<st.size()<<endl;


}
void explain_queue(){
    queue<int> q; 
    
    q.push(2); 
    q.push(3); 
    q.emplace(4); 

    cout<<"Back of queue : "<<q.back();
    
    cout<<"Front of the queue : " <<q.front(); 

    q.pop(); // deletes the front element
    
    // size , swap , empty are same as stack 

    
    
}
void explain_PQ(){
    priority_queue<int> pq; 

    pq.push(2) ; 
    pq.push(5); 
    pq.push(8);
    pq.emplace(23) ; 

    cout<<"Top of priority queue : "<<pq.top(); 

    // Defining an ascending priority queue 
    priority_queue<int , vector<int> , greater<int>> p1;
    p1.push(5); 
    p1.push(2); 
    p1.push(8); 
    p1.emplace(19); 

}
void explain_set(){
    // Set stores everything in 
    //   1. Unique elements 
    //   2. Sorted order 

    set<int> st; 

    st.insert(1); 
    st.insert(2) ; 
    st.insert(5) ; 
    st.insert(4); 
    st.insert(2) ; // Ignores this because 2 is already present in set 

    // it contains the iterator pointing to the element , derefernce the iterator to get the element

    auto it = st.find(5); 
    cout<<"The element is : "<<(*it); 

    // If the element is not found in the set , then set.end() is returned , means the after end position is returned. 
    auto it2 = st.find(42); // 42 is not present so st.end() will be returned 


    // Erasing the element using the find 
    st.erase(4);

    // get the count of elements , it will be 1 always because set stores only unique elements 
    // if the element is not present , then 0 will be returned 
}
void explain_map(){


    /*In C++, a map is a container in the Standard Template Library (STL) that 
    stores key-value pairs in sorted order based on the keys. 
    It is typically implemented as a self-balancing binary search tree (like Red-Black Tree), 
    which allows for fast retrieval, insertion, and deletion (in logarithmic time O(log n)).*/

    /*Basic Features of map
    1. Stores elements as **pairs**: `key -> value`
    2. Keys are unique** (no duplicates allowed)
    3. Automatically sorted by **key** in ascending order (by default)
    4. Fast lookup, insertion, and deletion: `O(log n)` complexity
    5. Defined in the header: `#include <map>`*/

    /*   Operation       
    1.  Insert element
    2. Access element  
    3. Erase element   
    4. Check existence 
    5. Size of map     
    6. Clear map
    7. Iteration  */

    // 1. Creating a map 
    map<int,int> mp; 

    // 2. Initializing values of keys 
    mp[1] = 2; 
    mp[3] = 34; 

    // 3. Inserting values in map 
    // insert() and emplace() only works if the keys doesn't exist , they fail silently if keys exist 
    mp.insert({1,5}); // This will not update the value to 5 at key 1 
    mp.insert({3,9});
    mp.emplace(7,54); 
    mp.emplace(8,42); 
    mp.emplace(5,56); 

    // 4. Find an element in a map 
    auto elem = mp.find(5); 
    cout<<endl; 
    
    cout<<"First : "<<elem->first <<"   " <<"Second : "<<elem->second<<endl; 
    // 5. Check if an element exists or not in the map 
    if(mp.count(20)){
        cout<<"Key exist in the map "<<endl; 
    }
    else{
        cout<<"Key doesn't exist in the map . "<<endl; 
    }


    cout<<"First " <<"|"<<"Second" <<endl; 
    // Printing the map 
    for(auto it : mp){
        cout<<it.first <<"         " <<it.second<<endl; 
    }





}
bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true; 
    if(p1.second > p2.second) return false ; 

    if(p1.second == p1.second){
        if(p1.first > p2.first) return true; 
        return false ; 
    }
}
void sorting(){
    int arr[5] = {10,8 , 4 , 2 , 1}; 

    // sorting the array in one line 
     // start, after-end  , start is included but end is not included 
    //sort(arr , arr+5);

    // sorting a part of array 
    //sort(arr+2,arr+5); 

    // Sorting in descending order 
    sort(arr, arr+5 , greater<int>() ); 


    pair<int,int> arr1[] = {{4,1} , {2,1} , {1,2}};
    // sort it according to the second element 
    // if second element is same , then sort 
    // it according to first element but in descending order 

    sort(arr1 , arr1+3 , comp);




    cout<<"Array : ";
    for(auto it : arr){
        cout<<it<<" " ; 
    }

}
int main(){
    //explain_pair();
    //explain_vector();
    //explain_list(); 
    //explain_stack(); 
    // explain_queue(); 
    //explain_PQ() ; 
    //explain_map(); 
    sorting(); 
    return 0;
}