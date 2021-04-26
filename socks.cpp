#include <iostream>
using namespace std ; 
int main(){
    int a ,b ,c ;
    
        cout<<"Enter the number between 1 and 10 for a b c";
        cin>>a>>b>>c ; 
        
    if(a>0 && a<11 && b>0 && b<11 && c>0 && c<11){
    if(a==b || b==c || c==a){
        cout<<"YES" ; 
    }else{
        cout<<"NO";
    }
    }else{
        cout<<"INVALID INPUT";
    }
    

    return 0 ; 
}