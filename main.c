#include "termstuff.h"
#include <stdio.h>

int main(void)
{
    term_apply_color(BLACK, BRIGHT_BG);
    term_apply_font_effects(BOLD | ITALIC);
    term_apply_rgb_color(255, 255, 0, FG);
    printf("Hello, World!\n");

    return 0;
}
