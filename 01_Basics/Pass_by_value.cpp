#include<iostream>
using namespace std;
// This is known as pass by value in which when a function is called and passed some parameters , and if the function takes the copy
// of the parameter and so some processing without changing the original value at its address then such a concept is called 
// pass by value , variables are by default passed as values to functions. 
void doSomething(int num){
    cout<<num<<endl;
    num+=5; 
    cout<<num<<endl; 
    num+=5; 
    cout<<num<<endl; 
    num+=5; 
    cout<<num<<endl; 
}

int main(){
    int num = 5; 
    doSomething(num);
    cout<<"Value of num outside function : "<<num<<endl;
    return 0;
}