#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float X , Y , R ;
    int operation , modulo ;
    char  reponse ;

    do {
            printf("***** calculatrice scientifique -- MENU ***** \n");
            printf("1 : addition \n");
            printf("2 : soustraction \n");
            printf("3 : multiplication \n");
            printf("4 : division \n");
            printf("5 : puissance \n");
            printf("6 : Racine carree \n");
            printf("7 : Sin \n");
            printf("8 : cos \n");
            printf("9 : tan \n");
            printf("10 : log \n");
            printf("choisi une operation de calcul :");
            scanf(" %d",&operation);

    switch (operation){
       case 1 : printf("veuillez entrer X :");
                scanf(" %f",&X);
                printf(" veuillez entrer Y :");
                scanf("%f",&Y);
                 R = X + Y ;
                 printf("%.2f + %.2f = %.2f \n",X,Y,R);
                  break;
        case 2 : printf("veuillez entrer X :");
                scanf(" %f",&X);
                printf(" veuillez entrer Y :");
                scanf("%f",&Y);
                    R = X - Y ;
                 printf("%.2f - %.2f = %.2f \n",X,Y,R);
                  break;
            case 3 :printf("veuillez entrer X :");
                    scanf(" %f",&X);
                    printf(" veuillez entrer Y :");
                    scanf("%f",&Y);
                     R = X * Y ;
                     printf("%.2f * %.2f = %.2f \n",X,Y,R);
                      break;

                case 4 : printf("veuillez entrer X :");
                    scanf(" %f",&X);
                    printf(" veuillez entrer Y :");
                    scanf("%f",&Y);
                    if (Y != 0) {
                        R = X / Y ;
                        modulo = (int)X%(int)Y;
                            printf("%.2f / %.2f = %d et le reste = %d \n",X,Y,(int)R,modulo);
                      }
                    else printf("impssible de diviser sur 0 ressayer");
                        break;
                        case 5 : printf("veuillez entrer X :");
                                    scanf(" %f",&X);
                                    printf(" veuillez entrer Y :");
                                    scanf("%f",&Y);
                                R = pow(X,Y);
                                    printf("%.2f ^ %.2f = %.2f",X,Y,R);
                                        break;
                        case 6 : printf("veuillez entrer X :");
                                    scanf(" %f",&X);
                                    R = sqrt(X);
                                    printf("Racine carree de %d = %d \n",(int)X , (int)R);
                                            break;
                        case 7 : printf("veuillez entrer X :");
                                    scanf(" %f",&X);
                                    R = sin(X);
                                    printf("sin de %.2f = %.2f \n",X ,R);
                                            break;
                        case 8 : printf("veuillez entrer X :");
                                    scanf(" %f",&X);
                                    R = cos(X);
                                    printf("cos de %.2f = %.2f \n",X ,R);
                                            break;
                        case 9 : printf("veuillez entrer X :");
                                    scanf(" %f",&X);
                                    R = tan(X);
                                    printf("tang de %.2f = %.2f \n",X ,R);
                                            break;
                        case 10 : printf("veuillez entrer X :");
                                    scanf(" %f",&X);
                                    R = log(X);
                                    printf("Log de %.2f = %.2f \n",X ,R);
                                            break;

                                    default : printf("erreur \n");
    }
        printf("vous voulez faire un autre calcul (O/N) ?");
        scanf(" %c",&reponse);

    }    while(reponse != 'N');






    return 0;
    }
