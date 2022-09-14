#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int T[4];
	int i,taille,pos,n;
	printf("veuillez saiser la taille du tableau :");
	scanf("%d",&taille);
	printf("veuillez saiser les element du tableau :");
	for(i=0;i<taille;i++){
	
	printf("T[%d]= ",i+1);
	scanf("%d",&T[i]);
}
	printf("veullez saisir la valeur inserer :");
	scanf("%d",&n);
	printf("saisir la position \n");
	scanf("%d",&pos);
	if(pos<=0 || pos  > taille+1){
		printf("possible invalide , entrer la position entre 1 et %d",taille+1);
	}
	 else{
	 
	 	for(i=taille;i>=pos;i--){
		
	 		T[i]=T[i-1];
	 	}
		 	 T[pos-1]=n;
		 taille++;
		 printf("element du tableau apres insertion sont\n");
	
		 for(i=0;i<taille;i++)
		 printf(" T[%d] =%d \n",i+1,T[i]);
		 
}
	return 0;
}
