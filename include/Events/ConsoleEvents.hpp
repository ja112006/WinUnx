#ifndef CONSOLEEVENTS_HPP
#define CONSOLEEVENTS_HPP

#include <string>
#include <list>
#include "../../include/Commands/Commands.hpp"
#include <memory>

using namespace std;

class ConsoleEvents{
    private:
        list <unique_ptr<Commands>> cmdlist;
    public:
        ConsoleEvents();
        string Waiting();


};

#endif
