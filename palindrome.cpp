#include <iostream>
using namespace std ;
int main() {
    int a,count=0;
    cout<<"how many letters does your word has : "<<endl ;
    cin>>a ;
    
    char* word = new char[a];
    cout<<"enter your word"<<endl ;
    for(int i = 0 ; i < a ; i++){
        cin>>word[i];
    }
    
    for(int i = 0 , j = (a-1) ; i < a , j>=0 ; i++ ,j-- ){
        if(word[i]==word[j]){
            count = count + 1 ;
        }
    }
    if(count == a){
        cout<<"the entered word is a palindrome";
    }    
    else{
        cout<<"the entered word is not a palindrome";
    }    
    
    
}