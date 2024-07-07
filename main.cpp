#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter the number: ";
    cin>>a;
    string arr[10]={"one","two","three","four","five","six","seven","eight","nine","greater than nine"};
    
    if(a<=9)
    {
        cout<<"the number youve entered is "<<arr[a-1];
    }
    
    else
    {
        cout<<"the number youve entered is "<<arr[9];
    }
}