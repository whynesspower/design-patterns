#include <iostream>
#include "logger.hpp"
using namespace std;

int main()
{
    Logger *logger1 = Logger::getLogger();
    logger1->Log("this msg is from user 1");

    Logger *logger2 = Logger::getLogger();
    logger2->Log("this msg is from user 2");
    return 0;
}