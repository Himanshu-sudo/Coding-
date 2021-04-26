#include <iostream>
using namespace std;

int main() {
	int test , X , Y , N , M , i , j , k ,countx , county ;
    
    cin>>test ; 
    for(i = 0 ; i<test ; i++){
        cin>>N>>M ; 
        cin>>X>>Y;
        if(X<1 && X > M && Y<1 && Y>M && M<2 && ((X-1)+Y)>M){
            break ; 
        }
        char arr[M];
        for(j = 0 ; j<N ; j++){
            countx = 0 ; 
            county = 0 ; 
           for(k = 0 ; k<M ; k++){
               cin>>arr[k];
           }
           for(k = 0 ; k<M ; k++){
               if(arr[k] == 'F'){
                   countx++ ; 
               }
               if(arr[k] == 'P'){
                   county++ ; 
               }

           }
           if(countx >= X || (countx == (X-1) && county >= Y)){
               cout<<"1";
           }
           else{
               cout<<"0" ; 
           }
           
        }
        cout<<"\n" ; 
    }
	return 0;
}
