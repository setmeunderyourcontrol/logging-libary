#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

class Logger {
private:
    void enable() 
    {
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        DWORD dwMode = 0;
        GetConsoleMode(hOut, &dwMode);
        dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        SetConsoleMode(hOut, dwMode);
    }
public:
    Logger() 
    {
        enable();
    }
    const std::string RESET = "\033[0m";
    const std::string RED = "\033[31m";
    const std::string GREEN = "\033[32m";
    const std::string YELLOW = "\033[33m";
    const std::string BLUE = "\033[34m";
    const std::string MAGENTA = "\033[35m";
    const std::string CYAN = "\033[36m";
    const std::string WHITE = "\033[37m";
    const std::string BRIGHT_MAGENTA = "\033[95m";
    const std::string BRIGHT_RED = "\033[91m";
    const std::string BRIGHT_GREEN = "\033[92m";
    const std::string BRIGHT_YELLOW = "\033[93m";


    void error(const std::string& message) 
    {
        std::cout << WHITE << "[" << RED << "ERROR" << WHITE << "] " << RESET << message << std::endl;
    }

    void success(const std::string& message) 
    {
        std::cout << WHITE << "[" << GREEN << "SUCCESS" << WHITE << "] " << RESET << message << std::endl;
    }

    void warn(const std::string& message) 
    {
        std::cout << WHITE << "[" << YELLOW << "WARN" << WHITE << "] " << RESET << message << std::endl;
    }

    void info(const std::string& message) 
    {
        std::cout << WHITE << "[" << CYAN << "INFO" << WHITE << "] " << RESET << message << std::endl;
    }

    void print(const std::string& message, const std::string str,const std::string& color) {
        std::cout << WHITE << "[" << color << str << WHITE << "] " << RESET << message << std::endl;
    }
};

