#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/*
This makes it into a linked list of blocks of memory. Header + Block of Memory linked list.
*/
struct header_t{
    size_t size;
    unsigned is_free;
    struct header_t *next;
};

/*
The malloc(size) function allocates size bytes to block and return a pointer to the memory as block.
*/
void *malloc(size_t size){
    void *block;
    block = sbrck(size);

    if (block == (void *)-1){
        return NULL;
    }else{
        return block;
    }
}