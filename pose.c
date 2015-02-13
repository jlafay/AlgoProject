#include <stdio.h>
#include <stdlib.h>
#include "pose.h"


int possible(int tab[21][21])
{
    int i,j;
    for (i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
            if (tab[i][j]==0) // Au moins un 0 dans le tableau alors on retourne 1
            {return 1;
            }

        }
    }
    return 0;
}

void pose(int tab[21][21],int n, int *i, int *j)
{
    printf ("\n");
    do
    {   printf ("Joueur %d c'est votre tour !\n",n);
        printf("Entrer le numero de ligne : ");
        scanf ("%d",i);
        printf("Entrer le numero de colonne :  ");
        scanf("%d",j);
    }while (*i<1 || *i>19 || *j<1 || *j>19 || (tab[*i][*j]!=0));
    tab[*i][*j]=n;

}

