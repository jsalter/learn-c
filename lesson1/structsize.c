#include <stdio.h>

int main() {
    struct Things {
        char    aChar;
        int     intThingy;
        float   floatThingy;
        char *  ptrToChar;
        char    bChar;
    };

    struct ThingsANew {
        char *  ptrToChar;
        int     intThingy;
        float   floatThingy;
        char    aChar;
        char    bChar;
    };

    /* Why are these two struct's with the same data a different size? */
    /* Could you tell by looking at them which is smaller? */

    printf ("sizeof(Things)=%lu\n", sizeof(struct Things));
    printf ("sizeof(ThingsANew)=%lu\n", sizeof(struct ThingsANew));

    return 0; 
}
