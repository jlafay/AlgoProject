#include <stdio.h>
#include <stdlib.h>
#include "paire.h"

void paire(int tab[21][21], int n, int i, int j, int total[2])
{
    paire_horg(tab, n, i, j, total);
    paire_hord(tab, n, i, j, total);
    paire_verth(tab, n, i, j, total);
    paire_vertb(tab, n, i, j, total);
    paire_dhg(tab, n, i, j, total);
    paire_dhd(tab, n, i, j, total);
    paire_dbg(tab, n, i, j, total);
    paire_dbd(tab, n, i, j, total);


}

void paire_horg(int tab[21][21], int n, int i, int j, int total[2])
{
    int cool=(n % 2)+1;
    if(tab[i][j-1]==cool
       && tab[i][j-2]==cool
       && tab[i][j-3]==n)

    {
        tab[i][j-1]= 0;
        tab[i][j-2]= 0;
        total[n - 1]++;
    }
}
void paire_hord(int tab[21][21], int n, int i, int j, int total[2])
{
    int cool=(n % 2)+1;
    if(tab[i][j+1]==cool
       && tab[i][j+2]==cool
       && tab[i][j+3]==n)

    {
        tab[i][j+1]= 0;
        tab[i][j+2]= 0;
        total[n - 1]++;
    }
}

void paire_verth(int tab[21][21], int n, int i, int j, int total[2])
{
    int cool=(n % 2)+1;
    if(tab[i-1][j]==cool
       && tab[i-2][j]==cool
       && tab[i-3][j]==n)

    {
        tab[i-1][j]= 0;
        tab[i-2][j]= 0;
        total[n - 1]++;
    }
}
void paire_vertb(int tab[21][21], int n, int i, int j, int total[2])
{
    int cool=(n % 2)+1;
    if(tab[i+1][j]==cool
       && tab[i+2][j]==cool
       && tab[i+3][j]==n)

    {
        tab[i+1][j]= 0;
        tab[i+2][j]= 0;
        total[n - 1]++;
    }
}

void paire_dhg(int tab[21][21], int n, int i, int j, int total[2])
{
    int cool=(n % 2)+1;
    if(tab[i-1][j-1]==cool
       && tab[i-2][j-2]==cool
       && tab[i-3][j-3]==n)

    {
        tab[i-1][j-1]= 0;
        tab[i-2][j-2]= 0;
        total[n - 1]++;
    }
}

void paire_dhd(int tab[21][21], int n, int i, int j, int total[2])
{
    int cool=(n % 2)+1;
    if(tab[i+1][j+1]==cool
       && tab[i+2][j+2]==cool
       && tab[i+3][j+3]==n)

    {
        tab[i+1][j+1]= 0;
        tab[i+2][j+2]= 0;
        total[n - 1]++;
    }
}

void paire_dbg(int tab[21][21], int n, int i, int j, int total[2])
{
    int cool=(n % 2)+1;
    if(tab[i+1][j-1]==cool
       && tab[i+2][j-2]==cool
        && tab[i+3][j-3]==n)

    {
        tab[i+1][j-1]= 0;
        tab[i+2][j-2]= 0;
        total[n - 1]++;
    }
}
void paire_dbd(int tab[21][21], int n, int i, int j, int total[2])
{
    int cool=(n % 2)+1;
    if(tab[i-1][j+1]==cool
       && tab[i-2][j+2]==cool
       && tab[i-3][j+3]==n)

    {
        tab[i-1][j+1]= 0;
        tab[i-2][j+2]= 0;
        total[n - 1]++;
    }
}
