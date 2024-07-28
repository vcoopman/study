#include <string>
#include <iostream>

#include "logging.h"

int main() { 
	LOG(Logger::INFO, __func__, "System started."); 
	LOG(Logger::DEBUG, __func__, "Debugging information."); 
	LOG(Logger::ERROR, __func__, "An error occurred!"); 

	return 0; 
}
