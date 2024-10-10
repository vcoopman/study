#ifndef TABLE_H
#define TABLE_H

#include <string>

#include "Waitress.h"

class Table {
	public:
		Table() {};
		virtual ~Table() {};
		virtual void accept(Waitress* waitress) = 0;
		virtual std::string get_order() const = 0;
};

#endif
