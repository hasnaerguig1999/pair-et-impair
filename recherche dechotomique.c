#include <stdio.h>
#include <stdlib.h>

int main() {

int tab[10]={12,5,66,-1,7,4,100,45,-9,2};
int i,j,var;
 printf("le tableau avant le tri \n ");
   for(i=0;i<10;i++){
   	printf("%d,",tab[i]);
}
   	 for(i=0;i<10;i++){
		
   	for(j=i+1;j<10;j++){
   		if(tab[i]>tab[j]){
		   
   		var=tab[i];
   		tab[i]=tab[j];
   		tab[j]=var;
	    }
      }
   
}
    printf(" \n");
    printf("tableau apres le tri \n");
    for(i=0;i<10;i++){
	
   	printf("%d,",tab[i]);
}

	return 0;
}
