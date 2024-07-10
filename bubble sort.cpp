#include<iostream>
using namespace std;
 
int main(){
     int array[5] ={4,5,6,7,34};
     
    
    for (int i = 0 ; i < 4; i++){
    	for (int j = 0 ; j < 4; j++){
    		if(array[j]>array[j+1]){
    			int temp = array[j];
    			array[j]=array[j+1];
    			array[j+1]=temp;
			}
		}
	}
	
	for (int i = 0 ; i <5 ; i++){
		cout<<array[i]<< " " ;
	}
}     
     
