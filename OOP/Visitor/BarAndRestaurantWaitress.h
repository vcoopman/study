#include <iostream>

#include "MineWorkersTable.h"
#include "WomansTable.h"
#include "Waitress.h"

class BarAndRestaurantWaitress : public Waitress {
	public:
		void take_order(MineWorkersTable* table) override
		{
			std::cout << table->get_order() <<std::endl;

		};

		void take_order(WomansTable* table) override
		{
			std::cout << table->get_order() <<std::endl;

		};
};
