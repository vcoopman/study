#include <iostream> 
#include <string>
#include <chrono>
#include "time.h"

class Logger {
  public:
    Logger() {
      srand(time(0));
      this->id = rand() % 100; 
    }; 

    ~Logger() = default;

    enum LogLevel {
      TRACE,
      DELOUSE,
      DEBUG,
      INFO,
      NOTICE,
      WARNING,
      ERROR,
      CRITICAL,
      ALERT,
      EMERGENCY
    }; 

    void log(
      LogLevel level,
      const std::string& message,
      const std::string& filename,
      const int line,
      const std::string& routine
    )
    {
      std::cout << "#" << this->id << "[" << filename << "]" << "[" << line << "]" <<
        "(" << routine << ")" << "[" << levelToString(level) << "] " <<
      getCurrentTimestamp() << ": " << message << std::endl; 
    };

  private:
    long id;

    /**
     * Gets current timestamp with milliseconds precision.
     * Shamelessly copied from: https://stackoverflow.com/a/50923834/10015672
     */
    std::string getCurrentTimestamp() {
      // Here to avoid some annoying compiling warnings that I don't want to fix yet.
      #pragma GCC diagnostic push
      #pragma GCC diagnostic ignored "-Wformat-overflow"

      using std::chrono::system_clock;
      auto currentTime = std::chrono::system_clock::now();
      char buffer[80];
      auto transformed = currentTime.time_since_epoch().count() / 1000000;
      auto millis = transformed % 1000;
      std::time_t tt;
      tt = system_clock::to_time_t ( currentTime );
      auto timeinfo = localtime (&tt);
      strftime (buffer,80,"%FT%H:%M:%S",timeinfo);
      sprintf(buffer, "%s:%03d",buffer,(int)millis);

      #pragma GCC diagnostic pop

      return std::string(buffer);
    }; 

    std::string levelToString(LogLevel level) { 
      switch (level) { 
        case TRACE:
          return "TRACE";
        case DELOUSE:
          return "DELOUSE";
        case DEBUG: 
          return "DEBUG"; 
        case INFO: 
          return "INFO"; 
        case WARNING: 
          return "WARNING"; 
        case ERROR: 
          return "ERROR"; 
        case CRITICAL: 
          return "CRITICAL"; 
        case ALERT: 
          return "ALERT"; 
        case EMERGENCY: 
          return "EMERGENCY"; 
        default: 
          return "UNKNOWN"; 
      } 
    };
};
