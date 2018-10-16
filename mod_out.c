#include "mod_out.h"

/* public module function */

void pri(int x) 
{
    printf("%i",x);
    prn("");
}

/* private module functions */

static // <- hide
void prn(const char* s)
{
    printf("%s\n", s);
}