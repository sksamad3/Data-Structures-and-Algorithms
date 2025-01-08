#include<iostream>
#include<bits/stdc++.h>
#include<list> 

using namespace std;
void create_Lists(){
    list<string>names ;
    names.push_back("Samad"); 
    names.push_back("Melike"); 
    names.push_back("Hamza"); 
    names.push_back("Omar"); 
    names.push_front("Ilaf"); 
    names.push_back("Fatima"); 

    cout<<"List : "; 
    for(auto it : names){
        cout<<it<<" ";
    }
    cout<<endl; 

}
void practice_Lists(){

    // 1. Create a list containing 5 instances of 20 
    list<int>(5,20);

    // 2.  Initialize a list 
    list<string> fruits = {"orange", "Apple" , "Banana" , "Mango", "Grapes"};

    // 3. Print the front and the last element of list
    cout<<endl; 
    cout<<"Front : "<<fruits.front()<<endl; 
    cout<<"Back : "<<fruits.back()<<endl;

    // 4. Adds 2 occurences of Onions at the 3rd position
    list<string>::iterator pos = fruits.begin();
    advance(pos, 2);
    fruits.insert(pos , 2 , "Onions");

    // 5. Adding a part of fruits into veg list 
    list<string> veg = {"Carrot" , "Tomato" , "Potato" ,"Cucumber" , "Brinjal"}; 
    
    list<string>::iterator start = fruits.begin();
    list<string>::iterator end = fruits.begin();

    advance(end,3);
    veg.insert(veg.end() , start, end);
    cout<<endl;
    cout<<"Veg updated : "; 
    // The list will be like "Carrot" , "Tomato" , "Potato" ,"Cucumber" , "Brinjal" "orange", "Apple" , "Banana"

    // 6. Insert the veg list into a newly created list 
    list<string>newlist ;
    newlist.insert(newlist.begin(),veg.begin(),veg.end());

    cout<<endl; 
    cout<<"Newlist: ";
    for(auto it : newlist){
        cout<<it<<" ";
    }

}
void printing_Lists(list<int>& l){

    // 1. 1st way to print lists
    cout<<"List : "; 
    for(list<int>::iterator it = l.begin(); it!=l.end(); it++){
        cout<<*(it)<<" ";
    }

    // 2. 2nd way to print lists 
    cout<<"List : "; 
    for(auto it = l.begin(); it!=l.end(); it++){
        cout<<*(it)<<" ";
    }

    //3. 3rd way to print lists 
    cout<<"List : "; 
    for(auto it : l){
        cout<<it<<" ";
    }
}
void erasing_elements_from_lists(){
    
     list<string> veg = {"Carrot" , "Tomato" , "Potato" ,"Cucumber" , "Brinjal"}; 

    // 1. Erasing the element at a specified position 
    list<string>::iterator it=veg.begin(); 
    advance(it,2);  // Moves the iterators forward by 2 positions
    veg.erase(it);

    // 2. Erasing a range of elements 
    list<string>::iterator start  = veg.begin(); 
    list<string>::iterator end  = veg.begin(); 
    advance(start , 1);  // moves start iterator by 1 position
    advance(end , 3) ;   // moves end iterator by 3 positions
    veg.erase(start,end);  // Tomato and potato will be erased 

    // 3. Erasing the last elements 
    veg.pop_back();


}
void copying_list(){

    list<string> fruits = {"orange", "Apple" , "Banana" , "Mango", "Grapes"};
    list<string> veg = {"Carrot" , "Tomato" , "Potato" ,"Cucumber" , "Brinjal"}; 
    
    list<string>newlist ;
    newlist.insert(newlist.begin(),veg.begin(),veg.end());

    cout<<endl; 
    cout<<"Newlist: ";
    for(auto it : newlist){
        cout<<it<<" ";
    }

}
void size_of_list(list<int>& l){
    cout<<endl;
    cout<<"Size of the list is : "<<l.size();
}
void swapping_lists(list<string>& l1 , list<string>& l2){
    l1.swap(l2);

    cout<<endl; 
    cout<<"Fruits : ";
    for(auto it : l1) cout<<it<<" ";

    cout<<endl; 
    cout<<"Vegetables : ";
    for(auto it : l2) cout<<it<<" ";
}
void clear_lists(list<string>& l){
    l.clear();
}
void check_list_empty(list<string>& l){
    if(l.empty()) cout<<"List is empty !";
    else cout<<"List have some elements";
}

int main(){
    create_Lists();
    
    practice_Lists();
    
    list<int> l = {1 ,2 ,3, 4, 5, 6,7, 8, 9};
    printing_Lists(l);
    
    erasing_elements_from_lists();

    list<string> fruits = {"orange", "Apple" , "Banana" , "Mango", "Grapes"};
    list<string> veg = {"Carrot" , "Tomato" , "Potato" ,"Cucumber" , "Brinjal"}; 
    swapping_lists(fruits,veg);
    
    clear_lists(fruits);
    check_list_empty(fruits);
    return 0;
}