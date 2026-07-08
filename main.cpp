#include <iostream>
#include <windows.h>
#include "Events/ConsoleEvents.hpp"
#include "main.hpp"

string args = ""; // système d'argument a été retravaillé, mais la variable j'aimerai trouver un moyen plus sécurisé qu'une variable globale

int main(){
    ConsoleEvents console;
    while(true){
        console.Waiting();
        Sleep(0);
    }
    return 0;
}