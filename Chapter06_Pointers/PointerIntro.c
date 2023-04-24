#include <stdio.h>

int main()
{
    int v = 1337;
    printf("v mem addr: %p\n", &v);   // &variable => mem addr.

    int *p = &v;    // pointer varable
     printf("p value: %p\n", p);
     printf("p mem addr: %p\n", &p);    // &variable => mem addr.
     printf("p deref: %d\n", *p);
    return 0;
}
