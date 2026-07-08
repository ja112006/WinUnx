#include <iostream>
#include "Events/ConsoleEvents.hpp"
#include "Events/KeyEvents.hpp"
#include "Events/ReadArgs.hpp"
#include "Commands/Commands.hpp"
#include "Commands/FileCommands/CreateFile.hpp"
#include "main.hpp"

#include <string>
#include <memory>


using namespace std;

ConsoleEvents::ConsoleEvents(){
    ConsoleEvents::cmdlist.push_back(make_unique<CreateFile>());
};

void ConsoleEvents::Waiting() {
    cout << '>';
    ReadArgs readargs;
    readargs.Parsing(cmdlist);
    
};
