#include "tshirts.h"

int main() 
{
    tshirtssize();
}
void tshirtssize()
{
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    printf("All is well (maybe!)\n");
}

