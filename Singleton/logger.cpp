
#include <iostream>
#include "logger.hpp"
using namespace std;

int Logger::counter = 0;

Logger::Logger()
{
    counter++;
    cout << "New instance created. Number of instance is: " << counter << endl;
}

void Logger::Log(string msg)
{
    cout << msg << endl;
}