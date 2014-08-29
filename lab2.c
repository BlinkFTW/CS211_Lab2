#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

int gEven(int val);	//Function prototype

int main() {
	int i;	//counting variable 
	int joe, frank, bob;
	int tst;	//Test var for corner cases in Part C
  
	// Part B
	joe = 56*29;
	bob = joe/3;
	frank = joe-bob;

	printf("Joe is %d\n Bob is %d\n Frank is %d\n", joe,bob,frank);

	bob = frank;
	joe = frank;

	printf("Joe is %d\n Bob is %d\n Frank is %d\n", joe,bob,frank);

	printf("\n\nPlease enter a new value for Joe: ");
	scanf("%d",&joe);

	for(i=0;i<joe;i++){
		printf("Bob is: %d\n", bob);
	}

	//Part C
	printf("\n");
	for(i=0;i<10;i++){
		tst = gEven(i);

		printf("for i = %d, gEven returns: %d\n",i,tst);
	}	
  return 0;
}

// gEven function definition
int gEven(int val){
	int eve;

	if(val%2 == 0){
		eve = val-2;
	}
	else{
		eve = val-1;
	}
	return eve;
}
