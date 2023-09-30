#include <stdio.h>
#include <string.h>

int main()
{
    int data[5] = {0};

    for (unsigned int i = 0; i < 5; i++)
    {
        fscanf(stdin, "%d", &data[i]);  // stdin is a FILE* object was die eingabe von der Tastatur liest
    }

    printf("\n");

    for (unsigned int i = 0; i < 5; i++)
    {
        fprintf(stdout, "STDOUT: %d\n", data[i]); // stdout is a FILE* object was die ausgabe auf der Konsole macht
    }

    printf("\n");

    for (unsigned int i = 0; i < 5; i++)
    {
        fprintf(stderr, "STDERR: %d\n", data[i]); // stderr is a FILE* object
    }

    return 0;
}
