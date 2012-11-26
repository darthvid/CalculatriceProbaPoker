
#include "stdafx.h"
#include "CalculCombinaison.h"

long IsSuite(Carte listeprive[], Carte listeCartePublique[])
{
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
	for (int i = 0; i < NB_TOT_CARTE ; i++)
	{
		if listeCarteTotal[i] == listeCarteTotal[i+1]+1
	}
}
