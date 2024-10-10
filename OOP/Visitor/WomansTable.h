#ifndef WOMANS_TABLE_H
#define WOMANS_TABLE_H

#include <string>

#include "Table.h"

class WomansTable : public Table {
	public:
		WomansTable() {};

		void accept(Waitress* waitress) override
		{
			waitress->take_order(this);
		};


		std::string get_order() const override
		{
			return "Coffees and Cakes";
		};
};

#endif
