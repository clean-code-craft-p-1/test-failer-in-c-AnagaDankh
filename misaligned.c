#include "misaligned.h"

int printColorMap() 
{
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 5; j++) 
        {
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}
void MisalignedcolorTest()
{
    int result = printColorMap();
    assert(result == 0);
    assert(result == 25);
    printf("All is well (maybe!)\n");
}
int main() {
    MisalignedcolorTest();

    return 0;
}
