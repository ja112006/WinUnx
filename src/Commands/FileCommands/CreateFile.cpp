#include <iostream>
#include <fstream>
#include "../../../include/Commands/FileCommands/CreateFile.hpp"
#include "../../../include/Events/KeyEvents.hpp"
#include "../../../include/Events/ConsoleEvents.hpp"
#include "../../../include/main.hpp"

using namespace std;

CreateFile::CreateFile(){ 
    CreateFile::command = "cat";
};

void CreateFile::Command(string cmd){
    ofstream Fichier(comd);
    Fichier.close();
    cout << "test" << endl;
};

string CreateFile::getCommand(){
    return CreateFile::command;
};