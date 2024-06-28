#ifndef _TERM_STUFF_
#define _TERM_STUFF_

/*
 * ANSI escape codes
 * C library to make it easy
 *
 * Author: Hugo Coto Florez
 *
 * Documentation: https://en.wikipedia.org/wiki/ANSI_escape_code
 *
 */

#include <cstdint>
#include <stdint.h>

// ---------- ENUMS ----------

enum Colors
{
    BLACK = 0,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    PURPLE,
    CYAN,
    WHITE,
};

enum ColorOpt
{
    NONE       = 1 << 0,
    DEFAULT_FG = 1 << 1,
    DEFAULT_BG = 1 << 2,
    FG         = 1 << 3,
    BG         = 1 << 4,
    BRIGHT_FG  = 1 << 5,
    BRIGHT_BG  = 1 << 6,
};

enum FontEffects
{
    NORMAL          = 1 << 0,
    BOLD            = 1 << 1,
    FAINT           = 1 << 2,
    ITALIC          = 1 << 3,
    UNDERLINE       = 1 << 4,
    BLINK           = 1 << 5,
    RAPID_BLINK     = 1 << 6,
    INVERSE         = 1 << 7,
    CONCEAL         = 1 << 8,
    CROSSED_OUT     = 1 << 9,
    PRIMARY         = 1 << 10,
    FRAKTUR         = 1 << 11,
    BOLD_OFF        = 1 << 12,
    FAINT_OFF       = 1 << 13,
    ITALIC_OFF      = 1 << 14,
    UNDERLINE_OFF   = 1 << 15,
    BLINK_OFF       = 1 << 16,
    INVERSE_OFF     = 1 << 18,
    REVEAL          = 1 << 19,
    CONCEAL_OFF     = 1 << 19,
    CROSSED_OUT_OFF = 1 << 20,
    FRAMED          = 1 << 21,
    ENCIRCLED       = 1 << 22,
    OVERLINED       = 1 << 23,
    FRAMED_OFF      = 1 << 24,
    OVERLINED_OFF   = 1 << 25,
};

enum Font
{
    FONT1 = 1,
    FONT2,
    FONT3,
    FONT4,
    FONT5,
    FONT6,
    FONT7,
    FONT8,
    FONT9,
};

enum IdeogramEffects
{
    I_OFF              = 1 << 0,
    I_UNDERLINE        = 1 << 1,
    I_DOUBLE_UNDERLINE = 1 << 2,
    I_OVERLINE         = 1 << 3,
    I_DOUBLE_OVERLINE  = 1 << 4,
    I_STRESS_MARKING   = 1 << 5,

};

// ---------- TYPES ----------

typedef enum Colors Colors;
typedef enum ColorOpt ColorOpt;
typedef enum FontEffects FontEffects;
typedef enum IdeogramEffects IdeogramEffects;
typedef enum Font Font;

// ---------- FUNCTIONS ----------

// color and text effects
extern void term_apply_color(Colors color, ColorOpt coloropt);
extern void term_apply_8bit_color(uint8_t color, ColorOpt coloropt);
extern void term_apply_rgb_color(uint8_t r, uint8_t g, uint8_t b, ColorOpt coloropt);
extern void term_apply_font_effects(FontEffects fonteffects);
extern void term_apply_ideogram_effects(IdeogramEffects effects);
extern void term_change_font(Font font);

// cursor movement
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

#endif // !_TERM_STUFF_
