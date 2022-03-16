#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, v[50], i, k;
	printf("Introduceti numarul de elemente\n");
	scanf("%d", &n);
	printf("Introduceti elementele sirului\n");
	for (i = 1; i <= n; i++)
		scanf("%d", &v[i]);

	k = v[1] | v[2]; //salvam prima operatie de "SAU" intr-o variabila
	for (i = 3; i <=n; i++)
	{
		k = k | v[i];         //aplicam "SAU" pe intregul sir
	}
	if (k & 1)  //verificam daca numarul rezultat este par sau impar
		printf("Numarul este impar");
	else
		printf("Numaarul este par");
	system("pause");
	return 0;
}