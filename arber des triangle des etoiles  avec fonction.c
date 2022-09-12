#include <stdio.h>
#include <stdlib.h>

   int x, y,d;
   void etoile(){
   
   printf ("entrer le nombre de ligne");
   scanf ("%d",&d);
}
  void espace(int i){
  	int j;
  	for(j=0;j<i;j++){
  		printf("  ");
	  }
  }
    void triangle(int d,int m)
    {
    	
for(x=0;x<=d;x++)// espace
{
espace(m);
for(y=1;y<=d-x;y++)
{
printf("  ");
}
 
for(y=1;y<=(2*x-1);y++)
{
printf("* ");

}
printf("\n");
}}
	
  int main() {
  int i;
  	etoile();
  	for(i=0;i<4;i++){
	  triangle(d+i,d-i);
	  }
  	
    
  return 	0; }

