#include <iostream>
#include <windows.h>
#include "Events/ConsoleEvents.hpp"
#include "main.hpp"
#include <vector>

using namespace std;

vector<string> args; // système d'argument a été retravaillé, mais la variable j'aimerai trouver un moyen plus sécurisé qu'une variable globale

int main(){
    ConsoleEvents console;
    while(true){
        console.Waiting();
        Sleep(0);
    }
    return 0;
}