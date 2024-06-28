#include "termstuff.h"
#include <stdint.h>

extern void term_cursor_up(uint16_t n);
extern void term_cursor_down(uint16_t n);
extern void term_cursor_forward(uint16_t n);
extern void term_cursor_back(uint16_t n);
extern void term_cursor_next_line(uint16_t n);
extern void term_cursor_previous_line(uint16_t n);
extern void term_cursor_horizontal_absolute(uint16_t n);
extern void term_cursor_position(uint16_t n, uint16_t m);
extern void term_cursor_erase_display(uint16_t n);
extern void term_cursor_erase_line(uint16_t n);
extern void term_cursor_scroll_up(uint16_t n);
extern void term_cursor_scroll_down(uint16_t n);
extern void term_cursor_horizontal_vertical_position(uint16_t n, uint16_t m);
extern void term_cursor_aux_post_on();
extern void term_cursor_aux_port_off();
extern void term_cursor_device_status_repost();
extern void term_cursor_save_current_possition();
extern void term_cursor_restore_saved_position();
extern void term_cursor_show();
extern void term_cursor_hide();
extern void term_cursor_enable_reporting_focus();
extern void term_cursor_disable_reporting_focus();
extern void term_cursor_enable_alternative_screen_buffer();
extern void term_cursor_disable_alternative_screen_buffer();
extern void term_cursor_bracketed_paste_mode_on();
extern void term_cursor_bracketed_paste_mode_off();
