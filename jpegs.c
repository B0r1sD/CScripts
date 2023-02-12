#include <stdio.h>

// Detects if a file is a JPEG

int main(int argc, char *argv[])
{
    // Check usage
    if (argc != 2)
    {
        return 1;
    }

    // open file
    FILE *file = fopen(argv[1], "r");
    if (!file)
    {
        return 1;
    }

    //reading first 3 bytes that indicate jpeg format
    unsigned char bytes[3];
    fread(bytes, 3, 1, file);

    //checking first 3 bytes
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {

        printf("This is probably a JPEG\n");
        return 0;
    }
    else 
    {
        printf("This is not a JPEG\n");
        return 1;
    }
    // close file
    fclose(file);
}
