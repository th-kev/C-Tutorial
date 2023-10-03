#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])    // argv = Argument Values was dem Programm uebergeben wird z.B. --version. argc = Argument Counter wie viele Argumente uebergeben wurden
{
    // argc = Argument Counter
    // argv = Argument Values
    printf("argc: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    int value = atoi(argv[1]);
    printf("%d\n", value);

    float val2 = atof(argv[2]);
    printf("%f\n", val2);

    double val3;
    sscanf(argv[3], "%lf", &val3);  // sscanf = string scan f = liest einen String ein und speichert ihn in eine Variable
    printf("%lf\n", val3);

    return 0;
}
