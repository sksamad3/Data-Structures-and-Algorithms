#include<iostream>
using namespace std;
void pattern_1(int n){
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=n ; j++){
            cout<<"*";
        }
        cout<<endl; 
    }
}
void pattern_2(int n){
    for(int i = 1; i<=n ;i++){
        for(int j = 1; j<=i ; j++){
            cout<<"*"; 
        }
        cout<<endl; 
    }
}
void pattern_3(int n){
    for(int i = 1; i<=n ;i++){
        for(int j = 1; j<=i ; j++){
            cout<<j; 
        }
        cout<<endl; 
    }
}
void pattern_4(int n){
    for(int i = 1; i<=n ;i++){
        for(int j = 1; j<=i ; j++){
            cout<<i; 
        }
        cout<<endl; 
    }
}
void pattern_5(int n){
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=(n-i+1); j++){
            cout<<"*"; 
        }
        cout<<endl;
    }
}
void pattern_6(int n){
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=(n-i+1); j++){
            cout<<j; 
        }
        cout<<endl;
    }
}
void pattern_7(int n){
    for(int i = 1; i<=n ; i++){
       
        // Spaces 
        for(int j = 1 ; j<=(n-i); j++){
            cout<<" "; 
        }
        
        // stars 
        for(int j = 1 ; j<=(2*i-1); j++){
            cout<<"*"; 
        }
        // Spaces 
        for(int j = 1 ; j<=(n-i); j++){
            cout<<" "; 
        }
        cout<<endl ; 
    }
}
void pattern_8(int n){
    for(int i = 1 ; i<=n ; i++){

        // spaces 
        for(int j = 1 ; j<=(i-1); j++){
            cout<<" "; 
        }

        for(int j = 1 ; j<=(2*(n-i+1)-1); j++){
            cout<<"*"; 
        }
        cout<<endl; 
    }
}
void pattern_9(int n){
    pattern_7(n); 
    pattern_8(n); 
}
void pattern_10(int n){
    for(int i = 1; i<=(2*n-1); i++){

        int stars = i ; 
        if(i>n) stars = 2*n-i;
        for(int j = 1 ; j<=stars; j++){
            cout<<"*"; 
        }
        cout<<endl;
    }
}
void pattern_11(int n){
    int bit = 0;
    for(int i = 1; i<=n ;i++){
       if(i%2!=0) bit = 1; 
        for(int j = 1; j<=i; j++){
            cout<<bit; 
            bit = 1  - bit ; 
        }
        cout<<endl ; 
    }
}
void pattern_12(int n){
    int spaces = 2*n-2; 
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1; j<=i ; j++){
            cout<<j; 
        }

        // spaces 
        for(int j = 1; j<=spaces; j++){
            cout<<"."; 
        }

        for(int j = i ; j>=1; j--){
            cout<<j;
        }
        spaces-=2; 
        cout<<endl; 
    }
}
void pattern_13(int n){
    int num = 1 ;
    for(int i = 1 ; i<=n ; i++){
        for(int j=1; j<=i ; j++){
            cout<<num; 
            num++; 
        }
        cout<<endl; 
    }
}
void pattern_14(int n){
    for(int i = 1; i<=n ; i++){
        char alpha = 'A'; 
        for(int j = 1; j<=i ; j++){
            cout<<char((alpha+j-1));  
        }
        cout<<endl; 
    }
}
void pattern_15(int n){
    for(int i = 1 ; i<=n ; i++){
        char alpha = 'A'; 
        for(int j = 1 ; j<=(n-i+1); j++){
            cout<<char(alpha+j-1); 
        }
        cout<<endl; 
    }
}
void pattern_16(int n){
    char alpha = 'A'; 
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=i ; j++){
            cout<<alpha; 
        }
        cout<<endl ; 
        alpha++; 
    }
}
void pattern_17(int n){
    for(int i = 1 ; i<=n ; i++){
        char alpha = 'A'; 
        
        //spaces 
        int spaces = n-i ; 
        for(int s = 1; s<=spaces ; s++){
            cout<<" "; 
        }

        // Alphabets 
        int mid = (2*i-1)/2 ; 
        for(int j = 1 ; j<=(2*i-1) ; j++){
            cout<<alpha;
            if(j<=mid) alpha++ ; 
            else alpha--; 
        }

        cout<<endl; 
    }
}
void pattern_18(int n){
    for(int i = 1; i<=n ; i++){
        char alpha = n-i+'A' ; 
        for(int j = 1; j<=i ; j++){
            cout<<alpha; 
            alpha++; 
        }
        cout<<endl; 
    }
}
void pattern_19(int n){
    int spaces = 0;
    for(int i = 1; i<= n ;i++){

        // stars 
        for(int j = 1; j<=(n-i+1); j++){
            cout<<"*"; 
        }

        // spaces
        for(int s = 0 ; s<=spaces ; s++){
            cout<<" "; 
        } 
        

        // starss
        for(int j = 1; j<=(n-i+1); j++){
            cout<<"*"; 
        }
        spaces+=2;
        cout<<endl;  
    }

    // Lower half 
    spaces = 2*n-2; 
    for(int i = 1; i<=n ; i++){
        
        // stars 
        for(int j = 1; j<=i; j++){
            cout<<"*"; 
        }
        
        // spaces 
        for(int s = 1 ; s<=spaces; s++ ){
            cout<<" "; 
        }

        // stars 
        for(int j = 1; j<=i; j++){
            cout<<"*"; 
        }
        spaces-=2; 
        cout<<endl; 
    }
}
void pattern_20(int n){
    for(int i = 1; i<=(2*n-1); i++){

        int stars = i ;
        int spaces = n-i ;  

        //stars
        if(i>n) stars  = 2*n-i;
        for(int j = 1; j<=stars ;j++){
            cout<<"*"; 
        }
        
    
        if(i>n) spaces = i-n; 
        for(int s=1 ; s<=spaces; s++){
            cout<<" " ; 
        }

        if(i>n) spaces = i-n; 
        for(int s=1 ; s<=spaces; s++){
            cout<<" " ; 
        }

        //stars
        if(i>n) stars  = 2*n-i;
        for(int j = 1; j<=stars ;j++){
            cout<<"*"; 
        }

    
        cout<<endl; 
    }  
}
void pattern_21(int n){
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=n ; j++){
            if(i==1 || i==n || j==1 || j==n)  cout<<"*"; 
            else cout<<" "; 
        }
        cout<<endl ;
    }
}
void pattern_22(int n){
    for(int i = 0 ; i<(2*n-1) ; i++){
        for(int j = 0 ; j<(2*n-1); j++){
            int top = i ; 
            int left = j ;
            int right = (2*n-2)-j; 
            int bottom = (2*n-2)-i; 
            cout<<n-min(min(top,left),min(bottom,right)); 
        }
        cout<<endl; 
    }
}
int main(){
    int n ;
    cout<<"Enter a number : "; 
    cin>>n ; 

    // Patterns 
    // pattern_1(n); 
    // pattern_2(n); 
    // pattern_3(n); 
    // pattern_4(n); 
    // pattern_5(n); 
    // pattern_6(n); 
    // pattern_7(n); 
    // pattern_8(n);
    // pattern_9(n);
    // pattern_10(n);
    //  pattern_11(n);
    //  pattern_12(n);
    //  pattern_13(n);
    //  pattern_14(n);
    //  pattern_15(n);
    //  pattern_16(n);
    //  pattern_17(n);
    //  pattern_18(n);
    //  pattern_19(n);
    //  pattern_20(n);
    //  pattern_21(n);
     pattern_22(n);
    return 0;
}