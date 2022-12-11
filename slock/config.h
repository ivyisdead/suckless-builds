/* user and group to drop privileges to */
static const char *user  = "ivy";
static const char *group = "ivy";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282a36",     /* after initialization */
	[INPUT] =  "#ffaaff",   /* during input */
	[FAILED] = "#ffaaaa",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
