#include <stdio.h>
#include <stdlib.h>

 void signe(int a,int b){

 if(a*b>=0 )
 printf("la valeur de a et b meme signe\n");
 else
 printf("la valeur de a et b defferent signe\n");
}
 int minimum(int a,int b){
 
  int min;
  if(a>b)
  min=b;
  else
  min=a;
  return min;
}
  int maximum(int a, int b){
  int max;
  if(a<b)
  max =b;
  else
  max=a;
  return max;
}
int main() {
	 int max,min;
	 int a,b;
	 printf("entrer la valeur de a\n:");
	 scanf("%d",&a);
	 printf("entrer la valeur de b:\n");
	 scanf("%d",&b);
	 signe(a,b);
	 min=minimum(a,b);
	 max=maximum(a,b);
	 printf("la valeur minimal est %d\n",min);
	 printf("la valeur maximal est %d\n",max);
	 
	return 0;
}
