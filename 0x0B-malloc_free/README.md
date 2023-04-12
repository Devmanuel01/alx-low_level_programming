This directory shows the use of Dynamic Memory allocation in C programming
- What is Dynamic Memory Allocation(DMA): This a process where the program allocates a memory during the program Runtime and at the end of the program the memory is again freed.
  This allows the user to consume only the required amount of memory a oarticular program needs at the point the program runs.
There are  functions which allow the this Dynamic memory Allocation Possible.
These include :
- Malloc()
- Calloc()
- Realloc()
- Free()
In this directory we will be discussing and using only the Malloc() function.

-Malloc: This is known as Memory Allocation, This function takes in one argument and that argument being the size of memory to reserve.
   	 This function call returns a void pointer which points to the address of the first element stored in the memory and it returns a void pointer because the program is not sure,
	 of the Datatype of the varaible to be stored.
	 A better way to give this pointer a datatype is to typecast. Below is the prototype of a malloc function.
	 int *ptr;
	 ptr = (int *)malloc(n * sizeof(int));
-Free: This function frees the memory after it has been allocated and used, this is usually at the end od the program.
	free(ptr);
Note:
- Editor used vim.
- All files were compiled on Ubuntu20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files end in a new line.
- The code conform to the Betty style.
- No global varaibles were used.
- The only C library functions used are malloc and free.
- The prototypes of all functions are in the main.h file.
