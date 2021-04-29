
#include <unistd.h>

void fct_lib(void)
{
    write(1, "in lib\n", 7);
}