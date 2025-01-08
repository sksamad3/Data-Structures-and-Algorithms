#include<iostream>
#include<bits/stdc++.h>
#include<utility>
using namespace std;

void create_Pair(int a , int b){

    // Creates the pair
    pair<int,int> p1 = {a,b}; 

    cout<<"First : "<<p1.first<<endl;
    cout<<"Second : "<<p1.second<<endl;
}

void nested_Pair(int a){
    int c , d ;
    cout<<"Enter the value of c : "; 
    cin>>c; 

    cout<<"Enter the value of d : "; 
    cin>>d; 

    pair<int,pair<int,int>>p2 = {a,{c,d}}; 

    cout<<"1st of First element : "<<p2.first<<endl;
    cout<<"1st of Second element : "<<p2.second.first<<endl;
    cout<<"2nd of Second element : "<<p2.second.second<<endl;
}

void array_Of_Pairs(){
    pair<int,int> p4[4] = {{54,57},{56,36},{7,25},{67,54}};

    for(int i = 0; i<4; i++){   
        cout<<"At " << i <<" First element is : "<<p4[i].first <<" " <<"Second element is : "<<p4[i].second<<endl;
    }
}

int main(){
    int a , b; 
    cout<<"Enter the value of a  : "; 
    cin>>a; 

    cout<<"Enter the value of b : "; 
    cin>>b;

    //create_Pair(a,b); 
    //nested_Pair(a);
    array_Of_Pairs(); 
    return 0;
}