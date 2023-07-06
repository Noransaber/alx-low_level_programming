/**
 * hash_djb2 - hash function, takes a string and return hash number
 * @str: the str to be converted
 * Return: The hash number
 **/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash) +c;
}
return (hash);
}
