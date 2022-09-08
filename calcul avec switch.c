#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1,n2,n;
	char choix;
	printf("entrer le 1 nombre\n");
	scanf("%d",&n1);
	getc(stdin);
	printf("entrer operateur\n");
	scanf("%c",&choix);
	printf("entrer la 2 nombre\n");
	scanf("%d",&n2);
	switch(choix)
	{
		case'+':
		printf("%d + %d =%d\n ",n1,n2,n1+n2);
		break;
		case'-':
		printf("%d - %d =%d\n ",n1,n2,n1-n2);
		break;
		case '*':
		printf("%d * %d =%d\n ",n1,n2,n1*n2);
		break;
		case'/':
		if(n!=0)
		printf("%d / %d =%.4d\n ",n1,n2,n1/n2);
		else
		printf("error:nest pas seveser sur 0");
		break;
		default:printf("operateur inconnu\n");
	}
	
	
	return 0;
}
