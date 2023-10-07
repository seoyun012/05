#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;
	int a;
	int trial=0;

	do
	{
	printf("Guess a number: ");
	scanf("%i", &a);
	
	if (a<answer)
	printf("Low!\n");
	
	else if (a>answer)
	printf("High!\n");
	
	trial=trial+1;
	}
	
	while(a!=answer);
	
	printf("Congratulation! trials: %i", trial);
	
	return 0;
}
