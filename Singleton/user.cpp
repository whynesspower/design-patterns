#include <iostream>
#include "logger.hpp"
#include <thread>
using namespace std;

Logger *createLogger1()
{
    Logger *logger1 = Logger::getLogger();
    logger1->Log("this msg is from user 1");
    return logger1;
}

Logger *createLogger2()
{
    Logger *logger2 = Logger::getLogger();
    logger2->Log("this msg is from user 2");
    return logger2;
}
int main()
{

    thread t1(createLogger1);
    thread t2(createLogger2);
    t1.join();
    t2.join();
    return 0;
}