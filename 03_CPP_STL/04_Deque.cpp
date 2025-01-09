#include<iostream>
#include<bits/stdc++.h>
#include<deque>
using namespace std;

void create_Deque(){
    deque<char> d; 
    d.push_back('a');
    d.push_back('b'); 
    d.push_back('c');
    d.push_back('d'); 

    cout<<"Deque : "; 
    for(auto it : d){
        cout<<it<<" ";
    }

}
void add_elements_from_front(){
    deque<int> de ; 
    de.push_front(10); 
    de.push_front(9); 
    de.push_front(8); 
    de.push_front(7); 
    de.push_front(6); 
    de.push_front(5); 
    de.push_front(4); 
    de.push_front(3); 
    de.push_front(2); 
    de.push_front(1); 
    de.push_front(0); 

    cout<<endl; 
    cout<<"Numbers : "; 
    for(auto it : de){
        cout<<it <<" "; 
    }
}
void erasing_elements_from_deque(){
    
    deque<char> d ; 
    d.push_back('a'); 
    d.push_back('b'); 
    d.push_back('c');
    d.push_back('d'); 
    d.push_back('k'); 
    d.push_back('v'); 

    // 1. Erase the element at a specified position
    deque<char>::iterator it = d.begin();
    advance(it,2); // Moves the iterator 2 step forward
    d.erase(it);

    // 2. Erase a rangle of elements from a deque
    // Erase b , c , d from deque

    deque<char>::iterator it1 = d.begin();
    advance(it1,1);
    deque<char>::iterator it2 = d.begin();
    advance(it2,4);

    d.erase(it1,it2); // b , c , d wil b deleted

    // 3. Erase the last element from the deque
    d.pop_back();
}
void inserting_elements_in_deque(){
    deque<char> alphabets = {'a' , 'b' , 'c' , 'd' , 'f'} ;

    // 1. Insert elements into the existing queue at a specified position 
    deque<char>::iterator it = alphabets.begin(); 
    advance(it,3); // Moves the iterator by 3 , now iterator is at 'd' 
    alphabets.insert(it,'e');

    // Insert a part of deque into another deque at a position

    // Insert a ,e , i , o inside alphabets at the end; 
    deque<char> vowels = {'a' , 'e' , 'i' , 'o' , 'u'} ;
    deque<char> alpha = {'a' , 'b' , 'c' , 'd' , 'f'} ;
    
    deque<char>::iterator vowelstart = vowels.begin();
    deque<char>::iterator voweend = vowels.begin();
    advance(voweend,4); // it will move iterator on  'u' but end is not included so only till 'o' will be considered

    // Create iterator for deque in which vowels will be inserted
    deque<char>::iterator alphaend = alpha.end();
    alphaend--; // this brings to last element of alphabets deque because there we will insert vowels

    alpha.insert(alphaend,vowelstart,voweend);
    
    cout<<endl; 
    cout<<"Deque : ";
    for(auto it : alpha) cout<<it<<" ";
}
void practice_Deque(){
    
    // 1. Create a deque containing 5 instances of "Orange"
    deque<string> d(5,"Orange"); 

}
void swapping_deques(){
    deque<int> odds = {1 ,3, 5, 7 , 9 , 11}; 
    deque<int> evens = {0 , 2 ,4 ,6 , 8, 10}; 

    odds.swap(evens);

    cout<<endl; 
    cout<<"Odds :  ";
    for(auto it :  odds) cout<<it<<" "; 

    cout<<endl; 
    cout<<"Evens : ";
    for(auto it : evens) cout<<it<<" "; 



}
void clear_deque(deque<string>& d){
    d.clear();
}
void check_if_empty_deque(deque<string>& d){
    if(d.empty()) cout<<"Deque is empty ";
    else cout<<"Deque is not empty ";
}


int main(){
    //create_Deque();
    // add_elements_from_front();
    // erasing_elements_from_deque();
    // inserting_elements_in_deque();
    // swapping_deques(); 

    deque<string> d_names = {"Samad" , "Marie" , "Paul" , "Julie" , "Marc"} ;
    // clear_deque(d_names);
    check_if_empty_deque(d_names);

    return 0;
}