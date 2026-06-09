#include <iostream>
#include "../../include/Events/ConsoleEvents.hpp"
#include "../../include/Events/KeyEvents.hpp"
#include "../../include/Commands/Commands.hpp"
#include "../../include/Commands/FileCommands/CreateFile.hpp"

#include <string>
#include <memory>


using namespace std;

ConsoleEvents::ConsoleEvents(){
    ConsoleEvents::cmdlist.push_back(make_unique<CreateFile>());
};

string ConsoleEvents::Waiting() {
    KeyEvents key;
    cout << '>';
    key.KeyDetect();
    for(auto& cm : ConsoleEvents::cmdlist){
        if(cm->getCommand() == key.getCmd())
            cm->Command("");
    }
    return key.getCmd();
};
