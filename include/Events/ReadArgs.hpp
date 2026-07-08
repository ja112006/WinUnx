#ifndef READARGS_HPP
#define READARGS_HPP

#include "Events/ConsoleEvents.hpp"
#include "Events/KeyEvents.hpp"
#include "Events/ReadArgs.hpp"
#include "Commands/Commands.hpp"
#include "Commands/FileCommands/CreateFile.hpp"
#include "main.hpp"

#include <string>
#include <memory>

using namespace std;

class ReadArgs{
    public:
        void Parsing(list <unique_ptr<Commands>>& cmdlist);
};

#endif