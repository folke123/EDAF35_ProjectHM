#define _BSD_SOURCE

#include <stddef.h>
#include <errno.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>


//K=10 will result in the total size of 1024 bytes
#define K (10)
#define N (1<<K)


typedef struct block_t block_t;

struct block_t{
	bool reserved; /* one if reserved. */
	char kval; /* current value of K. */
	block_t* succ; /* successor block in list. */
	block_t* pred; /* predecessor block in list. */
};




static block_t* free_list[K];
static char memory[N];



void* realloc(void* ptr, size_t size);
void* malloc(size_t size); 
void* calloc(size_t nitems, size_t size); 
void free(void* ptr);




int main()
{
	printf("starting\n");
}