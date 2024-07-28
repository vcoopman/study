#include "LoggerHolder.h"

/**
 * Used to send logs. This macro is primarily useful because it automatically
 * determines the file name and line number for the developer. 
 *
 * @param priority Logging::BaseLog::Priority of the log message
 * @param routine Name of the routine in which this macro is being used from (std::string)
 * @param text Log message (std::string)
 */
#define LOG(priority, routine, text) \
if (LoggerHolder::getLogger()!=0) \
{ \
  LoggerHolder::getLogger()->log(priority, text, __FILE__, __LINE__, routine); \
} \
else \
{ \
  std::cerr << "SEVERE LOGGING ERROR - getLogger() returned NULL: file="; \
  std::cerr << __FILE__ << ", line=" << __LINE__ << std::endl; \
}
