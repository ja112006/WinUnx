#include <iostream>
#include <fstream>
#include <filesystem>
#include "Commands/FileCommands/lsCommand.hpp"
#include "Events/KeyEvents.hpp"
#include "Events/ConsoleEvents.hpp"
#include "main.hpp"

using namespace std;

lsCommand::lsCommand(){ 
    lsCommand::command = "ls";
};

void lsCommand::Command(string cmd){
    cout << std::filesystem::current_path() << endl;
};

string lsCommand::getCommand(){
    return lsCommand::command;
};