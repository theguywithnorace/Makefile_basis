#include <libc.h>

int hello(void)
{
    write(1, "hello\n", 6);
    return (0);
}