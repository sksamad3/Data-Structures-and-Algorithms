#include<iostream>
#include<bits/stdc++.h>
#include<stack> 

using namespace std;
void create_stack(){
    stack<int> st; 
    st.push(1); 
    st.push(5); 
    st.push(54); 
    st.push(56); 
    st.push(7); 
}
void check_top(){
    stack<int> st2 ; 
    st2.push(23);
    st2.push(14);
    st2.push(65);
    st2.push(90);
    st2.push(84);

    cout<<"The top of stack is : "<<st2.top();
}
void swap_stacks(){
    stack<int>evens; 

    evens.push(0); 
    evens.push(2); 
    evens.push(4); 
    evens.push(6); 
    evens.push(8); 
    
    
    stack<int>odds; 
    odds.push(1); 
    odds.push(3); 
    odds.push(5); 
    odds.push(7); 
    odds.push(9);

    odds.swap(evens); 

    // We cant print the stack so we are checking their top to determine 
    // whether they are swapped or not. 
    cout<<"Top of Odds : "<<odds.top()<<endl; 
    cout<<"Top of Evens : "<<evens.top()<<endl; 
}
void remove_elements_from_stack(){
    stack<int> st;
    st.push(1); 
    st.push(5); 
    st.push(54); 
    st.push(56); 
    st.push(7);


    // This deletes the top 3 elements from the stack 
    st.pop();
    st.pop();
    st.pop();

    // So 7 , 56 , 54 gets deleted so top will be 5 
    cout<<"Top of stack : "<<st.top(); 

}
void size_of_stack(){
    stack<int> st;
    st.push(1); 
    st.push(5); 
    st.push(54); 
    st.push(56); 
    st.push(7); 
    
}
int main(){
    //check_top();
    // swap_stacks(); 
    // remove_elements_from_stack(); 
    
    return 0;
}