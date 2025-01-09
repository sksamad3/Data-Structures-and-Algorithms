#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void create_Vector(){
    vector<int> v1 = {12 , 43 ,53 ,64 ,65, 679}; 

    cout<<"Vector v1 : "; 
    for(auto it : v1) {
        cout<<it<<" "; 
    }
}
void push_elements_to_vector(){
    vector <int> v2; 
  
    v2.push_back(5);
    v2.emplace_back(10);
    v2.emplace_back(30);
    v2.emplace_back(92);
    v2.emplace_back(85);

    cout<<"Vector v2 : "; 
    for(auto it : v2) {
        cout<<it<<" "; 
    }
}
void practice_Vectors(){
// 1. Create a vector that stores a pair in them
    vector<pair<int, int>> v2;

    // now pushing elements inside vector
    v2.push_back({45,78});
    v2.emplace_back(56, 57); 
    v2.emplace_back(36, 87); 
    v2.emplace_back(23, 47);


// 2. Create a vector of specified size

  // Vector of size 5 
    vector<int> v3(5);


// 3. Create a vector that stores 5 instances of 100 

    // this vector will have 5 instances of 100 , means there will be 5 times 100 stored in vector
    // 5 is the size of the vector and 100 is the content filled in that vector 
    vector<int> v4(5,100);


// 4. Create a vector and copy it in a new vector

    vector<int> v5(5,20);
    vector<int> v6(v5); 


// 5. Print the last element of the vector 
    
    cout<<"Last element of vector v6 is : "<<v6.back();
}
void iterators_on_vectors(vector<int>& vec){

    // Printing the vector 
    cout<<"Vector : ";
    for(auto it : vec){
        cout<<it<<" "; 
    }

    cout<<endl; 
    cout<<endl; 
    // 1. begin() iterator
   vector<int>::iterator it = vec.begin();
   cout<<"begin() : "<<*(it)<<endl; 

   // 2. end() iterator
   vector<int>::iterator it1 = vec.end(); 
   it1--; 
   cout<<"end()  : "<<*(it1)<<endl; 
   
   // 3. rend() iterator (reverse iterator)  
   vector<int>::reverse_iterator it7 = vec.rend(); 
   --it7;
   cout<<"rend() : "<<*(it7)<<endl; 
   
   // 4. rbegin() iterator (reverse iterator) 
   vector<int>::reverse_iterator it5 = vec.rbegin();
   cout<<"rbegin : "<<*(it5) ;
}
void print_vector(vector<int>& v){
    
    // 1st way to print vectors 
    cout<<"Vector v : "; 
    for(vector<int>::iterator it = v.begin() ; it!=v.end() ; it++){
        cout<<*(it)<<" "; 
    }

    // 2nd way to print vectors
    cout<<"Vector v : "; 
    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" "; 
    }

    // 3rd way to print vectors using for-each loop 
    cout<<"Vector v : "; 
    for(auto it : v){
        cout<<it<<" "; 
    }
}
void erase_elements_from_vectors(vector<int>& vec){

    // 1. Provide the iterator position to delete the element 
    // vec.erase(vec.begin()+1);



    // 2. Delete range of elements from a vector

    // we can give range , start and end , start is included but end is  not included 
    // erase(start , end); 
    vec.erase(vec.begin() , vec.end()-2); // 45 ,54 ,100 , 98, 906   output : 45 54 100 will be deleted 

    // 3. Remove the last element from a vector 
    vec.pop_back();
    
}
void insert_elements_into_vectors(vector<int>& vec){
    
    // 1. Insert elements to a vector at a specified position and providing the element to insert 
    vec.insert(vec.begin() , 45);


    // 2. Inserting multiple elements into  a vector 
    
    // Inserting 2 instances of 200 at 2nd index
    vec.insert(vec.begin()+2, 2 , 200);


    // 3. Inserting a range of elements into a vector 
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {6, 7, 8}; 

    // This inserts entire vec2 vector in the vec1 at the position where 3 is present
    vec1.insert(vec1.begin()+2 , vec2.begin() , vec2.end());
    cout<<"ELements of vector : ";
    // Vector will be : 1 2 6 7 8 3 4 5
}
void size_of_vector(vector<int>& vec){
    cout<<"Size of the vector is : "<<vec.size();
}
void swap_two_vectors(vector<int>& v1 , vector<int>& v2){
    swap(v1 , v2);

    cout<<"v1 : ";
    for(auto it : v1) cout<<it<<" ";
    
    cout<<endl; 

    cout<<"v2 : "; 
    for(auto it : v2) cout<<it<<" "; 
}
void clear_vector(vector<int>& v1){
    // This will clear the vector
    v1.clear();
}
void check_empty_vector(vector<int>& vec){
    if(vec.empty()) cout<<"Vector is empty ";
    else cout<<"Vector contains some element";
}


int main(){
    //create_Vector();
    //push_elements_to_vector();

    vector<int> myv = {45, 54, 100 , 98 , 906};
    vector<int> myv2 = {2, 4, 6, 8 , 10}; // Comment out this when you will use swap_two_vectors(myv,myv2) functions
   
    //iterators_on_vectors(myv); 
    //print_vector(myv);
    // erase_elements_from_vectors(myv);
    // insert_elements_into_vectors(myv);
    // size_of_vector(myv);
    // swap_two_vectors(myv,myv2);
    //clear_vector(myv2);
    //check_empty_vector(myv2);
    return 0;
}