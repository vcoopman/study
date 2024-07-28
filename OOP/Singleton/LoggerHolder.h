#ifndef LOGGER_HOLDER_H
#define LOGGER_HOLDER_H

#include "Logger.h"

/**
 * This is a Singleton class.
 * Its primary use is to get an instance of the logger.
 */
class LoggerHolder {
  public:
    void operator=(const LoggerHolder &) = delete;
    static Logger* getLogger();

  private:
    LoggerHolder(){};
    static Logger* _logger;
};

Logger* LoggerHolder::_logger = nullptr;

Logger* LoggerHolder::getLogger() {
  if (_logger == nullptr) {
    _logger = new Logger();
  }

  return _logger;
}

#endif
