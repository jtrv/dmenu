/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy  = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Blex Mono Nerd Font:pixelsize=18:antialias=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/* Scheme                  fg         bg        */
	[SchemeNorm] =          { "#cdd6f4", "#1e1e2e" },
	[SchemeSel] =           { "#1e1e2e", "#cba6f7" },
	[SchemeSelHighlight] =  { "#1e2e2e", "#89dceb" },
	[SchemeNormHighlight] = { "#1e2e2e", "#89dceb" },
	[SchemeOut] =           { "#1e1e2e", "#cba6f7" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
