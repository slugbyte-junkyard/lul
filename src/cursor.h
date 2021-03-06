#ifndef LUL_CURSOR
#define LUL_CURSOR
#include "tools.h"

cursor_t *cursor_create(doc_t *doc, unsigned int x, unsigned int y);
cursor_t *cursor_free(cursor_t * cur);
cursor_t *cursor_trouble_on(cursor_t * cur, char *msg);
bool cursor_is_evil(cursor_t *cur);

cursor_t *cursor_move_up(cursor_t *cur);
cursor_t *cursor_move_down(cursor_t *cur);
cursor_t *cursor_move_left(cursor_t *cur);
cursor_t *cursor_move_right(cursor_t *cur);

cursor_t *cursor_write_char(cursor_t *cur, char ch);

#endif 
