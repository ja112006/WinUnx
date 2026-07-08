#include <iostream>
#include "Events/KeyEvents.hpp"
#include <string>
#include <sstream>
#include "main.hpp"

using namespace std;

void KeyEvents::KeyDetect(){ //organiser pour qu'il y ai qu'une instance dans consolevent, et que toutes les class puisse se communiquer le return cmd
    std::string ligne;
    std::getline(std::cin, ligne);
    std::istringstream iss(ligne);
    std::string cmd, arg;
    iss >> cmd; 
    iss >> arg;
    KeyEvents::cmd = cmd;
    KeyEvents::arg = arg;
    args = arg;
};

string KeyEvents::getCmd(){
    return cmd;
};

string KeyEvents::getArg(){
    return arg;
};