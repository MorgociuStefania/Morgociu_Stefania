#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n, k, i, v[33], j, l;
	j = 1;
	printf("Introduceti numarul:\n");
	scanf("%d", &n);
	for (i = 31; i >= 0; i--)       
	{
		
		k = n >> i;
		if (k & 1)
			v[j] = 1;
		else
			v[j] = 0;
		j++;
		
	}
	i = 1;
	while (v[i] == 0)
		i++;
	l = j - i + 1;
	/*int* oldPtr = (int*)malloc(sizeof(int));
	*oldPtr = 0; 

	int* newPtr = realloc(oldPtr, l * sizeof(int));
	for (k = l - 1; k <= j; k++)							//am incercat, dar nu am reusit sa o fac conform cerintei.
	{
		oldPtr = newPtr;
		oldPtr++;
		*oldPtr = v[k];
	}*/

	for (k = l-1; k <= j; k++)
		printf("%d", v[k]);
	system("pause");
	return 0;
}