#include <stdio.h>

// cursor positioning

int cursor_move_up(int num, FILE * stream);
int cursor_move_down(int num, FILE * stream);
int cursor_move_forward(int num, FILE * stream);
int cursor_move_backward(int num, FILE * stream);
int cursor_move_nextline(int num, FILE * stream);
int cursor_move_prevline(int num, FILE * stream);
int cursor_horizontal(int num, FILE * stream);
int cursor_vertical(int num, FILE * stream);
int cursor_pos(int x, int y, FILE * stream);

// cursor visibility

int cursor_enable_blinking();
int cursor_disable_blinking();
int cursor_show();
int cursor_hide();

// text modification
