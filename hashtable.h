#include <iostream>
#include <string>

using namespace std;

typedef struct HT_item HT_item;

struct Ht_item{
    int* key;
    char* value;
};

typedef struct HashTable HashTable;

struct HashTable{
    Ht_item** items;
    int size;
    int count;

    
};

Ht_item* create_item(int* key, char* value) {
    Ht_item* item = (Ht_item*) malloc (sizeof(Ht_item));
    item->key = (int*) malloc (2);
    item->value = (char*) malloc (2);
    
    item->key = key;
    strcpy(item->value, value);

    return item;
}