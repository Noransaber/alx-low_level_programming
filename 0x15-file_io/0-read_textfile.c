#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read the file has extension text from the input to STDOUT.
* @filename: the name of the file to be read
* @letters: letters numbers in the file to be read
* Return: w- actual num of bytes to be read and printed
* zeroo if it fails or filename is NULL.
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
char * store_var;
ssize_t fD;
ssize_t write_var;
ssize_t bytes_num;
/*open the file with read only mode by POSIX */
fD = open(filename, O_RDONLY);
/*check if it opened successfully*/
if (fD == -1)
return (0);

/* init space in the memory for the store variable*/
store_var = malloc(sizeof(char ) * letters);
bytes_num = read(fD, store_var, letters);
/* Write the contents of the store_var 'buf' to STDOUT, and store the actual number of bytes written in 'write_var'*/
write_var = write(STDOUT_FILENO, store_var, bytes_num);

/*Free the memory allocated for the buffer*/
free(store_var);
/*Close the FD*/
close(fD);
/*Return the actual number of bytes read and printed to STDOUT*/
return (write_var);
}

