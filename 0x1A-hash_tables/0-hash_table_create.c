#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the array
 * 
 * Returns: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned int i;
    hash_table_t *hashTable;
    
    /*Allocat memory for the hash table structure */
    hashTable = malloc(sizeof(hash_table_t));
    if (hashTable == NULL)
    {
        return (NULL);
    }
    /*Allocate memory for the array of hash nodes */
    hashTable->array = malloc(sizeof(hash_node_t) * size);
    if (hashTable->array == NULL)
    {
        free(hashTable);
        return (NULL);
    }
    /*Initialize each array element to NULL */
    for (i = 0; i < size; i++)
    {
        hashTable->array[i] = NULL;
    }
    hashTable->size = size;
    return (hashTable);
}