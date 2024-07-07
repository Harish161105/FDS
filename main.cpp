#include <iostream>
using namespace std;

int main() {
	int n,m = 1;
	cout<<"enter the number :" ;
	cin>>n ;
	
	if(n>0){
	
		for(int i = 1 ; i < n +1  ; i++ ){
		m = m*i;
		}		
		cout<<"factorial  = "<<m ;
		
	}
	else	{
		cout<<"enter a positive number";
	}
	return 0;
 }
