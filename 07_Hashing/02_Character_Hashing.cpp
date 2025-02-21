#include<iostream>
using namespace std;

int main(){
    string s ; 
    cout<<"Enter a string : "; 
    cin>>s ; 

    int hash[26]= {0};

    for(int i = 0 ; i<s.size() ; i++){
        // s[i] means a character from given string 
        // IF s[i] = b ;  'b' -'a' => 98 - 97 => 1 , so control will go to index 1 in hash array and 
        // will update the count of 1st index from 0 to 1; 
        hash[s[i]- 'a']+=1;
    }
    int q ; 
    while(q--){
        char c ; 
        cout<<endl; 
        cout<<"Enter a char whose count you want  : ";
        cin>> c ; 
        cout<<endl; 
        cout<<"count of "<<c <<" is : "<<hash[c-'a'];

        //example: IF user has asked for count of 'a' , so hash[c-'a'] means hash[97 -97] = hash[0] ,
        // so it will print the count present at hash[0]  ,         

    }
    return 0;
}