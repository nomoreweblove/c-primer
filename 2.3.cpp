//双函数 

#include <stdio.h>
void butler(void); //函数原型 也就是声明 声明后面要用到 
int main (void)
{
	printf("i will summon the butler function.\n");
	butler();
	printf("yes.bring me some tea and wruteable cd-roms.\n");
	return 0;
	
}
 void butler(void)
 {
 	printf("you rang, sir?\n");
 }
