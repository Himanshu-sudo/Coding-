#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcases , i ,j , length , noconsec , count , check ; 
    cin>>testcases ; 
    for(i = 0 ; i<testcases ; i++){
        count = 0 ; 
        check = 0 ;
        cin>>length>>noconsec ; 
         char strin[length] ; 
         for( j = 0 ; j<length ; j++){
            cin>>strin[j] ; 
        }
        for(j = 0 ; j<length ; j++){
            if(strin[j] == '*'){
                count = count + 1 ; 
                check = check + 1 ;
            }
            else{
                if(check >= noconsec){
                    break ; 
                }
                else{
                    count = 0 ; 
                    check = 0 ; 
                }
            }
        }
        if(count >= noconsec){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl; 
        }

    }
	return 0;
}