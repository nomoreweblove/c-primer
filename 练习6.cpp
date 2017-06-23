#include <stdio.h>
int repeat(void);
int main(void)
{
	repeat();repeat();repeat();printf("\n") ;
	repeat();repeat();printf("\n");
	repeat();
	return 0;
}
int repeat(void)
{
	printf("smile!");
	return 0;
}
