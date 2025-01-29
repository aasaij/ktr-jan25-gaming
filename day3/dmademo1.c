#include <stdio.h>

int x; // global variable --> data segment

int main(){
//	static int a;
//	int y;
//	printf("%d %d", x, y);
	return 0;
}
//
//Dynamic Memory Allocation
//stdlib.h
//1. malloc()
//	void* malloc(size_t size);
//2. calloc()
//	void* calloc(size_t numBlocks, size_t blockSize);
//3. realloc()
//	void* realloc(void* oldMemoryReference, size_t newSize);
//4. free()
//	void  free(void* memoryReference);