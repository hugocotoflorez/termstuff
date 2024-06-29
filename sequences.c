#include "termstuff.h"
#include <stdio.h>

void term_vt_secuence(VtSequence sequence)
{
    printf("\e[%d~", sequence);
}

void term_xterm_sequence(XtermSequence sequence)
{
    if (sequence < 'P')
        printf("\e[%d", sequence);
    else
        printf("\e[1%d", sequence);
}

void term_ascii_control_code(AsciiControlCode controlcode)
{
    printf("%c", controlcode);
}

void term_iso_control_code(IsoControlCode controlcode)
{
    printf("%c", controlcode);
}
