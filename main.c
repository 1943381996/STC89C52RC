#include "headfile.h"

uint16 i=0;
int main()
{
	Nixie_tube_int();
	time_init();
	while(1)
	{
		Nixie_tube_disply(number_j);
	}
}