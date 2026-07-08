#include <iostream>
#include <windows.h>
#include "Events/ConsoleEvents.hpp"
#include "main.hpp"

string args = ""; // cette variable est globale, tous les fichier y ont accès, c'est temporaire j'esserai une meilleure methode plus tard
// cependant il y a un decalage de 1 commande concernant la variable de commande executée (logique vu que key.getcmd se met a jour après execution, donc il faudrait decaler l'enregistrement de comd avant l'execution en mode asynchrome peut être à voir)
//plus tard aussi ce serait bien que je decale un peu tout le parsing sur readargs, question de mieux organiser.
int main(){
    ConsoleEvents console;
    while(true){
        console.Waiting();
        Sleep(0);
    }
    return 0;
}