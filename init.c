#include <stdio.h>
#include <stdlib.h>
#include "initialise.h"



void initialise(int tab[21][21])
{
    int i,j;
    for (i=0;i<20;i++)
    {
        for (j=0;j<20;j++)
        {
            if (i==0 || j==0 || i==20 || j==20)
            {tab[i][j]=3; // Affecte 3 aux 1eres et dernieres lignes et colonnes
            }
            else
            {
                tab[i][j]=0; // Affecte 0 aux autres cases
            }
        }
    }
}

void affiche(int tab[21][21],int total[2])
{
    affiche_plateau(tab);
    affiche_paires(total);
}

void affiche_plateau(int tab[21][21])
{
    int i,j;
    system ("cls");
    printf ("  ");
    for (i=1 ;i<20 ;i++) //Parcourir les colonnes
    {
        printf(" %2d",i);
    }
    printf ("\n");
    for (i=1; i <20; i++) //Parcourir les lignes
    {
        printf("%3d",i);
        for (j=1;j<20;j++)
        {
                switch(tab[i][j])
                {
                    case 0: // Ecrit un . pour les cases vides
                        printf(" . ");
                        break;
                    case 1: // Ecrit un O quand le joueur 1 joue
                        printf(" o ");
                        break;
                    case 2: // Ecrit un X quand le joueur 2 joue
                        printf(" x ");
                        break;
                }

        }
        printf("\n");
    }
}

void affiche_paires(int total[2]) //Tableau 2 entiers
{
    printf("\nNombre de paires prises par le joueur 1 : %d\n", total[0]);
    printf("Nombre de paires prises par le joueur 2 : %d", total[1]);
    printf("\n");
}
