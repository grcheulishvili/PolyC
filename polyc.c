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
        3. read contents of provided files
        4. identify which is which
        5. ...

*/

#include "polyc.h"

int main(int argc, char *argv[])
{
    char *file[2];

    // check if all necessary arguments are present
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
    for(int i = 0; i < 3; i++)
    {
        if(access(file[i], F_OK) == 0)
        {
            printf("File \"%s\" exists.\n", file[i]);
        } 
        else {
            fprintf(stderr, "File %s doesn't exist.\n", file[i]);
            return -1;
        }
    }
  

    

    
}