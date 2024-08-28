#include <stdio.h>
#include "../src/hcvtslib.h"
#include <stdbool.h>

int main()
{
	while ( true )
	{
		cursor_move_down(1);
		cursor_move_up(1);
	}
	return 0;
}
