#include <stdbool.h>
#include <stdio.h>

int main()
{
    // Quadrat: Seitenlänge a vom User einlesen
    // Überprüfe: Ob der User eine gültige Zshl eingegeben hat
    //          bis sie gültig ist
    // Berechne den Umfang und den Flächeninhalt des Quadrats
    // Gebe diese Werte in der Konsole aus
    // u = 4 * a
    // a = a^2

    bool is_valid_number = false;
    float a;

    while (is_valid_number == false)
    {
        printf("Please enter the value for a: ");
        scanf("%f", &a);

        if (a > 0.0)
        {
            is_valid_number = true;
        }
        else
        {
            printf("You entered an invalid number!\n");
        }
    }

    float perimeter = 4 * a;
    float area = a * a;

    printf("Perimter %f, area %f", perimeter, area);
    return 0;
}
