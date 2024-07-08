#include <iostream>
using namespace std ;

int main() {
	int matrix_1[5][5];
	int matrix_2[5][5];
	int matrix_3[5][5];
	int rows , col , i , j;
	cout<<"enter your matrix 1 ";
	cout<<"\n enter the no. of rows(max 5) : " ;
	cin>>rows ;
	
	cout<<"enter the no. of columns(max 5) : " ;
	cin>>col ;
	
	for(i=0;i < rows ;i++){
		for(j=0;j < col ;j++){
			cout << "Element [" << (i +1) << "][" << (j+1) << "]: ";
			cin>>matrix_1[i][j] ;
			
		}
	}
	for(int i = 0 ; i < rows ; i++){
		cout<<"\n" ;
		for(int j = 0 ; j < col ; j++){
			
			
			
			cout<<"   "<<matrix_1[i][j]<<"   " ;
		
	    }
	}
	
	cout<<"enter your matrix 2 ";
	cout<<"\n enter the no. of rows(max 5) : " ;
	cin>>rows ;
	
	cout<<"enter the no. of columns(max 5) : " ;
	cin>>col ;
	
	for(i=0;i < rows ;i++){
		for(j=0;j < col ;j++){
			cout << "Element [" << (i +1) << "][" << (j+1) << "]: ";
			cin>>matrix_2[i][j] ;
			
		}
	}
	for(int i = 0 ; i < rows ; i++){
		cout<<"\n" ;
		for(int j = 0 ; j < col ; j++){
			
			
			
			cout<<"   "<<matrix_2[i][j]<<"   " ;
		
	    }
	}
	
    int n ;
	cout<<"\n if you want to add then enter 1 \n if you want to substract then enter 2 \n" ;
	cin>>n ;
	for(int i = 0 ; i < 5 ; i++){
		for(int j = 0 ; j <5 ; j++){
			if (n == 1){
			
			matrix_3[i][j] = matrix_1[i][j]  +  matrix_2[i][j] ;
			}
			else if (n == 2){
			matrix_3[i][j] = matrix_1[i][j]  -  matrix_2[i][j] ;
				
			}
		}
	}
	for(int i = 0 ; i < rows; i++){
		cout<<"\n" ;
		for(int j = 0 ; j < col ; j++){
			
			
			
			cout<<"   "<<matrix_3[i][j]<<"   " ;
		
	    }
	}
	
}