#include <iostream>
using namespace std;
float twodec(float value)
{
    float val = (int)(value * 100 + 0.5);
    return (float)val / 100;
}

int main() {
	// your code goes here
	int testcases,i; 
    float k1 , k2 , k3 , speed , finalspeed , tim ; 
    cin>>testcases ; 
    for(i = 0 ; i<testcases ; i++){
        cin>>k1>>k2>>k3>>speed ;
        
        finalspeed = k1 * k2 * k3 * speed ;

        cout<<finalspeed<<endl ; 
        tim = twodec(100 / finalspeed) ;
        cout<<tim<<endl ;  
        if(tim < (float)9.58 ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
	return 0;
}