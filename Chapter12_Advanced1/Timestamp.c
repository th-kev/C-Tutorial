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
    clock_t clock_start = clock();    // clock_t ist ein Datentyp der die Anzahl der Takte speichert
    time_t time_start = time(NULL); // time_t ist ein Datentyp der die Anzahl der Sekunden seit 1.1.1970 speichert

    do_something();

    clock_t clock_end = clock();
    time_t time_end = time(NULL);   // Wall time
    clock_t duration = clock_end - clock_start;   // Differenz der Takte

    double duration2 = (double)difftime(time_end, time_start); // Differenz der Sekunden
{
    double s = (double)duration / CLOCKS_PER_SEC; // durch die Anzahl der Takte pro Sekunde teilen
    double ms = s * 1000.0; // ms = Millisekunden
    double us = ms * 1000.0; // us = Mikrosekunden
    double ns = us * 1000.0; // ns = Nanosekunden

    printf("s: %lf\n", s);
    printf("ms: %lf\n", ms);
    printf("us: %lf\n", us);
    printf("ns: %lf\n", ns);
}
{
    double s = (double)duration2 / CLOCKS_PER_SEC; // durch die Anzahl der Takte pro Sekunde teilen
    double ms = s * 1000.0; // ms = Millisekunden
    double us = ms * 1000.0; // us = Mikrosekunden
    double ns = us * 1000.0; // ns = Nanosekunden

    printf("s: %lf\n", s);
    printf("ms: %lf\n", ms);
    printf("us: %lf\n", us);
    printf("ns: %lf\n", ns);
}

    printf("Timestamp Start: %u\n", (unsigned int)time_start);  // Unix Timestamp
    printf("Timestamp End: %u\n", (unsigned int)time_end); // Unix Timestamp

    printf("Time Format: %s\n", ctime(&time_end)); // ctime() = convert time
    return 0;
}
