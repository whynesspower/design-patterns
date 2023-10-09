#ifndef logger_h
#define logger_h

#include <string>
using namespace std;

class Logger
{

    static int counter;

public:
    Logger();
    void Log(string msg);
};

#endif