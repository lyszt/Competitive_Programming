#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
    int value;
    int index_from_nums; 
} HashItem;

typedef struct {
    HashItem* table;
    int size;
} HashTable;

HashTable* createHashTable(int size);
unsigned int hashFunction(int key, int size);
void insert(HashTable* ht, int key, int original_array_index);
HashItem* search(HashTable* ht, int key);
void freeHashTable(HashTable* ht);
void printTable(HashTable* ht);
int* twoSum(int* nums, int numsSize, int target, int* returnSize);

HashTable* createHashTable(int size) {
    HashTable* ht = (HashTable*)malloc(sizeof(HashTable));
    ht->size = size;
    ht->table = (HashItem*)malloc(sizeof(HashItem) * ht->size);

    for (int i = 0; i < ht->size; i++) {
        ht->table[i].value = INT_MIN;
        ht->table[i].index_from_nums = -1;
    }
    return ht;
}

unsigned int hashFunction(int key, int size) {
    return (key % size + size) % size;
}

void insert(HashTable* ht, int key, int original_array_index) {
    if (key == INT_MIN) return;

    unsigned int initial_hash_index = hashFunction(key, ht->size);
    unsigned int current_probe_index = initial_hash_index;
    int i = 1;

    while (ht->table[current_probe_index].value != INT_MIN) {
        if (ht->table[current_probe_index].value == key) {
            return;
        }
        current_probe_index = (initial_hash_index + i) % ht->size;
        i++;
        if (current_probe_index == initial_hash_index) {
            return; 
        }
    }
    
    ht->table[current_probe_index].value = key;
    ht->table[current_probe_index].index_from_nums = original_array_index;
}

HashItem* search(HashTable* ht, int key) {
    if (key == INT_MIN) return NULL;

    unsigned int initial_hash_index = hashFunction(key, ht->size);
    unsigned int current_probe_index = initial_hash_index;
    int i = 1;

    while (ht->table[current_probe_index].value != INT_MIN) {
        if (ht->table[current_probe_index].value == key) {
            return &ht->table[current_probe_index];
        }
        current_probe_index = (initial_hash_index + i) % ht->size;
        i++;
        if (current_probe_index == initial_hash_index) {
            return NULL;
        }
    }
    return NULL;
}

void freeHashTable(HashTable* ht) {
    if (!ht) return;
    free(ht->table);
    free(ht);
}

void printTable(HashTable* ht) {
    printf("--- Hash Table State ---\n");
    printf("Index | Value     | Original Index\n");
    printf("------------------------------------\n");
    for (int i = 0; i < ht->size; i++) {
        printf("%-5d | ", i);
        if (ht->table[i].value == INT_MIN) {
            printf("[ EMPTY ]\n");
        } else {
            printf("%-9d | %d\n", ht->table[i].value, ht->table[i].index_from_nums);
        }
    }
    printf("------------------------------------\n");
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    HashTable* ht = createHashTable(numsSize * 2);
    
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        
        HashItem* found_item = search(ht, complement);
        
        if (found_item != NULL) {
            int* result = (int*)malloc(sizeof(int) * 2);
            if (result == NULL) {
                *returnSize = 0;
                freeHashTable(ht);
                return NULL;
            }
            
            result[0] = found_item->index_from_nums;
            result[1] = i;
            *returnSize = 2;
            
            freeHashTable(ht);
            return result;
        }
        
        insert(ht, nums[i], i);
    }
    
    *returnSize = 0;
    freeHashTable(ht);
    return NULL;
}
