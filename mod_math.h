/* foo.h */

/* see https://www.embedded.com/design/prototyping-and-development/4023876/Modular-Programming-in-C */

/* public functions */

extern int add(int a, int b);

extern int sub(int a, int b);

/* local private functions */

static int minus_local(int a, int b);

static int add_local(int a, int b);