#include "../p2c.h"
#include "intro.h"

// charcount -- count characters in standard input
void charcount()
{
    integer nc;
    character c;

    nc = 0;
    while (getc(c) != ENDFILE)
        nc = nc + 1;
    putdec(nc, 1);
    putc(NEWLINE);
}
