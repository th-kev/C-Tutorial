#include <stdio.h>
#include <string.h>

#include "Lib.h"

char PROJECT_DIR[] = "D:/Udemy/UdemyC_Template-main/";

int main()
{
    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJECT_DIR, 100);
    strncat(output_filepath, "Chapter11_Files/UnknownFileSizeWrite/OutputData.txt", 55);


    FILE *fp = fopen(output_filepath, "w");

    if (fp == NULL)
    {
        return 1;
    }

    int data[5] = {1 ,2 ,3 ,4 ,5};

    for (unsigned int i = 0; i < 5; i++)
    {
        char temp[50] = {'\0'};
        sprintf(temp, "Value: %d\n - LineEnd", data[i]);     // sprintf() schreibt in einen String, also wird schön Formatiert
        fputs(temp, fp);
    }


    fclose(fp);


    return 0;
}
