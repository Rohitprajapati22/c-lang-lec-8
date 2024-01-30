#include<stdio.h>

main()
{
	int i,a;
	
	printf("Enter the first number :- ");
	scanf("%d",&i);
	printf("Enter the second number :- ");
	scanf("%d",&a);
	
	while(i <= a){
		if(i%4==0){
			printf("%d ",i);
		
		}
		i++;
	}
	
}
