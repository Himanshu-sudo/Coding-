#include<iostream>
using namespace std ; 
int main(){
    int thief , police , N , M , testcases , i , x , y , a , b ; 
    cin>>testcases ; 
    for(i = 0 ; i<testcases ; i++){
        cin>>N>>M ; 
        cin>>x>>y ; 
        cin>>a>>b ; 
        thief = N-x + M-y ; 
        police = N-a + M-b - min((N-a) , M-b);
        if(thief <= police){
            cout<<"YES\n" ; 
        }
        else{
            cout<<"NO\n" ; 
        }
    }
    return 0 ; 
}