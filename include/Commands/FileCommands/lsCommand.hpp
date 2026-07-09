#ifndef LSCOMMAND_HPP
#define LSCOMMAND_HPP

#include "Commands/Commands.hpp"

class lsCommand : public Commands{
    private:
        string command;        
    public:
        lsCommand();
        void Command(string cmd);
        string getCommand();
};

#endif