#include "termstuff.h"
#include <stdint.h>
#include <stdio.h>

void term_cursor_up(uint16_t n)
{
    printf("\e[%dA", n);
}

void term_cursor_down(uint16_t n)
{
    printf("\e[%dB",n);
}

void term_cursor_forward(uint16_t n)
{
    printf("\e[%dC",n);
}

void term_cursor_back(uint16_t n)
{
    printf("\e[%dD",n);
}

void term_cursor_next_line(uint16_t n)
{
    printf("\e[%dE",n);
}

void term_cursor_previous_line(uint16_t n)
{
    printf("\e[%dF",n);
}

void term_cursor_horizontal_absolute(uint16_t n)
{
    printf("\e[%dG",n);
}

void term_cursor_position(uint16_t n, uint16_t m)
{
    printf("\e[%d;%dH",n,m);
}

void term_cursor_erase_display(uint16_t n)
{
    printf("\e[%dJ",n);
}

void term_cursor_erase_line(uint16_t n)
{
    printf("\e[%dK",n);
}

void term_cursor_scroll_up(uint16_t n)
{
    printf("\e[%dS",n);
}

void term_cursor_scroll_down(uint16_t n)
{
    printf("\e[%dT",n);
}

void term_cursor_horizontal_vertical_position(uint16_t n, uint16_t m)
{
    printf("\e[%d;%df",n,m);
}

void term_cursor_aux_post_on()
{
    printf("\e[5i");
}

void term_cursor_aux_port_off()
{
    printf("\e[4i");
}

void term_cursor_device_status_repost()
{
    printf("\e[i6n");
}

void term_cursor_save_current_possition()
{
    printf("\e[s");
}

void term_cursor_restore_saved_position()
{
    printf("\e[u");
}

void term_cursor_show()
{
    printf("\e[?25h");
}

void term_cursor_hide()
{
    printf("\e[?25l");
}

void term_cursor_enable_reporting_focus()
{
    printf("\e[?1004h");
}

void term_cursor_disable_reporting_focus()
{
    printf("\e[?1004l");
}

void term_cursor_enable_alternative_screen_buffer()
{
    printf("\e[?1049h");
}

void term_cursor_disable_alternative_screen_buffer()
{
    printf("\e[?1049l");
}

void term_cursor_bracketed_paste_mode_on()
{
    printf("\e[?2004h");
}

void term_cursor_bracketed_paste_mode_off()
{
    printf("\e[2004l");
}
