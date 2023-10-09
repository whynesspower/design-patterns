#ifndef logger_h
#define logger_h

#include <string>
using namespace std;

class Logger
{

    static int counter;
    Logger();

public:
    static Logger *getLogger void Log(string msg);
};

#endif