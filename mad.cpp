#include <stdio.h>
#include <conio.h>

int main (void){
	
	int sum,counter,N;
	printf("Please enter N.\n");
	scanf("%d",&N);
	
	sum=0;
	
	for(counter=1;counter<=N;counter++){
		sum=counter+sum;
	}
	
	printf("Sum of the First %d natural numbers= %d\n",N,sum);
	printf("Press a button to finish.");
	getch();
	return(0);
	
	
	
}
