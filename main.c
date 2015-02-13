#include <stdio.h>
#include <stdlib.h>
#include "initialise.h"
#include "pose.h"
#include "alignement.h"
#include "paire.h"
int main()
{
    static int tab[21][21];
    int nombreDePaires[2] = {0};
    initialise(tab);
    int n=0;
    int i,j;

 do
    {
        n= (n%2) +1;
        affiche(tab,nombreDePaires);
        pose(tab, n, &i, &j);
    }while (possible(tab) == 1 && alignement(tab, n, i, j) == 0);
    if (alignement(tab,n,i,j) == 1)
        {
            printf("Le joueur %d a gagne", n);
        }
return 0;
}
