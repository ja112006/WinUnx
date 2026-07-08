#include <iostream>
#include "main.hpp"
#include "Events/KeyEvents.hpp"
#include "Events/ConsoleEvents.hpp"
#include "Events/ReadArgs.hpp"

using namespace std;

void ReadArgs::Parsing(list <unique_ptr<Commands>>& cmdlist) {
    KeyEvents key;
    key.KeyDetect();
    for(auto& cm : cmdlist){
        if(cm->getCommand() == key.getCmd())
            cm->Command("");
    }
}