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
    ofstream Fichier(args);
    Fichier.close();
    cout << args << endl;
};

string CreateFile::getCommand(){
    return CreateFile::command;
};