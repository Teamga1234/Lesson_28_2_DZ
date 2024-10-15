#include "Talking_book.h"

int main()
{
	Book a("Someone", "1", 2024, 12, 3, 13413234);
	Voice_Recording b("Oleg", 180, 2024, 12, 5);
	Talking_book c(a, b, 23);
	c.showInfo();
}