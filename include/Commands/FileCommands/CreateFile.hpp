#ifndef CREATEFILE_HPP
#define CREATEFILE_HPP

#include "Commands/Commands.hpp"

class CreateFile : public Commands{
    private:
        string command;        
    public:
        CreateFile();
        void Command(string cmd);
        string getCommand();
};

#endif