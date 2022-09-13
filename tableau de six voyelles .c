#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char T[6];
	int i;
	T[0]='A';
	T[1]='E';
	T[2]='I';
	T[3]='O';
	T[4]='U';
	T[5]='Y';
	printf("les voyelles de l alphabet francais sont :\n");
	for(i=0;i<6;i++)
	printf(" %c \n",T[i]);
	return 0;
}
