#ifndef logger_h
#define logger_h

#include <string>
#include <mutex>
using namespace std;

class Logger
{

    static int counter;
    // this is the single instance which will be used by all the
    // classes
    static Logger *loggerInstance;
    static mutex mtx;

    Logger();

public:
    static Logger *getLogger();
    void Log(string msg);
};

#endif