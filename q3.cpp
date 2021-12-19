#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t;
    while(t--){
        long long int n ;
        cin>> n ;
        long long  int x =0;
        
        for(int i =1 ; i<= sqrt(n-1) ; i++ ){
            
            if( (n-1)%i == 0 ){
                if((n-1)/i==i){
                    x+=1;
                }
                else {
                    x+=2;
                }
                
            
        }
        
    }
    cout<< x << endl;
    }
}