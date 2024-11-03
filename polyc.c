/* 
   Program:    PolyC 
   Author:     Giorgi Rcheulishvili
   Created:    2 Nov, 2024

   PURPOSE : This program is designed to create 
   one polyglot file from 3 input files. Namely PDF, JPEG and ZIP.
*/

#include "polyc.h"

int main(int argc, char *argv[])
{
    char *file[2];

    if(argc < 4)
    {
        fprintf(stderr, "Usage: %s <file1> <file2> <file3>\n", argv[0]);

        return -1;
    }

    // cannot figure out strcpy() - ERROR: segmentation fault core dumped
    // getting file list
    file[0] = argv[1];
    file[1] = argv[2];
    file[2] = argv[3];

    // checks if given files exist on the system
    if(access(file[0], F_OK) == 0)
    {
        printf("File %s exists.\n", file[0]);
    } else{
        fprintf(stderr, "File %s doesn't exist.\n", file[0]);
        return -1;
    }

    
}