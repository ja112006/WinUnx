#include <iostream>
#include "Events/KeyEvents.hpp"
#include <string>
#include <sstream>
#include <vector>
#include "main.hpp"

using namespace std;

void KeyEvents::KeyDetect(){ //Cette méthode permet de prendre l'input et de séparer la commande de l'argument, à faire -> il faudrait prendre plusieurs arguments
    string ligne;
    getline(std::cin, ligne);
    istringstream iss(ligne);
    string cmd, arg;
    iss >> cmd; 
    KeyEvents::cmd = cmd;
    args.clear();
    while(iss >> arg){
        args.push_back(arg);
    }

};

string KeyEvents::getCmd(){
    return cmd;
};