#ifndef CONSOLEEVENTS_HPP
#define CONSOLEEVENTS_HPP

#include <string>
#include <list>
#include "Commands/Commands.hpp"
#include <memory>

using namespace std;

class ConsoleEvents{
    private:
        list <unique_ptr<Commands>> cmdlist; //ConsoleEvents::cmdlist
    public: 
        ConsoleEvents();
        void Waiting();


};

#endif
