#include<stdio.h>

main()
{
	int i=1,a;
	
	printf("Enter any number :- ");
	scanf("%d",&a);
	
	while(a >= i){
		
		if(a%2==1){
			printf("%d ",a);
		
		}
		a--;
	}
	
}
