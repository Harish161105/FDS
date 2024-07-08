
#include <iostream>
using namespace std ;

int main() {
    int a , i , count = 0;
    cout<<"enter a number to check if it is prime or not :" ;
    cin>>a ;
    
    for(i=2 ; i<a ; i++){
        if(a%i == 0){
            count += 1;
        }
        
    }
    
    if (count== 0) {
        cout<<"it is a prime number";
        
    }
    else {
        cout<<"it isnt a prime number";
    }
}