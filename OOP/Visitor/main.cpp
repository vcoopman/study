#include "MineWorkersTable.h"
#include "WomansTable.h"
#include "BarAndRestaurantWaitress.h"

int main()
{
	Table* table1 = new MineWorkersTable();
	Table* table2 = new WomansTable();
	Waitress* waitress = new BarAndRestaurantWaitress();

	table1->accept(waitress);
	table2->accept(waitress);

	delete table1;
	delete table2;
	delete waitress;

	return 0;
};
