#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{

	if (ht != NULL)
	{
		unsigned long int idx, n_idx, i = 0;
		hash_node_t *node;

		printf("{");
		for (idx = 0; idx < (*ht).size; idx++)
		{
			if ((*ht).array[idx] != NULL)
			{
				node = (*ht).array[idx];
				for (n_idx = 0; node != NULL; n_idx++)
				{
					if (i != 0)
						printf(", ");
					i = i + 1;
					printf("\'%s\': \'%s\'", (*node).key, (*node).value);
					node = (*node).next;
				}
			}
		}
		printf("}\n");
	}
}
