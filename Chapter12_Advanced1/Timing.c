#include <stdio.h>
#include <time.h>

void do_something()
{
    volatile double value = 0.0;        // der Comiler nicht vegoptimieren soll dafuer steht volatile

    for (unsigned int i = 0; i < 1000000000; i++)
    {
        value += 1.0;
    }

}

int main()
{
    clock_t time_start = clock();    // clock_t ist ein Datentyp der die Anzahl der Takte speichert

    do_something();

    clock_t time_end = clock();
    clock_t duration = time_end - time_start;   // Differenz der Takte

    double s = (double)duration / CLOCKS_PER_SEC; // durch die Anzahl der Takte pro Sekunde teilen
    double ms = s * 1000.0; // ms = Millisekunden
    double us = ms * 1000.0; // us = Mikrosekunden
    double ns = us * 1000.0; // ns = Nanosekunden

    printf("s: %lf\n", s);
    printf("ms: %lf\n", ms);
    printf("us: %lf\n", us);
    printf("ns: %lf\n", ns);

    return 0;
}
