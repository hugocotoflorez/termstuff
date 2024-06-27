#include "termstuff.h"
#include <stdio.h>

int main(void)
{
    term_apply_color(BLACK, BRIGHT_BG);
    term_apply_color(BLACK, FG);
    term_apply_font_effects(BOLD | ITALIC);
    printf("Hello, World!\n");

    return 0;
}
