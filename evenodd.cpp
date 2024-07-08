
#include <iostream>
using namespace std ;

int main() {
    int i,n,sum=0;
    cout<<"how many no. do you want to enter  : ";
    cin>>n ;
    
    int* arr = new int[n];
    cout<<"\n enter the numbers . \n" ;
    for(i = 0 ; i < n ; i ++){
        cin>>arr[i];
    
    }
    for(i = 0 ; i < n ; i ++){
        if (arr[i]%2 == 0){
            sum = sum + arr[i];
        }
    }    
        
    cout<<"\n the sum of even numbers is :"<<sum;
}