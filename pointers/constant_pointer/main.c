/*
 * The code is taken from The C Book chaper 5.3.3 Qualified types.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 1; /* i is an ordinary int */
	int *pi; /* pi is a pointer to an int */

	const int ci = 2; /* ci is a constant int */
	const int ci2 = 3;
	/*
	 * Cannot reassign value to constant variable
	 * ci = 2;
	 */
	const int *pci; /* pci is a pointer to a constant int */
	pci = &ci;
	printf("Inspect the value of constant variable %d\n", *pci);
	pci = &ci2;
	printf("pci is not constant, it can point to another address %d\n", *pci);

	/* cpi is a constant pointer to an int */
	int *const cpi = &i;
	/*
	 * Cannot reassign value to constant variable (pointer)
	 * cpi++;
	 */
	printf("Constant pointers point to constant address %d\n", (*cpi) + 8);

	/* cpci is a constant pointer to an constant int */
	const int *const cpci = &ci; 

    exit(EXIT_SUCCESS);
}
