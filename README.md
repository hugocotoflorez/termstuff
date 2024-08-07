# termstuff

## About

Just to make doing things for the terminal easy!

## Quick manual

### Colors

- `term_apply_color(Colors, ColorOpt)`: Change color.
- `term_apply_8bit_color(color, ColorOpt)`: Change color (color is a 8bit integrer).
- `term_apply_rgb_color(r, g, b, coloropt)`: Change color by rgb.
- `term_apply_font_effects(FontEffects)`: Apply effects to text.
- `term_apply_ideogram_effects(IdeogramEffects)`
- `term_change_font(Font)`

### Colors
- BLACK
- RED
- GREEN
- YELLOW
- BLUE
- PURPLE
- CYAN
- WHITE
- GRAY1 - GRAY24 (gray scale)

#### Color Options
- NONE (useless)
- DEFAULT_FG (color is ignored)
- DEFAULT_BG (color is ignored)
- FG
- BG
- BRIGHT_FG
- BRIGHT_BG

#### Font Effects
- NORMAL
- BOLD
- FAINT
- ITALIC
- UNDERLINE
- BLINK
- RAPID_BLINK
- INVERSE
- CONCEAL
- CROSSED_OUT
- PRIMARY
- FRAKTUR
- BOLD_OFF
- FAINT_OFF
- ITALIC_OFF
- UNDERLINE_OFF
- BLINK_OFF
- INVERSE_OFF

The following options dont work in some terminals
- REVEAL
- CONCEAL_OFF
- CROSSED_OUT_OFF
- FRAMED
- ENCIRCLED
- OVERLINED
- FRAMED_OFF
- OVERLINED_OFF

### Cursor movement

- `term_cursor_up(n)`
- `term_cursor_down(n)`
- `term_cursor_forward(n)`
- `term_cursor_back(n)`
- `term_cursor_next_line(n)`
- `term_cursor_previous_line(n)`
- `term_cursor_horizontal_absolute(n)`
- `term_cursor_position(n, m)`
- `term_cursor_erase_display(n)`
- `term_cursor_erase_line(n)`
- `term_cursor_scroll_up(n)`
- `term_cursor_scroll_down(n)`
- `term_cursor_horizontal_vertical_position(n, m)`
- `term_cursor_aux_post_on()`
- `term_cursor_aux_port_off()`
- `term_cursor_device_status_repost()`
- `term_cursor_save_current_possition()`
- `term_cursor_restore_saved_position()`
- `term_cursor_show()`
- `term_cursor_hide()`
- `term_cursor_enable_reporting_focus()`
- `term_cursor_disable_reporting_focus()`
- `term_cursor_enable_alternative_screen_buffer()`
- `term_cursor_disable_alternative_screen_buffer()`
- `term_cursor_bracketed_paste_mode_on()`
- `term_cursor_bracketed_paste_mode_off()`
- `term_clear_screen()`

> [!note]
> In the header file you can view all the options for all the functions
> You can chech [wikipedia](https://en.wikipedia.org/wiki/ANSI_escape_code)
> for more info.

