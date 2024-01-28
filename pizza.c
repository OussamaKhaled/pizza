#include <stdio.h>
#include <stdlib.h>
#include "pizza.h"
#include <string.h>
void initialiser(pizza livraison[][5])
{int i,j;
    for(i=0;i<7;i++)
    {
        for(j=0;j<5;j++)
        {
            strcpy(livraison[i][j].desig,"");
        }
    }
}
void saisir(pizza *p)
{
    printf("donner la degnataion du pizza(margherita,thon,4fromages,speciale):\n");
    fflush(stdin);
    scanf("%s",(*p).desig);
    printf("donner la taille(big,moyen,petit):\n");
    scanf("%d",&(*p).taille);
    printf("donner le prix du pizza:\n");
    scanf("%f",&(*p).prix);

}
void ajouter (pizza livraison[][5])
{int i,j;
    for(i=0;i<7;i++)
    {
        for(j=0;j<5;j++)
        {
            if(strcmp(livraison[i][j].desig,"")==0)
            {
               saisir(&livraison[i][j]);
            }
        }
    }
}
void nbretaille(pizza livraison[][5],int *nbre , int taille)
{int i,j;
    for(i=0;i<7;i++)
    {
        for(j=0;j<5;j++)
        {
            if(livraison[i][j].taille==taille)
            {
                (*nbre)++;
            }
        }
    }
}
void prix_livr(pizza livraison[][5],float *prix,int indicelivraison)
{int i;
    for(i=0;i<5;i++)
    {
        (*prix)+=livraison[indicelivraison][i].prix;
    }

}
void prix_tot(pizza livraison[][5],float *prixtot)
{int i,j;
    for(i=0;i<7;i++)
    {
        for(j=0;j<5;j++)
        {
            (*prixtot)+=livraison[i][j].prix;
        }
    }
}
int pizzatype(pizza livraison[][5],char designation[30])
{int i,j,s;
    for(i=0;i<7;i++)
    {
        for(j=0;j<5;j++)
        {
            if(strcmp(livraison[i][j].desig,designation)==0)
                s++;
        }
    }
    return s;

}
void pizzaplus(pizza livraison[][5])
{int t[4];
 int max,maxi,z;

    t[0]=pizzatype(livraison,"margherita");
    t[1]=pizzatype(livraison,"thon");
    t[2]=pizzatype(livraison,"4fromages");
    t[3]=pizzatype(livraison,"speciale");
    max=t[0];
    maxi=0;
    for(z=1;z<4;z++)
    {
        if(t[z]>max)
        {
            max=t[z];
            maxi=z;
        }
    }
   switch(maxi)
   {
       case 0 : printf("le designation de pizza la plus livree est la margherita.\n ");
       break;
       case 1 :printf("le designation de pizza la plus livree est la thon.\n ");
       break;
       case 2 : printf("le designation de pizza la plus livree est la 4fromages.\n ");
       break;
       case 3 : printf("le designation de pizza la plus livree est la special.\n ");
       break;
   }
}






