#include <stdio.h>
#include <string.h>

char PROJEKT_DIR[] = "Chapter11_Files/FileBinary/";

typedef struct Main
{
    int a;
    float b;
} Data;

void print_data(Data *data)
{
    printf(" %d - %f\n", data->a, data->b);

}

int main()
{

    Data data = {.a = 42, .b = 22.3f};
    print_data(&data);

    // WRITE


    char output_filepath[100] = {'\0'};
    strncpy(output_filepath, PROJEKT_DIR, 100);
    strncat(output_filepath, "Chapter11_Files/FIleBinary/Data.bin", 60);

    FILE *output_file = fopen(output_filepath, "wb");   // wb = write binary
    if (output_file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&data, sizeof(Data), 1, output_file); // write 1 element of size Data to output_file
    fclose(output_file);

    // READ

    Data data2 = {.a = 42, .b = 22.3f};
    char input_filepath[100] = {'\0'};
    strncpy(input_filepath, PROJEKT_DIR, 100);
    strncat(input_filepath, "Chapter11_Files/FIleBinary/Data.bin", 60);

    FILE *input_file = fopen(input_filepath, "rb");   // rb = read binary
    fclose(input_file);
    print_data(&data2);
    return 0;


}
