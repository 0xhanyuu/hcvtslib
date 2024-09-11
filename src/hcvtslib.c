#include <stdio.h>

// cursor positioning

int cursor_move_up(int num, FILE * stream) { return fprintf(stream, "\e[%dA", num); }
int cursor_move_down(int num, FILE * stream) { return fprintf(stream, "\e[%dB", num); }
int cursor_move_forward(int num, FILE * stream) { return fprintf(stream, "\e[%dC", num); }
int cursor_move_backward(int num, FILE * stream) { return fprintf(stream, "\e[%dD", num); }
int cursor_move_prevline(int num, FILE * stream) { return fprintf(stream, "\e[%dE", num); }
int cursor_move_nextline(int num, FILE * stream) { return fprintf(stream, "\e[%dF", num); }
int cursor_horizontal(int num, FILE * stream) { return fprintf(stream, "\e[%dG", num); }
int cursor_vertical(int num, FILE * stream) { return fprintf(stream, "\e[%dd", num); }
int cursor_pos(int x, int y, FILE * stream) { return fprintf(stream, "\e[%d;%dH", x, y); }

// cursor visibility

// text modification
