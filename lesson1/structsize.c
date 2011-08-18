#include <stdio.h>

main() {
    struct Things {
        char    aChar;
        int     intThingy;
        float   floatThingy;
        char *  ptrToChar;
        char    bChar;
    } things;
    struct ThingsANew {
        char *  ptrToChar;
        int     intThingy;
        float   floatThingy;
        char    aChar;
        char    bChar;
    } thingsANew;

   

    // Why are these two struct's with the same data a different size?
    // Could you tell by looking at them which is smaller?

    printf ("sizeof(Things)=%d\n", sizeof(struct Things));
    printf ("sizeof(ThingsANew)=%d\n", sizeof(struct ThingsANew));

   
}
