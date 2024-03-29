#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Record.h"

#define NUM_VALUES 2

entry_t *create_entries(const unsigned int num_entries)
{
    entry_t *entries = (entry_t *)malloc(num_entries * sizeof(entry_t));
    return entries;
}

void *delete_entries(entry_t *entries)
{
    if (entries != NULL)
    {
        free(entries);
    }

    return NULL;
}

records_t *create_records()
{
    records_t *records = (records_t *)malloc(sizeof(records_t));
    return records;
}

RETURN_CODES fill_records(records_t *const records, entry_t *const entries, const unsigned int length)
{
    if (records == NULL || entries == NULL)
    {
        return FAILURE;
    }

    records->entries = entries;
    records->length = length;

    return SUCCESS;
}

RETURN_CODES print_records(const records_t *const records, const char *const header)
{
    if (records == NULL)
    {
        return FAILURE;
    }

    if (header != NULL)
    {
        printf("Records %s:\n", header);
    }

    for (unsigned int i = 0; i < records->length; i++)
    {
        const entry_t *const entry = &records->entries[i];
        int printed_caracters = printf("%c, %d\n", entry->letter, entry->value);

        if (printed_caracters < NUM_VALUES)
        {
            break;
        }
    }

    printf("\n");

    return SUCCESS;
}
