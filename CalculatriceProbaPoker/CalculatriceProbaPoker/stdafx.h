// stdafx.h�: fichier Include pour les fichiers Include syst�me standard,
// ou les fichiers Include sp�cifiques aux projets qui sont utilis�s fr�quemment,
// et sont rarement modifi�s
//

#pragma once

//#include "targetver.h"

#include <stdio.h>
//#include <tchar.h>



// TODO: faites r�f�rence ici aux en-t�tes suppl�mentaires n�cessaires au programme

// Cedric
#define NB_CARTE_PUBLIC 5
#define NB_CARTE_PRIVEE 2
#define NB_CARTE_TOTAL  7

#define HAUTEUR		 1
#define PAIRE		 2
#define DEUX_PAIRE   3
#define BRELAN		 4
#define SUITE		 5
#define COULEUR      6
#define FULL		 7
#define CARRE		 8
#define QUINTE_FLUSH 9

#define ROUGE 1
#define NOIR  2

#define AS    14
#define ROI   13
#define DAME  12
#define VALET 11

struct Carte
{
	int couleur;
	int valeur;
};

struct Main
{
	Carte listeCartePrivee[NB_CARTE_PRIVEE];
	Carte listeCartePublique[NB_CARTE_PUBLIC];
	int combinaison;
};
// fin Cedric