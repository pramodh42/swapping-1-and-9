
#include<stdio.h>  

int main()    

{    
		int a=1, b=9;      
		
		printf("Before swap a=%d b=%d",a,b);      
		
	  
		a=a+b;//10
		b=a-b;// 1 
		
		a=a-b;//9   
		
		printf("\n After swap a=%d b=%d",a,b);    
		
		return 0;  
}   
