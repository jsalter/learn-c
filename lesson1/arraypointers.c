/* A small program that demonstrates equivalence of arrays and pointers. */
/* and demonstrates two operators:  pointer dereference (*) and address operator (&). */


#include <stdio.h>

int main() {
    int counts[100];
    float temperature[1024];
    char * strings[] = { "one", "two", "3", "4", "55555"};
    
    char ** ptr = strings;

    printf ("The sizeof counts is %lu\n", sizeof(counts));
    printf ("The sizeof an int is %lu\n", sizeof(int));
    printf ("The sizeof is %lu\n", sizeof(temperature));
    printf ("The sizeof a float is %lu\n", sizeof(float));
    printf ("The sizeof strings array is %lu\n", sizeof(strings));
    printf ("The sizeof char * is %lu\n", sizeof(char *));
    printf ("The number of elements in the strings array is %lu\n", sizeof(strings)/sizeof(strings[0]));

    printf ("sizeof(ptr) is %lu\n", sizeof(ptr));
    printf("strings[5]= %s\n", strings[5]);
    printf("ptr[3]= %s\n", ptr[3]);
    printf("*(ptr+3)= %s\n",  *(ptr+3) );
    printf("*(strings+3)= %s\n",  *(strings+3) );
    printf("&(strings[3])= %lu\n",  (strings-ptr) );

    return 0;
}

