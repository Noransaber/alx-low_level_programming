#include "main.h"

/**
* append_text_to_file - Ap string at the last character of our file.
* @filename: ptr to the file name.
* @text_content: The str to add to the last char of the file.
*
* Return: fails |filename is NULL -> -1.
*         If not exist or lack in permission -> -1.
*         Otherwise - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int a, w_variable, lenght_variable = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (lenght_variable = 0; text_content[lenght_variable];)
lenght_variable++;
}

a = open(filename, O_WRONLY | O_APPEND);
w_variable = write(a, text_content, lenght_variable);

if (a == -1 || w_variable == -1)
return (-1);

close(a);

return (1);
}

