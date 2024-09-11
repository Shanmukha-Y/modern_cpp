#include <iostream>

class Log
{

public:
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
    const int LogLevelError = 0;

private:
    int m_LogLevel;

public:
    void setLevel(int level)
    {

        m_LogLevel = level;
    }
    void Warn(const char *message)
    {
        if (m_LogLevel >= LogLevelWarning)
        {
            std::cout << "[WARNING]: " << message << std::endl;
        }
    }
    void Error(const char *message)
    {
        if (m_LogLevel >= LogLevelError)
        {
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }
    void Info(const char *message)
    {
        if (m_LogLevel >= LogLevelInfo)
        {
            std::cout << "[INFO]: " << message << std::endl;
        }
    }
};

int main()
{
    Log log;
    log.setLevel(log.LogLevelWarning);
    log.Warn("It's Me!");
    log.Error("It's Me!");
    log.Info("It's Me!");
    return 0;
}