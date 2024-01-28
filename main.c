#include <stdio.h>
#include <stdlib.h>
#include "pizza.h"
int main()
{

 pizza livraison[7][5];
    int choix,nbr,taille,indice;
    float prixto,prix;
    do{
    do{
    printf("**********************************\n");
    printf("1-ajouter une pizza.\n");
    printf("2-calculer le nombre de pizza en donnant le taille.\n");
    printf("3-calculer le prix totale d'une  livraison.\n");
    printf("4-calculer le prix totale de toute les livraison.\n");
    printf("5-afficher la designation de pizza la plus livree.\n");
    printf("**********************************\n");
    scanf("%d",&choix);
    }while(choix<0||choix>5);
    switch(choix)
    {
        case 1 :ajouter(livraison);
            break;
        case 2 :printf("donner le taille du pizza.\n");
                scanf("%d",&taille);
                nbretaille(livraison,&nbr,taille);
                printf("le nombre de pizza de taille %d : %d\n",taille,nbr);
            break ;
        case 3 :  prix=0;
                  printf("donner l'indice de livraison:\n");
                  scanf("%d",&indice);
                  prix_livr(livraison,&prix,indice);
                  printf("le prix totale de cet livraison : %f\n",prix);
            break;
        case 4 :prix_tot(livraison,&prixto);
                printf("le prix totale de toute les livraison : %f\n",prixto);
            break;
        case 5 :pizzaplus(livraison);
            break;

    }
}while(choix!=0);
    return 0;
}
