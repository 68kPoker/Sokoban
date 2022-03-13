
#include <exec/types.h>

struct menuSokobana
{
	WORD kolor, sterowanie;
	BOOL wyjscie;
};

struct menuSokobana obsluzMenu(struct Window *w);

