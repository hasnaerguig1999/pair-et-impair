#include <stdio.h>
#include <stdlib.h>
  int x, y,d;
   void etoile(){
   
   printf ("entrer le nombre de ligne");
   scanf ("%d",&d);
}
  
    void triangle()
    {
    	
for(x=0;x<=d;x++)// espace
{

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
  	etoile();
  	triangle();
  return 	0; }

 

