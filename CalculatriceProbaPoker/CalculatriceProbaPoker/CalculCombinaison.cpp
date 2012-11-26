
#include "stdafx.h"
#include "CalculCombinaison.h"

//Fonction et procédure de tri croissant du tableau
int changer_pos(int *tabl1, int *tabl2)
{
    int inter = 0;

    inter = *tabl1;
    *tabl1 = *tabl2;
    *tabl2 = inter;
}

void tri(int* table,int longueur)
{
    int i, j;
    for(j=0;j<longueur;++j)
    {
        for(i=0;i<longueur-1;i++)
        {
            if(table[i] > table[i+1])
            {
                changer_pos(&table[i],&table[i+1]);
            }
        }
    }
}

long IsSuite(Carte listeprive[], Carte listeCartePublique[])
{
	int i;
	int j;
	Carte listeCarteTotal[];
	for (j=0; j < 2 ; j++)
	{
		listeCarteTotal[j]=listeprive[j];
	}
	for (j = 0; j<5; j++)
	{
		listeCarteTotal[j+2] = listeCartePublique[j];
	}
	tri(listeCarteTotal[], NB_TOT_CARTE);
	for (i = 0; i < NB_TOT_CARTE ; i++)
	{
		if listeCarteTotal[i] == listeCarteTotal[i+1]+1 then
		{


		}
		else
		{
			return(-1);
		}
	}
}

long IsPaire(Carte listeprive[], Carte listeCartePublique[])
{
	int i;
	int j;
	char *Valeur;
	Carte listeCarteTotal[];
	for (j=0; j < 2 ; j++)
	{
		listeCarteTotal[j]=listeprive[j];
	}
	for (j = 0; j<5; j++)
	{
		listeCarteTotal[j+2] = listeCartePublique[j];
	}
	for (i = 0; i < NB_TOT_CARTE ; i++)
	{
		if (listeCarteTotal[i] == listeCarteTotal[i+1]) then
		{
			Valeur = listeCarteTotal[i];
			IsDeuxPaires(listeCarteTotal[])
		}
	}
}

long IsDeuxPaires(Carte listeCarteTotal[], char *Valeur)
{
	int i;
	int j;

	for (i = 0; i < NB_TOT_CARTE ; i++)
	{
		if (listeCarteTotal[i] == listeCarteTotal[i+1]) && (Valeur<>listeCarteTotal[i]) then
		{
		}
	}
}

long IsBrelan(Carte listeprive[], Carte listeCartePublique[])
{
	int i;
	int j;
	Carte listeCarteTotal[];
	for (j=0; j < 2 ; j++)
	{
		listeCarteTotal[j]=listeprive[j];
	}
	for (j = 0; j<5; j++)
	{
		listeCarteTotal[j+2] = listeCartePublique[j];
	}
	tri(listeCarteTotal[], NB_TOT_CARTE);
	for (i = 0; i < NB_TOT_CARTE ; i++)
	{
		if listeCarteTotal[i] == listeCarteTotal[i+1]+1 then
		{
		}
	}
}


