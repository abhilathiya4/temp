#include<stdio.h>

main(){
	
	int i = 1 ;
	int n,c = 0;
	
	printf("enter a number :  ");
	scanf("%d",&n);
	
	while(n!=0){
		
		n = n/10;
		c++;
	}
		
	printf("number of digit = %d",c);
	
}
	
