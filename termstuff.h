#ifndef _TERM_STUFF_
#define _TERM_STUFF_

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
    NORMAL      = 1 << 0,
    BOLD        = 1 << 1,
    FAINT       = 1 << 2,
    ITALIC      = 1 << 3,
    UNDERLINE   = 1 << 4,
    BLINK       = 1 << 5,
    RAPID_BLINK = 1 << 6,
    SWAP_FG_BG  = 1 << 7,
    CONCEAL     = 1 << 8,
    CROSSED_OUT = 1 << 9,
    PRIMARY     = 1 << 10,
};

// ---------- TYPES ----------

typedef enum Colors Colors;
typedef enum ColorOpt ColorOpt;
typedef enum FontEffects FontEffects;

// ---------- FUNCTIONS ----------

void term_apply_color(Colors color, ColorOpt coloropt);
void term_apply_font_effects(FontEffects fonteffects);

#endif // !_TERM_STUFF_
