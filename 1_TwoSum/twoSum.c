// Note: The returned array must be
// malloced, assume caller calls free().

// gcc twoSum.c -o twoSum

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
    int key;    /* The number itself */
    int value;  /* The index of the number in the array */
} HashItem;

typedef struct {
    HashItem *items;
    int size;
} HashTable;

HashTable *createHashTable(int size)
{
    HashTable* ht = malloc(sizeof(HashTable));

    ht->size = size;
    ht->items = malloc(sizeof(HashItem) * size);
    for (int i = 0; i < size; i++) {
        /* Using INT_MIN to indicate unused slot */
        ht->items[i].key = INT_MIN;
        ht->items[i].value = -1;
    }
    return ht;
}

void freeHashTable(HashTable *ht)
{
    free(ht->items);
    free(ht);
}

int hash(int key, int size)
{
    return (key >= 0 ? key : -key) % size;
}

void hashTableInsert(HashTable *ht, int key, int value)
{
    int index = hash(key, ht->size);

    while (ht->items[index].value != -1) {
        /* Linear probing */
        index = (index + 1) % ht->size; 
    }
    ht->items[index].key = key;
    ht->items[index].value = value;
}

int hashTableFind(HashTable *ht, int key, int *foundValue)
{
    int index = hash(key, ht->size);

    while(ht->items[index].value != -1) {
        if (ht->items[index].key == key) {
            *foundValue = ht->items[index].value;
            return 1;
        }
        /* Continue probing if not found */
        index = (index + 1) % ht->size;
    }
    /* Not found */
    return 0;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *result = malloc(2 * sizeof(int));
    HashTable *ht = createHashTable(50021);
    int complement;
    int foundIndex;
    
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++) {
        complement = target - nums[i];
        if (hashTableFind(ht, complement, &foundIndex)) {
            result[0] = foundIndex;
            result[1] = i;
            freeHashTable(ht);
            return result;
        }
        hashTableInsert(ht, nums[i], i);
    }
    /* Clean up and return NULL if no solution found */
    freeHashTable(ht);
    free(result);
    *returnSize = 0;
    return NULL;
}

int main(void)
{
    int nums[] = {3, 3};
    int target = 6;
    int returnSize;
    int* indices = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

    if (indices != NULL) {
        printf("[%d, %d]\n", indices[0], indices[1]);
        free(indices);
    } else {
        printf("No solution found.\n");
    }
    return 0;
}
