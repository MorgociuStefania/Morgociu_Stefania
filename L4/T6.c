#include <stdio.h>
#include <stdlib.h>
int p, st[32], vf, b;
p = 0; vf = -1; b = 0;
int A(int x)
{
	if (x > 255)
		return 0;	//conditia de citire
	return 1;
}
int isFull(int vf, int p)
{
	if (vf == p)
		return 1;
	return 0;
}
void PUSH(int x, int vf, int p, int st[32])
{
	if (isFull(vf, p))
	{
		printf("Eroare");
		return;
	}
	st[++vf] = x;
}
int putere(x)
{
	int aux;
	aux = x;
	while (aux)
	{
		aux = aux / 2;
		p++;
	}
	return p;
}
void B(int x)
{
	int k, i;

	for (i =p-1; i >= 0; i--)
	{
		k = x >> i;
		if (k & 1)
			b = b * 10 + 1;
		else
			b = b * 10;
	}
}

void C(int b)
{
	while (b)
	{
		PUSH(b % 10, vf, p, st);
		b = b / 10;
	}
}

int main()
{
	int n, i;
	printf("Introduceti numarul:\n");
	do 
	{
		scanf("%d", &n); 
	} while (A(n)==0);
	B(n);
	C(b);
	for (i = p - 1; i >= 0; i--)
		printf("%d", st[i]);
		
	system("pause");
	return 0;

}
