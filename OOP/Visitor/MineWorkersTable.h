#ifndef MINE_WORKERS_TABLE_H
#define MINE_WORKERS_TABLE_H

#include <string>

#include "Table.h"

class MineWorkersTable : public Table {
	public:
		MineWorkersTable () {};

		void accept(Waitress* waitress) override
		{
			waitress->take_order(this);
		};

		std::string get_order() const override
		{
			return "Beers and Sandwiches";
		};
};

#endif
