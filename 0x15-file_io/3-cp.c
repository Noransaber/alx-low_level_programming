#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *store_variable(char *file);
void close_F(int fd);

/**
* store_variable - alloc 1024 bytes for a store.
* @file: The name of the file buffer is storing chars for
*
* Return: A ptr to the newly-allocated store
*/
char *store_variable(char *file)
{
char *store;

store = malloc(sizeof(char) * 1024);

if (store == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (store);
}

/**
* close_F - c fd.
* @fD: The fd to be closed.
*/
void close_F(int fD)
{
int co;

co = close(fD);

if (co == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fD);
exit(100);
}
}

/**
* main - take a content from one file to another.
* @argc: The number of atgs passed to the programme.
* @argv: An arr of ptr to the args.
*
* Return: 0 on success.
*
* Description: Exit code 97 if the num of args is not esxist
* Exit code 98 if file_from does not exist or cannot be read
* Exit code 99 if file_to cannot be created or written to
*  If file_to | file_from cannot be closed, exit code 100
*/
int main(int argc, char *argv[])
{
int Var_from, to_dir, rD_var, wR_Var;
char *store_Var;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

store_Var = store_variable(argv[2]);
Var_from = open(argv[1], O_RDONLY);
rD_var = read(Var_from, store_Var, 1024);
to_dir = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (Var_from == -1 || rD_var == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(store_Var);
exit(98);
}

wR_Var = write(to_dir, store_Var, rD_var);
if (to_dir == -1 || wR_Var == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(store_Var);
exit(99);
}

rD_var = read(Var_from, store_Var, 1024);
to_dir = open(argv[2], O_WRONLY | O_APPEND);

} while (rD_var > 0);

free(store_Var);
close_F(Var_from);
close_F(to_dir);

return (0);
}

