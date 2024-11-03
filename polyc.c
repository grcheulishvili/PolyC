/*
   Program:    PolyC
   Author:     Giorgi Rcheulishvili
   Created:    2 Nov, 2024

   PURPOSE : This program is designed to create
   one polyglot file from 3 input files. Namely, any PDF, JPEG and ZIP.
*/

/*
    steps to take for complete program

        1. check arguments DONE
        2. check if provided files exist DONE
        3. read contents of provided files PARTIALLY-DONE
        4. identify files by their type
        5. ...

*/

#include "polyc.h"

int main(int argc, char *argv[])
{
    char *file[2];

    // check if all necessary arguments are present
    if (argc < 4)
    {
        fprintf(stderr, "Usage: %s <file1> <file2> <file3>\n", argv[0]);

        return -1;
    }

    // cannot figure out strcpy() - ERROR: segmentation fault core dumped
    // getting file list
    file[0] = argv[1];
    file[1] = argv[2];
    file[2] = argv[3];

    // check if given files exist on the system
    for (int i = 0; i < 3; i++)
    {
        if (access(file[i], F_OK) == 0)
        {
            printf("File \"%s\" exists.\n", file[i]);
            print_contents(file[i]);
        }
        else
        {
            fprintf(stderr, "File %s doesn't exist.\n", file[i]);
            return -1;
        }
    }

}

/*

 print file contents given buffer size. 
 NEEDS CHANGE

*/
char *print_contents(FILE *ptr)
{
    unsigned char buffer[100];
    FILE *file;
    file = fopen(ptr, "rb");

    fread(buffer, sizeof(buffer), 1, file);

    for(int i = 0; i < 100; i++)
    {
        printf("%u ", buffer[i]);
    }
    printf("\n");   
}