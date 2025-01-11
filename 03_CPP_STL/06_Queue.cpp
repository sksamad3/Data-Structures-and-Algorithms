#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

// Note : Queue allows only limited operations to perform. 
// The operations are :
/*1. Insertion : push()  - Inserts elements at the back
  2. Deletion  : pop() - Removes the front element
  3. Access    : front()  and back() 
  4. Size      : size()
  5. chk if empty : empty()

*/

void create_Queue(){
    queue<int> q1; 

    q1.push(12); 
    q1.push(13); 
    q1.push(14); 
    q1.push(15); 
    q1.push(16); 
    q1.push(20);
}
void push_elements(){

    // Create queue and push elements and then print its first and last element
    queue<int> q2; 
    q2.push(12); 
    q2.push(13); 
    q2.push(14); 
    q2.push(15); 
    q2.push(16); 
    q2.push(20);


    cout<<"Front element : "<<q2.front()<<endl;
    cout<<"Last element : "<<q2.back()<<endl; 
    }
void remove_elements(){
    queue<int> q2; 
    q2.push(12); 
    q2.push(13); 
    q2.push(14); 
    q2.push(15); 
    q2.push(16); 
    q2.push(20);

    q2.pop();
    q2.pop();
    q2.pop();
    q2.pop();
}
void print_Queue(){
    // We can't directly initialize and print a queue , because squeue is an adapter container that works on top of other containers (like deque or list). It does not provide constructors to initialize it directly with elements.

    // There are 2 ways 

    // 1. Create an underlying container and use it for queue 
    //Create a deque and using it construct a queue and u can display its elements by printing the front and popping them.

    // 2. You can simply create a queue and push elements to it and then run a for-each loop and print the front and then pop the element . 

    // Note : pop() function pops the first element from the queue.

    // 1. 1st way to print the queue
    // Initialize a deque with elements
    deque<int> dq = {1, 2, 3, 4, 5};

    // Create a queue using the deque
    queue<int> q(dq);
    cout<<endl; 


    // Display and remove elements from the queue
    cout<<"Queue : "; 
    while (!q.empty()) {
        cout << q.front() << " "; // Access the front element
        q.pop();                  // Remove the front element
    }


    // 2. 2nd way to print the queue 
    cout<<endl; 
    queue<int> q1 ; 
    q1.push(1) ; 
    q1.push(3) ; 
    q1.push(6) ; 
    q1.push(5) ; 

    cout<<endl;
    cout<<"Queue : "; 
    while(!q1.empty()){
        cout<<q1.front()<<" "; 
        q1.pop(); 
    }
    // Both the approaches are correct. 
}
void size_of_the_Queue(){
    queue<int> q1 ; 
    q1.push(1) ; 
    q1.push(3) ; 
    q1.push(6) ; 
    q1.push(5) ;
    cout<<endl; 
    cout<<"Size of the queue is : "<<q1.size(); 
}
void check_if_empty_Queue(){
    queue<int> q1 ; 
    q1.push(1) ; 
    q1.push(3) ; 
    q1.push(6) ; 
    q1.push(5) ; 

    if(q1.empty()) cout<<"Queue is empty !"; 
    else cout<<"Queue is not empty !";
}

int main(){
    push_elements();
    print_Queue(); 
    size_of_the_Queue(); 
    check_if_empty_Queue(); 

    return 0;
}