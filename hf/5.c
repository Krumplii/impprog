/*
5. �rj �gy programot, ami skal�rszorz�st v�gez k�t tetsz�leges hossz� vektoron!
K�rj be egy N eg�sz sz�mot, majd csin�lj k�t N-hossz� vektor
(allok�lj dinamikusan k�t N-hossz� t�mb�t)
t�ltesd fel a vektorok elemeit a felhaszn�l�val,
majd sz�m�tsd ki a skal�rszorzatukat!
https://en.wikipedia.org/wiki/Dot_product#Algebraic_definition
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	printf("vektorok hossza: ");
	scanf("%d", &N);
	int* vector1 = (int *) malloc(N);
	int* vector2 = (int *) malloc(N);
	
	int i;
	printf("elso vektor:\n");
	for (i = 0; i < N; i++)
	{
		scanf("%d", &vector1[i]);
	}
	printf("masodik vektor:\n");
	for (i = 0; i < N; i++)
	{
		scanf("%d", &vector2[i]);
	}
	
	int skalar = 0;
	for (i = 0; i < N; i++)
	{
		skalar += vector1[i]*vector2[i];
	}
	
	printf("eredmeny: %d", skalar);
	
	return 0;
}
