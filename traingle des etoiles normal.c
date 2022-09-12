#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,d;
    printf("entrer le nombre de ligne\n");
    scanf("%d",&d);
    for(x=0;x<=d;x++)
{
    for(y=1;y<=d-x;y++)
    { 
        printf("  ");
}

 for(y=1;y<=2*x-1;y++)
 {
     printf("* ");
 }
printf("\n");
}
    return 0;
}
