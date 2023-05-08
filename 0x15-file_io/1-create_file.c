#include "main.h"

/**
* create_file - function to C a file.
* @filename: ptr to the name of the file to be created.
* @text_content: A pointer to a str to write to the file.
*
* Return: If fails -> -1.
*         Otherwise -> 1.
*/
int create_file(const char *filename, char *text_content)
{
int fD, w_var, length_var = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length_var = 0; text_content[length_var];)
length_var++;
}

fD = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w_var = write(fD, text_content, length_var);

if (fD == -1 || w_var == -1)
return (-1);

close(fD);

return (1);
}

