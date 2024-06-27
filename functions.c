#include "termstuff.h"
#include <stdio.h>

void term_apply_color(Colors color, ColorOpt coloropt)
{
    while (coloropt)
    {
        if (coloropt & DEFAULT_FG)
        {
            coloropt &= ~DEFAULT_FG;
            printf("\e[39m"); // ?
            continue;
        }
        if (coloropt & DEFAULT_BG)
        {
            coloropt &= ~DEFAULT_BG;
            printf("\e[49m"); // ?
            continue;
        }
        if (coloropt & FG)
        {
            coloropt &= ~FG;
            printf("\e[%dm", color + 30);
            continue;
        }
        if (coloropt & BG)
        {
            coloropt &= ~BG;
            printf("\e[%dm", color + 40);
            continue;
        }
        if (coloropt & BRIGHT_FG)
        {
            coloropt &= ~BRIGHT_FG;
            printf("\e[%dm", color + 90);
            continue;
        }
        if (coloropt & BRIGHT_BG)
        {
            coloropt &= ~BRIGHT_BG;
            printf("\e[%dm", color + 100);
            continue;
        }
    }
    fflush(stdout);
}

void term_apply_font_effects(FontEffects fonteffects)
{
    do
    {
        if (fonteffects == NORMAL)
        {
            printf("\e[0m");
            continue;
        }
        if (fonteffects & BOLD)
        {
            fonteffects &= ~BOLD;
            printf("\e[1m");
            continue;
        }
        if (fonteffects & FAINT)
        {
            fonteffects &= ~FAINT;
            printf("\e[2m");
            continue;
        }
        if (fonteffects & ITALIC)
        {
            fonteffects &= ~ITALIC;
            printf("\e[3m");
            continue;
        }
        if (fonteffects & UNDERLINE)
        {
            fonteffects &= ~UNDERLINE;
            printf("\e[4m");
            continue;
        }
        if (fonteffects & BLINK)
        {
            fonteffects &= ~BLINK;
            printf("\e[5m");
            continue;
        }
        if (fonteffects & RAPID_BLINK)
        {
            fonteffects &= ~RAPID_BLINK;
            printf("\e[6m");
            continue;
        }
        if (fonteffects & SWAP_FG_BG)
        {
            fonteffects &= ~SWAP_FG_BG;
            printf("\e[7m");
            continue;
        }
        if (fonteffects & CONCEAL)
        {
            fonteffects &= ~CONCEAL;
            printf("\e[8m");
            continue;
        }
        if (fonteffects & CROSSED_OUT)
        {
            fonteffects &= ~CROSSED_OUT;
            printf("\e[9m");
            continue;
        }
        if (fonteffects & PRIMARY)
        {
            fonteffects &= ~PRIMARY;
            printf("\e[10m");
            continue;
        }
    } while (fonteffects);
    fflush(stdout);
}
