#include<stdio.h>

main(){
	
	int n,fd,ld;
	
	printf("ENTER A VALUE : ");
	scanf("%d",&n);
	
	ld = n %10;
	
	while(n>=10) {
		n=n/10;
		
	}
	
fd = n;
printf("sum = %d", fd + ld );

	
}
