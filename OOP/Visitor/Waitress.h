#ifndef WAITRESS_H
#define WAITRESS_H

class MineWorkersTable; // forward decl.
class WomansTable; // forward decl.

class Waitress { 
	public:
		virtual ~Waitress() {};
		virtual void take_order(MineWorkersTable* table) = 0;
		virtual void take_order(WomansTable* table) = 0;
};

#endif
