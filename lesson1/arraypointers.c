// A small program that demonstrates equivalence of arrays and pointers.
// and demonstrates two operators:  pointer dereference (*) and address operator (&).


#include <stdio.h>

main() {
    int counts[100];
    float temperature[1024];
    char * strings[] = { "one", "two", "3", "4", "55555"};
    
    char ** ptr = strings;

    printf ("The sizeof counts is %d\n", sizeof(counts));
    printf ("The sizeof an int is %d\n", sizeof(int));
    printf ("The sizeof is %d\n", sizeof(temperature));
    printf ("The sizeof a float is %d\n", sizeof(float));
    printf ("The sizeof strings array is %d\n", sizeof(strings));
    printf ("The sizeof char * is %d\n", sizeof(char *));
    printf ("The number of elements in the strings array is %d\n", sizeof(strings)/sizeof(strings[0]));

    printf ("sizeof(ptr) is %d\n", sizeof(ptr));
    printf("strings[5]= %s\n", strings[5]);
    printf("ptr[3]= %s\n", ptr[3]);
    printf("*(ptr+3)= %s\n",  *(ptr+3) );
    printf("*(strings+3)= %s\n",  *(strings+3) );
    printf("&(strings[3])= %ld\n",  (strings-ptr) );

}

