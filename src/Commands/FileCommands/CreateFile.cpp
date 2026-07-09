#include <iostream>
#include <fstream>
#include "Commands/FileCommands/CreateFile.hpp"
#include "Events/KeyEvents.hpp"
#include "Events/ConsoleEvents.hpp"
#include "main.hpp"

using namespace std;

CreateFile::CreateFile(){ 
    CreateFile::command = "cat";
};

void CreateFile::Command(string cmd){
    switch(args.size()){
        case 0: {
            cout << "Error: You need at least one argument" << endl;
            break;
        }
        case 1: {
            ofstream Fichier(args[0]);
            Fichier.close();
            cout << args[0] << endl;
            break;
        }
        case 2: {
            break;
        }
        default: {

        }
    }
};

string CreateFile::getCommand(){
    return CreateFile::command;
};