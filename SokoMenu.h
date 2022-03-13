
#include <exec/types.h>

struct menuSokobana
{
	WORD kolor, sterowanie;
	BOOL wyjscie;
};

enum
{
	KOLOR_CGA,
	KOLOR_TANDY,
	KOLOR_AMIGA
};

enum
{
	STER_JOYSTICK,
	STER_KLAWIATURA
};

struct menuSokobana obsluzMenu(struct Window *w);

