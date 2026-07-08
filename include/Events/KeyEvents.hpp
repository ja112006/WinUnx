#ifndef KEYEVENTS_HPP
#define KEYEVENTS_HPP


#include <string>

using namespace std;

class KeyEvents{
    private:
        string cmd;
        string arg;
    public:
        void KeyDetect();
        string getCmd();
        string getArg();
};

#endif