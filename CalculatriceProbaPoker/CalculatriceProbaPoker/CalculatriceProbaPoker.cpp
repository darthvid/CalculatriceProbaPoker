// CalculatriceProbaPoker.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "stdafx.h"
#include "Combinaison.h"


int main(int argc, char* argv[])
{
    //tableau contenant les mains possibles sous la forme de la structure CARTE
    char* TabComb[NB_MAIN_POSSIBLE];
    GenereCombinaison(TabComb);
    return 0;
}

void afficheCombinaison(char* TabComb[]){
    for (int i = 0 ; i < NB_MAIN_POSSIBLE; i++) {
        printf("%s\n", TabComb[i]);
    }
}