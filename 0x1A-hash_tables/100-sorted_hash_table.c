#include "hash_tables.h"

char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_delete(shash_table_t *ht);
void shash_table_print(const shash_table_t *ht);
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_table_print_rev(const shash_table_t *ht);

/**
 * shash_table_create - A function to make sorted hash table.
 * @size: Hash table size.
 * Return: Results
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;
    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - A function to add element to sorted hash table.
 * @ht: Sorted hash table pointer.
 * @key: key to add.
 * @value: Associated key value .
 * Return: Results
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new, *tmp;
    char *value_copy;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->shead;
    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = value_copy;
            return (1);
        }
        tmp = tmp->snext;
    }

    new = malloc(sizeof(shash_node_t));
    if (new == NULL)
    {
        free(value_copy);
        return (0);
    }
    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(value_copy);
        free(new);
        return (0);
    }
    new->value = value_copy;
    new->next = ht->array[index];
    ht->array[index] = new;

    if (ht->shead == NULL)
    {
        new->sprev = NULL;
        new->snext = NULL;
        ht->shead = new;
        ht->stail = new;
    }
    else if (strcmp(ht->shead->key, key) > 0)
    {
        new->sprev = NULL;
        new->snext = ht->shead;
        ht->shead->sprev = new;
        ht->shead = new;
    }
    else
    {
        tmp = ht->shead;
        while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
            tmp = tmp->snext;
        new->sprev = tmp;
        new->snext = tmp->snext;
        if (tmp->snext == NULL)
            ht->stail = new;
        else
            tmp->snext->sprev = new;
        tmp->snext = new;
    }

    return (1);
}

/**
 * shash_table_get - A function to get the value associated with key.
 * @ht: A sorted hash table pointer.
 * @key: Value of key.
 * Return: Return
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *node;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return (NULL);

    node = ht->shead;
    while (node != NULL && strcmp(node->key, key) != 0)
        node = node->snext;

    return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - A function to return sorted hash table.
 * @ht: Sorted hash table pointer.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;

    if (ht == NULL)
        return;

    node = ht->shead;
    printf("{");
    while (node != NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        node = node->snext;
        if (node != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - A function to return sorted hash table.
 * @ht: Sorted hash table pointer.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;

    if (ht == NULL)
        return;

    node = ht->stail;
    printf("{");
    while (node != NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        node = node->sprev;
        if (node != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - A function to remove sorted hash table.
 * @ht: Sorted hash table pointer.
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_table_t *head = ht;
    shash_node_t *node, *tmp;

    if (ht == NULL)
        return;

    node = ht->shead;
    while (node)
    {
        tmp = node->snext;
        free(node->key);
        free(node->value);
        free(node);
        node = tmp;
    }

    free(head->array);
    free(head);
}
