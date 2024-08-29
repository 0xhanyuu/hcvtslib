#include <stdio.h>

// cursor positioning

void cursor_move_up(int num) { printf("\e[%dA", num); }
void cursor_move_down(int num) { printf("\e[%dB", num); }
void cursor_move_forward(int num) { printf("\e[%dC", num); }
void cursor_move_backward(int num) { printf("\e[%dD", num); }
void cursor_move_prevline(int num) { printf("\e[%dE", num); }
void cursor_move_nextline(int num) { printf("\e[%dF", num); }
void cursor_horizontal(int num) { printf("\e[%dG", num); }
void cursor_vertical(int num) { printf("\e[%dd", num); }
void cursor_pos(int x, int y) { printf("\e[%d;%dH", x, y); }

// cursor visibility

// text modification
