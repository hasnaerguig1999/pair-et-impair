#include <stdio.h>
#include <stdlib.h>

int main() {
	int da,dn,age;
	
	printf("entrer la date dujourdui\n");
	scanf("%d",&da);
	printf("entrer la date de naissance\n");
	scanf("%d",&dn);
	
     age =da-dn;
     printf("votre age est %d",age);
	return 0;
}
