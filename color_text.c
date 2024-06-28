#include "termstuff.h"
#include <stdint.h>
#include <stdio.h>

void term_apply_color(Colors color, ColorOpt coloropt)
{
    if (coloropt & DEFAULT_FG)
        printf("\e[39m"); // ?
    if (coloropt & DEFAULT_BG)
        printf("\e[49m"); // ?
    if (coloropt & FG)
        printf("\e[%dm", color + 30);
    if (coloropt & BG)
        printf("\e[%dm", color + 40);
    if (coloropt & BRIGHT_FG)
        printf("\e[%dm", color + 90);
    if (coloropt & BRIGHT_BG)
        printf("\e[%dm", color + 100);
    fflush(stdout);
}

void term_apply_8bit_color(uint8_t color, ColorOpt coloropt)
{
    if (coloropt & FG)
        printf("\e[38;5;%dm", color + 30);
    if (coloropt & BG)
        printf("\e[48;5;%dm", color + 40);
    fflush(stdout);
}

void term_apply_rgb_color(uint8_t r, uint8_t g, uint8_t b, ColorOpt coloropt)
{
    if (coloropt & FG)
        printf("\e[38;2;%d;%d;%dm", r, g, b);
    if (coloropt & BG)
        printf("\e[48;2;%d;%d;%dm", r, g, b);
    fflush(stdout);
}

void term_apply_font_effects(FontEffects fonteffects)
{
    if (fonteffects == NORMAL)
        printf("\e[0m");
    if (fonteffects & BOLD)
        printf("\e[1m");
    if (fonteffects & FAINT)
        printf("\e[2m");
    if (fonteffects & ITALIC)
        printf("\e[3m");
    if (fonteffects & UNDERLINE)
        printf("\e[4m");
    if (fonteffects & BLINK)
        printf("\e[5m");
    if (fonteffects & RAPID_BLINK)
        printf("\e[6m");
    if (fonteffects & INVERSE)
        printf("\e[7m");
    if (fonteffects & CONCEAL)
        printf("\e[8m");
    if (fonteffects & CROSSED_OUT)
        printf("\e[9m");
    if (fonteffects & PRIMARY)
        printf("\e[10m");
    if (fonteffects & FRAKTUR)
        printf("\e[20m");
    if (fonteffects & BOLD_OFF)
        printf("\e[21m");
    if (fonteffects & FAINT_OFF)
        printf("\e[22m");
    if (fonteffects & ITALIC_OFF)
        printf("\e[23m");
    if (fonteffects & UNDERLINE_OFF)
        printf("\e[24m");
    if (fonteffects & BLINK_OFF)
        printf("\e[25m");
    if (fonteffects & INVERSE_OFF)
        printf("\e[27m");
    if (fonteffects & REVEAL)
        printf("\e[28m");
    if (fonteffects & CONCEAL_OFF)
        printf("\e[28m");
    if (fonteffects & CROSSED_OUT_OFF)
        printf("\e[29m");
    if (fonteffects & FRAMED)
        printf("\e[51m");
    if (fonteffects & ENCIRCLED)
        printf("\e[52m");
    if (fonteffects & OVERLINED)
        printf("\e[53m");
    if (fonteffects & FRAMED_OFF)
        printf("\e[54m");
    if (fonteffects & OVERLINED_OFF)
        printf("\e[55m");
    fflush(stdout);
}

void term_apply_ideogram_effects(IdeogramEffects effects)
{
    if (effects == I_OFF)
        printf("\e[65m");
    if (effects & I_UNDERLINE)
        printf("\e[60m");
    if (effects & I_DOUBLE_UNDERLINE)
        printf("\e[61m");
    if (effects & I_OVERLINE)
        printf("\e[62m");
    if (effects & I_DOUBLE_OVERLINE)
        printf("\e[63m");
    if (effects & I_STRESS_MARKING)
        printf("\e[64m");
    fflush(stdout);
}

void term_change_font(Font font)
{
    printf("\e[%dm", 10 + font);
}
