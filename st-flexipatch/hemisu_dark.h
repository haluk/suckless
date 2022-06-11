#ifndef __HEMISU_DARK_H_
#define __HEMISU_DARK_H_

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    /* 8 normal colors */
    [0] = "#d5d6dd",
    [1] = "#ff0054",
    [2] = "#98971a",
    [3] = "#9d895e",
    [4] = "#67bee3",
    [5] = "#b576bc",
    [6] = "#569a9f",
    [7] = "#ededed",

    /* 8 bright colors */
    [8] = "#bbbbbb",
    [9] = "#d65e75",
    [10] = "#baffaa",
    [11] = "#ece1c8",
    [12] = "#9fd3e5",
    [13] = "#deb3df",
    [14] = "#b6e0e5",
    [15] = "#e6e6e6",

    [256] = "#000000",
    [257] = "#e6e6e6",
    [258] = "#da70d6",
    [259] = "#090a18",
};

/* Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultbg = 256;
unsigned int defaultfg = 257;
unsigned int defaultcs = 258;
unsigned int defaultrcs = 259;
unsigned int mousebg = 258;
unsigned int mousefg = 259;

#endif // __HEMISU_DARK_H_
