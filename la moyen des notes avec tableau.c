#include <stdio.h>
#include <stdlib.h>



int main() {
	float T[4];
	int i;
	float s,m;
	for(i=0;i<4;i++){
		printf("donner la note de etudient %d\n",i+1);
		scanf("%f",&T[i]);
	}
	s=0;
	for(i=0;i<4;i++)
		
		s=s+T[i];
		m=s/4;
	
	
printf("la moyen des notes est :%.2f\n",m);
	return 0;
}
