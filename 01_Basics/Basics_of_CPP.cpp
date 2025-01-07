#include <iostream>
#include <bits/stdc++.h>  // This includes all the libraries of C++ , now there's no need to define any lib 
using namespace std; 

void cpp_print(){
    // cout in cpp is used to print the set of strings or variables. 
    cout<<"This is Shaikh Samad" <<endl <<"Learning DSA. "; 
}
void cpp_user_input(){
    // Initializing the variables 
    int x;

    cout<<"Enter the value of x : "; 
    cin>>x; // cin is used to take the value from user and store in the specified variable 
    cout<<"Value of x is : "<<x<<endl; 
}
void cpp_variables(){
    // Range of Datatypes 
    /*
    int =>              -10^9   to       10^9
    long =>             -10^12   to      10^12
    long long  =>      -10^18    to      10^18
    */
    
    
    
    
    // These datatypes will be used for solving enough problems for DSA. 
    int a = 5; 
    long b = 400000; 
    long long c = 1265433434; 
    string s = "Samad"; 

    // Other Datatypes includes 
    float d = 5.6; 
    float e = 5;  // This will store 5 as 5.0 
    double f = 34.99999; 

    // So these are our basic datatypes in C++ 
    // Lets print them 

    cout<<"Value of int(a) :       "<<a  <<endl; 
    cout<<"Value of long(b) :      "<<b <<endl; 
    cout<<"Value of long long(c) : "<<c <<endl; 
    cout<<"Value of float(d) :     "<<d  <<endl; 
    cout<<"Value of float(e) :     "<<e  <<endl; 
    cout<<"Value of double(f) :    "<<f  <<endl; 
    cout<<"Value of string(s) : "<<s <<endl;
cout<<endl; 
cout<<endl; 

    cout<<"Size of int(a) :       "<<sizeof(a)  <<endl; 
    cout<<"Size of long(b) :      "<<sizeof(b) <<endl; 
    cout<<"Size of long long(c) : "<<sizeof(c) <<endl; 
    cout<<"Size of float(d) :     "<<sizeof(d)  <<endl; 
    cout<<"Size of float(e) :     "<<sizeof(e)  <<endl; 
    cout<<"Size of double(f) :    "<<sizeof(f)  <<endl; 
    cout<<"Size of string(s) : "<<sizeof(s) <<endl; 
}
void cpp_string(){


    // lets say we want to print "Hey Striver " but if we store it in a single string variable then it will only pick any string till space  , here by using this technique i got Hey only as output 
    // Problem
    string s1; 
    cout<<"Enter a string :  " ; 
    cin>>s1; 

    cout<<s1; 


    // SOlution 1 
    // Another approach is very simple that i can use two string variables to store 
    // This approach worked well as intended but there's a much simple solution than using 2 string variables 
    // But what if i tell you to use only one variable and print the entire string. 
    string t1 , t2; 
    cout<<"Enter a string : ";
    cin>>t1 >>t2; 

    cout<<t1 <<" "<<t2; 


    // Solution 2 
     // This is the more optimal solution as it requires only one variable and uses a function getline()
    string r1 ; 
    cout<<"Enter a string : "; 
    getline(cin,r1);
    cout<<r1;  
}
void cpp_char(){
    // If we want to store characters then we can use character datatype. 
    // There are 256 characters in English Dictionary

    char ch  ; 
    cout<<"Enter a character : "; 
    cin>>ch; 
    cout<<"Character is : "<<ch<<endl;
}
void cpp_if_else(){
    // Write a program that takes an input of age 
    // and prints if you are adult or not. 
    // >=18 print adult 
    // <18  print not an adult;

    int age; 
    cout<<"Enter your age : "; 
    cin>>age; 

    if(age>=18){
        cout<<"You are an adult"; 
    }
    else{
        cout<<"You are not an adult.";
    }
}
void cpp_nested_if_else(){
    /*
    A School has  following rules for grading system 
    a.  Below 25 - F
    b.  25 to 44 - E
    c.  45 to 49 - D
    d.  50 to 59 - C
    e.  60 to 79  - B 
    f.  80 to 100 -A 
    Ask user to enter marks and print the corresponding grade. 
    */

   int marks ; 
   cout<<"Enter the marks : "; 
   cin>>marks; 

   if(marks<25){
    cout<<"F"; 
   }
   else if(marks<=44){
    cout<<"E";
   }
   else if(marks<50){
    cout<<"D"; 
   }
   else if(marks<60){
    cout<<"C"; 
   }
   else if(marks<80){
    cout<<"B"; 
   }
   else{
    cout<<"A";
   }


   // Problem 2 
   /* Take the age from the user and decide accordingly 
   1. If age < 18 ,
      print -> Not eligible for job. 
   2. If age >= 18  
      print-> "eligible for job."
   3. If age >= 55 and age <= 57,
      print-> "eligible for job , but retirement soon. "
   4. If age > 57 , 
      print-> "retirement time."
   */

  int age; 
  cout<<"Enter your age : "; 
  cin>>age; 

  if(age<18){
    cout<<"Not eligible for job. "; 
  }
  else if(age<=54){
    cout<<"Eligible for job "; 
  }
  else if(age <=57){
    cout<<"Eligible for job , but retirement soon.";
  }
  else{
    cout<<"Retirement time. "; 
  }
}
void cpp_switch_case(){
    /*
    Take the day no. and print the correspoding day 
    for 1 print Monday
    for 2 print Tuesday and so on for 7 print Sunday
    */

   int day; 
   cout<<"Enter the day no. : "; 
   cin>>day ; 


   /*In switch case if we entered lets say 3 that is Wednesday then the control will directly jump to case 3
   without matching with case 1 and will execute all the cases from case 3 till default case , so in order to avoid such 
   behaviour we use the break statement in C++ ,  break statement breaks the switch case and executes the further code. */
   switch(day){

    case 1: 
      cout<<"Monday "; 
      break; 
    case 2: 
      cout<<"Tuesday "; 
      break; 
    case 3: 
      cout<<"Wednesday "; 
      break; 
    case 4: 
      cout<<"Thursday "; 
      break; 
    case 5: 
      cout<<"Friday "; 
      break; 
    case 6: 
      cout<<"Saturday "; 
      break; 
    case 7: 
      cout<<"Sunday "; 
      break; 
    default : 
      cout<<"Invalid "; 
      cout<<"Invalid check "; 
      break; 
      
   }
}
void cpp_arrays(){
    /*
    What are Arrays and when do we use arrays ? 
    When we have similar data type storing multiple times then in such case we can use Arrays. 
    Let's say we have data as : 5 , 7 , 8 ,10 , 20;  How we will store them we can use 5 variables and store them . 
    But what if we have data having 50 entries then we can't create 50 variables because naming 50 variables will take a lot of time
    and efforts. One thing we surely know that the type of the data is same that is i.e. integer. 
    */

   // We have data containing 4 integers . This is one way. 
   /*int a ,b , c ,d ; 
   cin>>a >>b>>c>>d; */

   // But what if we have data of 50 such similar entries then arrays come handy 
   // Important Note : If the array size is 5 then the last index will be n-1 , i.e. 5-1 = 4; 
   int arr[5] ; 

  // Remember these points 
  // If you access the 3rd index this means the 4th element is accessed 
  // Similarly if you access the 0th index this means the 1st element is accessed. 
   cout<<"Enter the elements in array separated by spaces : "; 
   cin>>arr[0] >>arr[1] >>arr[2] >>arr[3]>>arr[4];

   
   // We can modify the elements in an array
   arr[3] += 100 ;                               // If array elements are : 1 2 3 4 5 
   cout<<"Fourth element of array is :  "<<arr[3] ; // Output  : 104

// The address of the array is very randomized and it cant be stated properly , an array can be stored anywhere in the cpu 
// Array is stored as contiguously which means i am not sure about the address of the first element , but if i get the address of the 
// first element then i can find the address of the rest of the elements , like we can calculate by a formula. 
// If we know the address of the first element then the second element will be just next to the first element, fourth element will be just 
// next to the third element and so on... 
// This is how exactly array works. 

// Remember : Array element are stored consecutive memory address but I am not sure about where the first element is stored , it can 
// be at any randomized location. Very very important point to remember about arrays. 
}
void cpp_multidimensional_arrays(){
  // Multidimensional arrays are called as Array of arrays
  // Its an array which contain arrays in himself , so its like rows and columns. 

  // Here we have just declared the multidimensional array of 3 rows and 5 columns for each row. that 3 X 5 matrix 
  // We have assigned 78 to row : 3 and column : 5 , if we tried to access other index , a garbage value will be displayed. 

  // Multidimensional arrays are used for solving a bunch of matrix and graph problems so we will use them in future. 
  int arr[3][5]; 

  arr[3][5] = 78 ; 

  cout<<"Element : "<<arr[3][2]; 
}
void cpp_strings_2(){
  // Strings are basically characters at every index that makes up an entire string. 
  // We know what are strings uptil now , lets understand more about it. 
  // so string data is also stored in terms of indexes ,
  string name = "Samad"; 
  cout<<name[2]<<endl;

  // You can also find length of the string 
  int len = name.size(); 
  cout<<"Length of the string is : "<<len<<endl; 

  // We can also modify the string 
  // One important point is that the we use single quotes to modify string becoz a string containt many single single chars 
  // Always use ('') single quotes while modifying a string using indices. 
  name[4] = 's'; 

  cout<<"My name is : "<<name<<endl; // Output : Samas  , because we changed the last character 


  // Printing the last character of the string 
  cout<<"The last character of my name is : "<<name[len-1]; 

}
void cpp_loops(){
  // Loops helps in doing the repetitive task like doing some repeating calculations / printing etc 

  // THis is the basic for loop , 
  // In for loop , the initialization runs for once , and comparison (i<10) and increment runs for every iteration. 
  // This is one way. 
  /*for(int i = 0 ; i<10 ; i++){
    cout<<"Samad"<<endl; 
  }*/


  /*int i; // at last the final value of i will be 6 , when i value will be 6 , the condition will become false and loop will terminate.
  for(i=1 ; i<=5 ; i++){
    cout<<"Looping" <<" " <<i <<endl; 
  }
  cout<<"Loop terminated successfully "<<endl;
  cout<<"Final value of i : "<<i; */




  // While loop 
 // Initialises once -> check -> print -> increment , check -> then print -> increment  , check....
  int j = 1; 
  while(j<=5){
    cout<<"Processing. "<<endl;
    j++; 
  }



// Do- while loop 
// Do while loop is used , whenever you dont have your value of i or its user dependent , and you want you line of code (loc)
// to be executed atleast once , yes atleast once then do while loop comes in. 
// Even if the condition is false the do while loop executes the line of code once and then check the conditions 

int k = 5; 
do{
  cout<<"Printing"<<endl; // Only for once this will be printed because condition is false.  
  k--;
}while(k>5);

}
void cpp_functions(){
  // Functions are set of code which performs something for you
  // Functions are used to modularize your code
  // Functions are used to increase readability 
  // Functions are used to use same code multiple times 

  // Types of functions 
  // These are major types of functions used. 
  /*
  1. Void 
  2. return
  3. parameterised
  4. non parameterised


  // Understanding functions is easy , so ill just write the topics on which functions are created , you create them later.
  1. A function that take neither any  parameter nor returns something and prints a name (void , non parameterised) function
  2. A function that takes name as a parameter and prints the name but doesn't return anything ( void parameterised) function. 
  3. A function that two integer numbers and returns their sum (int type function , parameterised , returns sum) function. 

  // You create them all by watching the striver video of C++ basics in one shot. Good Luck ! 
  */


}

int main(){
    //cpp_print();
    //cpp_user_input(); 
    //cpp_variables(); 
    //cpp_string(); 
    //cpp_char();
    //cpp_if_else(); 
    //cpp_nested_if_else(); 
    //cpp_switch_case(); 
    //cpp_arrays(); 
    //cpp_multidimensional_arrays(); 
    //cpp_strings_2(); 
    cpp_loops(); 
    

    return 0; 
}