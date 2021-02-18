#ifndef __TEMPUS_FUTURE_H_
#define __TEMPUS_FUTURE_H_

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    /* 8 normal colors */
    [0] = "#090a18",
    [1] = "#ff778a",
    [2] = "#6ab539",
    [3] = "#bfa01a",
    [4] = "#4aaed3",
    [5] = "#e58a82",
    [6] = "#29b3bb",
    [7] = "#a59ebd",

    /* 8 bright colors */
    [8] = "#260e22",
    [9] = "#f78e2f",
    [10] = "#60ba80",
    [11] = "#de9b1d",
    [12] = "#8ba7ea",
    [13] = "#e08bd6",
    [14] = "#2cbab6",
    [15] = "#b4abac",

    /* more colors can be added after 255 to use with DefaultXX */

    /*
     * PRO TIP: this is good when trying to dynamically change from a
     * dark to a light theme or vice versa using ANSI escape sequences.
     *
     * Scenario:
     *
     * If on a dark theme we set defaultbg = 0 (with 15 being the
     * defaultfg), then changing the value of '0' to what would be
     * appropriate for a light theme (e.g. #ffffff) would turn the
     * background white, when what we really wanted was to alter the
     * foreground.
     * That is because the assumption for the design of the Tempus
     * themes is that colour codes represent colours.  So if a light
     * theme needs a black foregound, it must use color0.  Whereas
     * others default to defining the value of color0 as equivalent to
     * background regardless of the colour value (and color15 as the
     * foreground in the same way).  I think this is semantically
     * incorrect and might cause problems.
     *
     * For working examples, see my dotfiles, specifically the
     * 'own_script_update_running_terminals' under the "bin" directory:
     * https://gitlab.com/protesilaos/dotfiles.  Note that this script
     * is invoked from the 'own_script_update_environment_theme', which
     * is typically interfaced via the 'tempusmenu'.
     */
    [256] = "#090a18",
    [257] = "#b4abac",
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

#endif // __TEMPUS_FUTURE_H_
