/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#5C6370", "#1E222A" },
	[SchemeSel] = { "#98C379", "#282C34" },
	[SchemeOut] = { "#98C379", "#282C34" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 28;
static unsigned int min_lineheight = 8;

/* Panel geometry/position. */
static int dmx = 16; /* put dmenu at this x offset */
static int dmy = 16; /* put dmenu at this y offset (measured from the bottom if topbar is 0) */
static unsigned int dmw = 1334; /* make dmenu this wide */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
