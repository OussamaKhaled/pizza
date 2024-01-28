#ifndef PIZZA_H_INCLUDED
#define PIZZA_H_INCLUDED
typedef struct
{
    char desig[30];
    int taille;
    float prix;
}pizza;
void initialiser(pizza livraison[][5]);
void saisir(pizza *p);
void ajouter (pizza livraison[][5]);
void nbretaille(pizza livraison[][5],int *nbre , int taille);
void prix_livr(pizza livraison[][5],float *prix,int indicelivraison);
void prix_tot(pizza livraison[][5],float *prixtot);
int pizzatype(pizza livraison[][5],char designation[30]);
void pizzaplus(pizza livraison[][5]);
#endif // PIZZA_H_INCLUDED
