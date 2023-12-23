/**
 * hash_djb2 - implementation of the djb2 algorithm
 *              a function that is used to
 *              generate hash values for strings
 * @str: string used to generate hash value
 * Return: The hash value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
	hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
