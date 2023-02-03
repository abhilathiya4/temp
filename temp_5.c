#include<stdio.h>

main(){
	
	int i = 1,n,f=1;
	
	printf("enter value : ");
	
	scanf(" %d",&n);
	
	while(n>=i){
		
		f = f * n;
		n-- ;
	}
 	printf("%d",f);

	
}
