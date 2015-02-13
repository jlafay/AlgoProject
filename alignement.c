#include <stdio.h>
#include <stdlib.h>
#include "alignement.h"

int alignement_v(int tab[21][21], int n, int i, int j)
{
    int somme = 1;
    int cont;

    for(cont = 1; tab[i+cont][j] == n; cont++ )
        {
            somme++;
        }

    for(cont = 1; tab[i-cont][j] == n; cont++)
        {
            somme++;
        }
        if(somme > 4)
        {
            return 1;
        }
        else
        {
            return 0;
        }

}


int alignement_h(int tab[21][21], int n, int i, int j)
{
    int somme = 1;
    int cont;

    for(cont = 1; tab[i][j+cont] == n; cont++ )
        {
            somme++;
        }

    for(cont = 1; tab[i][j-cont] == n; cont++)
        {
            somme++;
        }
        if(somme > 4)
        {
            return 1;
        }
        else
        {
            return 0;
        }

}

int alignement_d1(int tab[21][21], int n, int i, int j) // d1:
{
    int somme = 1;
    int cont;

    for(cont = 1; tab[i+cont][j+cont] == n; cont++ )
        {
            somme++;
        }

    for(cont = 1; tab[i-cont][j-cont] == n; cont++)
        {
            somme++;
        }
        if(somme > 4)
        {
            return 1;
        }
        else
        {
            return 0;
        }

}


int alignement_d2(int tab[21][21], int n, int i, int j) //
{
    int somme = 1;
    int cont;

    for(cont = 1; tab[i+cont][j-cont] == n; cont++ )
        {
            somme++;
        }

    for(cont = 1; tab[i-cont][j+cont] == n; cont++)
        {
            somme++;
        }
        if(somme > 4)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}





int alignement(int tab[21][21], int n, int i, int j)
{
    if (alignement_v(tab, n, i, j)== 1 || alignement_h(tab, n, i, j) == 1|| alignement_d1(tab, n, i, j) == 1|| alignement_d2(tab, n, i, j) == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}
