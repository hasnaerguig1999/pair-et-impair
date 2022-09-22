  
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
 
    typedef struct {
    char nom[100];
 int code;
 int quantite;
  float prix;
 int dayj,monthj,yearj;
 
}produit ;
typedef struct {
    char nom[100];
 int code;
 int quantite;
  float prix;

 
}statistique ;
statistique s[100];
float somme=0;
produit p[100];
produit tmp;

int main()
{
	
	time_t now;
    time(&now);
   
    struct tm *local = localtime(&now);
int day,m,an;
day = local->tm_mday;          
  m = local->tm_mon + 1;     
  an = local->tm_year + 1900;
int choix , chiffre;
int a,q, c,n=0,i,j, k,cmp=0;
 int total=0;
  Menu:
    printf("  ===menu principel:===\n  ");
    printf("  1-ajouter un produit\n  ");
    printf("  2-ajouter plusieurs produits\n  ");
    printf("  3-Rechercher les produits Par code\n  ");
    printf("  4-Rechercher les produits Par quantite\n  ");
    printf("  5-Alimenter le stock:\n  "  );
    printf("  6-Supprimer les produits par Code:\n  ");
    printf("  7-Lister tous les produits (Nom, prix, prix TTC):\n  ");
    printf("  8-Acheter produit\n  ");
    printf("  9-Statistique de vente\n   ") ;
    printf("   10-la quantite de produit inférieure a 3\n   ");
    scanf("%d",&choix);
switch (choix) {

   case 1 : {
        
      
         printf("1-code\n");
         scanf("%d",&p[cmp].code);
         printf("2-nom\n");
         scanf("%s",p[cmp].nom);
         printf("3-quantite\n");
         scanf("%d",&p[cmp].quantite);
         printf("4-prix\n");
         scanf("%f",&p[cmp].prix);
          cmp++;
        
       goto Menu;
    break; }
   case 2:{
      printf("ajouter  plusieur produit \n");
       printf("entrer le nombre des produit\n");
       scanf("%d",&k);
       
                 
               for(i=cmp;i<cmp+k;i++){
                  printf("1-code\n");
         scanf("%d",&p[i].code);
         printf("2-nom\n");
         scanf("%s",p[i].nom);
         printf("3-quantite\n");
         scanf("%d",&p[i].quantite);
         printf("4-prix\n");
         scanf("%f",&p[i].prix);
         
                 }
        cmp+=k; // cmp=cmp+k;
        goto Menu;
     break;}

      case 3:{
         
        printf("entere le  code \n");
        scanf("%d",&c);
     
      for(i=0;i<cmp;i++){
          if(c==p[i].code ){
           printf("nom :%s\n",p[i].nom);
         
        printf("quantite:%d\n",p[i].quantite);
     
         printf("prix :%f\n",p[i].prix);
         printf("\t================\n");
         
         }
      }
      goto Menu;
       break;}
     
       
     
      break;
          
      
          case 4:{
        printf("entere la quantite  \n");
        scanf("%d",&q);
   
   
    
      for(i=0;i<cmp;i++){ //tableau de produit badi mn 0
          if(q==p[i].quantite ){
                printf("code  %d\n",p[i].code);
                printf("nom :%s\n",p[i].nom);
                printf("prix :%f\n",p[i].prix);
    		}
	}
	goto Menu;
       break;}
       
       
      break;
      case 5:{
            int c,q;
           printf("enter le code du produit a alimenter  \n");
        scanf("%d",&c);
        printf("entrer la quantit a ajouter\n");
        scanf("%d",&q);
        for(i=0;i<cmp;i++){
        if(c==p[i].code){
            
        
       p[i].quantite=p[i].quantite+q;}// quantite jdidA+quantiti 9dima plus lizadna
        break;// khroj
        } 
       
       goto Menu;
      break;}
       case 6:{
           printf("entrer le code de produit A supprimer");
           scanf("%d",&n);
           for(i=0;i<cmp;i++){
          if(n==p[i].code ){
              p[i] = p[n+1]; //position litab3ah icrazinaha
              cmp--;// conteur nqast mano
              printf("le produit a ete supprimer\n");
          break;        }}
      goto Menu;
break; }
     
       case 7 :{
     int z;
      printf("1:lister tous les produits selon lordre alphabetique  croissant par nom \t ");
      printf("2:lister tous les produits selon lordre decroissant par prix \t ");
        scanf("%d",&z);
            switch(z){

      case 1 : {
                  int i,j=1;
                    produit swap;
                   for (i = 0; i <cmp+1 ; i++) {
                    for ( j = 0; j <=cmp-1; j++)
                        if (strcmp(p[j].nom, p[j+1].nom) == 1) {
                            swap= p[j];
                            p[j] = p[j+1];
                            p[j+1] = swap;}}

                        for (i = 0; i <cmp; i++){
                        j++;
                printf ("le code du produit %d:%d \t",j,p[i].code);

                printf ("le nom du produit %d:%s \t",j, p[i].nom);

                printf ("le prix du produit %d:%f \t",j, p[i].prix);

                printf ("la quantite du produit %d:%d \t",j, p[i].quantite);

}
    goto Menu;
                break;  }
            case 2:{
             
                     produit swap;
                     for (i=0;i<cmp-1;i++){
                    for (j=i+1;j<cmp;j++){
                       if (p[i].prix>p[j].prix) {
                        swap=p[i];
                         p[i]=p[j];
                          p[j]=swap;}}}
                         int ka;
                        for (ka = 0; ka < cmp; ka++){
                printf ("le nom du produit %d:%s\n",j, p[ka].nom);

                printf ("le prix du produit %d:%f\n",j, p[ka].prix);
                printf ("le prix ttc de produit %d:%f\n",j, (p[ka].prix)*1.15);//prixttc =prix*15%;
}
   goto Menu;
break;}
  }
   break; 
       }

      
        case 8 :{
        int compteur=0;   
int c,q,w=0;
    printf("entrer le code de produit a achter \t ");
    scanf("%d",&c);
      printf("entrer la quantie de produit a achter \t ");
        scanf("%d",&q);
        for(i=0;i<cmp;i++){
          if(c==p[i].code ){
          	
          	 s[w].quantite=q;
         s[w].code=p[i].code;
         s[w].prix=p[i].prix*1.15;
         strcpy(s[w].nom,p[i].nom);
         w++;
              compteur++;
              somme=somme+(s[w].prix*q);
              total+=q;
        
                    
					printf("nom :%s\n",p[i].nom);

        printf("quantite:%d\n",p[i].quantite-q);
     
         printf("prix TTC :%f\n",p[i].prix*1.15);
            printf("date d'achat est %d/%d/%d\n",day,m,an);
            p[i].dayj=day;
			p[i].monthj=m;
			p[i].yearj=an;
            
          
		   p[i].quantite=p[i].quantite-q;//quantie liknt - quantite litchrat  
		   somme=somme+(p[i].prix*1.15*q);
        }
    
}

      
       if(compteur==0)
       printf("ce produit n'existe pas!");
       
 }
   goto Menu;
   break;
       case 9:{
       	
		
		//
     int f;
      printf("1:Afficher le total des prix des produits vendus en journée courante\n ");
      printf("2:Afficher la moyenne des prix des produits vendus en journée courante\n ");
      printf("3:Afficher le Max des prix des produits vendus en journée courante\n ");
      printf("4:Afficher le Min des prix des produits vendus en journée courante\n ");
        scanf("%d",&f);
switch(f){
//if(day==p[i].dayj)
      case 1 : {
    
      	printf("la somme aujourdhuit  %.2f ",somme);
      	 printf(" la date  est %d/%d/%d",day,m,an);
      	 p[i].dayj=day;
			p[i].monthj=m;
			p[i].yearj=an;
      	
      	goto Menu;
 break;}
 case 2 :{ float moyene;
 printf("la moyenne aujourdhuit  %.2f ",moyene=somme/total);
  printf(" la date  est %d/%d/%d",day,m,an);
  p[i].dayj=day;
			p[i].monthj=m;
			p[i].yearj=an;
		goto Menu;
	break;
 }

    case 3 :
    {
int w=0;
         produit swap;
                     for (i=0;i<w-1;i++){
                    for (j=i+1;j<w;j++){
                       if (p[i].prix>p[j].prix) {
                        swap=p[i];
                         p[i]=p[j];
                          p[j]=swap;}}}
		printf("le Max des prix des produits vendus en journee %f",s[0].prix);
        printf(" la date  est %d/%d/%d",day,m,an);

		goto Menu;
		break;
    }

break;
case 4 :
    {
int w=0;
         produit swap;
                     for (i=0;i<w-1;i++){
                    for (j=i+1;j<w;j++){
                       if (p[i].prix<p[j].prix) {
                        swap=p[i];
                         p[i]=p[j];
                          p[j]=swap;}}}
		printf("le min des prix des produits vendus en journee %f",s[0].prix);
        printf(" la date  est %d/%d/%d",day,m,an);

		goto Menu;
		break;
    }
}
}
break;
  case 10:{
  
 if(cmp>0) {for (i=0;i<cmp;i++){
 if(p[i].quantite<3){
 //suvgardit i bach nkhdm biha des fois i kathrab
 	printf(" la quantite de ce produit est  inferieure a 3 sont : %s\n",p[i].nom);
  // if produit kyn
 }}
    if(p[i].quantite>3){
  printf(" tous les produit ont la quantite superieur a 3");
 }
  
 }	   
if(cmp==0){
	printf(" aucun produit a verifier   ");
	
}
break;} 
}
return 0;
}



