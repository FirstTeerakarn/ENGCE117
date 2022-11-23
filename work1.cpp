#include <stdio.h>

int main(void){  
	long int n,i,t=9;
	int sum =0;
	printf("User Input : ");
	scanf("%ld",&n);
	printf("Series = ");
	for (i=1;i<=n;i++)
	{ sum +=t;
	  printf("%ld   ",t);
	  t=t*10+9;
	}
	printf("\nSum = %d \n",sum);
}
