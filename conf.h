/* list of tags */
#define TAGS		"xnlhtr01uiva "
#define TAGS_SAVED	""

/* programs mapped to m-c, m-m, m-e */
#define SHELL		{"zsh"}
#define EDITOR		{"nvim"}
#define MAIL		{"mailx", "-f", "+inbox"}

/* TERM variable for launched programs */
#define TERM		"fbpad-256"

/* tinyfont files for regular, italic, and bold fonts */
#define FR		"./fonts/JetBrainsMono-Regular.tf"
#define FI		"./fonts/JetBrainsMono-Regular.tf"
#define FB		"./fonts/JetBrainsMono-Regular.tf"

/* foreground and background colors */
#define FGCOLOR		COLORFG
#define BGCOLOR		COLORBG

/* where to write the screen shot */
#define SCRSHOT		"/tmp/scr"

/* lock command password; NULL disables locking */
#define PASS		NULL

/* optimized version of fb_val() */
#define FB_VAL(r, g, b)	fb_val((r), (g), (b))

/* brighten colors 0-7 for bold text */
#define BRIGHTEN	1

/* black */
#define COLOR0		0x3B4252
#define COLOR8		0x4C566A
/* red */
#define COLOR1		0xBF616A
#define COLOR9		0xBF616A
/* green */
#define COLOR2		0xA3BE8C
#define COLORA		0xA3BE8C
/* yellow */
#define COLOR3		0xEBCB8B
#define COLORB		0xEBCB8B
/* blue */
#define COLOR4		0x81A1C1
#define COLORC		0x81A1C1
/* magenta */
#define COLOR5		0xB48EAD
#define COLORD		0xB48EAD
/* cyan */
#define COLOR6		0x88C0D0
#define COLORE		0x8FBCBB
/* white */
#define COLOR7		0xE5E9F0
#define COLORF		0xECEFF4
/* BG/FG */
#define COLORFG		0xD8DEE9
#define COLORBG		0x2E3440
