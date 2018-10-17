/* foo.c */

/* Import needed interfaces: */

#include "mod_y.h"

/* Implements this interface: */

#include "mod_math.h"

int add(int a, int b) 
{
    return add_local(a, b);
}

int sub(int a, int b) 
{
    return minus_local(a,b);
}

/* static can also be applied to functions to limit their scope to a single file. */

static int minus_local(int a, int b)
{
    return a - b;
}

static int add_local(int a, int b)
{
    return a + b;
}

