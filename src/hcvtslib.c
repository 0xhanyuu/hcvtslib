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

int cursor_enable_blinking() { return printf("\e[?12h"); }
int cursor_disable_blinking() { return printf("\e[?12l"); }
int cursor_show() { return printf("\e[?25h"); }
int cursor_hide() { return printf("\e[?25l"); }

// text modification

int insert_character(int num, FILE * stream) { return fprintf(stream, "\e[%d@", num); }
int delete_character(int num, FILE * stream) { return fprintf(stream, "\e[%dP", num); }
int erase_character(int num, FILE * stream) { return fprintf(stream, "\e[%dX", num); }
int insert_line(int num, FILE * stream) { return fprintf(stream, "\e[%dL", num); }
int delete_line(int num, FILE * stream) { return fprintf(stream, "\e[%dM", num); }
