//
//  Combinaison.cpp
//  CalculatriceProbaPoker
//
//  Created by Bertrand Hersent on 11/26/12.
//  Copyright (c) 2012 Bertrand Hersent. All rights reserved.
//

#include "Combinaison.h"
#include "stdafx.h"

//retourne true ou false selon si la generation du tablea s'est bien passe
bool GenereCombinaison(char* TabComb[]){
    
    //compteur pour l'indice du tableau
    int cpt = 0;
    //COU = couleur
    //CA = carte
    for (int COU1=1 ; COU1 < 5; COU1++) {
        
        for (int CA1=2; CA1 < 15; CA1++) {
            
            for (int COU2=1; COU2 < 5; COU2++) {
                
                for (int CA2=2; CA2 < 15; CA2++) {
                    
                    for (int COU3=1; COU3 < 5; COU3++) {
                        
                        for (int CA3=2; CA3 < 15; CA3++) {
                            
                            for (int COU4=1; COU4 < 5; COU4++) {
                                
                                for (int CA4=2; CA4 < 15; CA4++) {
                                    
                                    for (int COU5=1; COU5 < 5; COU5++) {
                                        
                                        for (int CA5=2; CA5 < 15; CA5++) {
                                            
                                            char sco1 = VerifieCouleur(COU1);
                                            char sco2 = VerifieCouleur(COU2);
                                            char sco3 = VerifieCouleur(COU3);
                                            char sco4 = VerifieCouleur(COU4);
                                            char sco5 = VerifieCouleur(COU5);
                                            
                                            char cca1 = VerifieCarte(CA1);
                                            char cca2 = VerifieCarte(CA2);
                                            char cca3 = VerifieCarte(CA3);
                                            char cca4 = VerifieCarte(CA4);
                                            char cca5 = VerifieCarte(CA5);
                                            
                                            *TabComb[cpt] = cca1;
                                            *TabComb[cpt] += sco1;
                                            *TabComb[cpt] += cca2;
                                            *TabComb[cpt] += sco2;
                                            *TabComb[cpt] += cca3;
                                            *TabComb[cpt] += sco3;
                                            *TabComb[cpt] += cca4;
                                            *TabComb[cpt] += sco4;
                                            *TabComb[cpt] += cca5;
                                            *TabComb[cpt] += sco5;
                                            
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return true;
}


char VerifieCouleur(int couleur){
    if (couleur == 1)
        return 'k';
    if (couleur == 2)
        return 'p';
    if (couleur == 3)
        return 'q';
    if (couleur == 4)
        return 't';
}

char VerifieCarte(int numeroCarte){
    if (numeroCarte == 10)
        return 'A';
    if (numeroCarte == 11)
        return 'B';
    if (numeroCarte == 12)
        return 'C';
    if (numeroCarte == 13)
        return 'D';
    if (numeroCarte == 14)
        return 'E';
    else
        return numeroCarte;
}
