/*
5. �rj �gy programot, ami skal�rszorz�st v�gez k�t tetsz�leges hossz� vektoron!
K�rj be egy N eg�sz sz�mot, majd csin�lj k�t N-hossz� vektor
(allok�lj dinamikusan k�t N-hossz� t�mb�t)
t�ltesd fel a vektorok elemeit a felhaszn�l�val,
majd sz�m�tsd ki a skal�rszorzatukat!
https://en.wikipedia.org/wiki/Dot_product#Algebraic_definition
*/
#include <stdio.h> // printf, scanf
#include <stdlib.h> // calloc, free

int main()
{
	// beolvas�s 1
	int N;
	printf("vektorok hossza: ");
	scanf("%d", &N);
	
	/* allok�l�s
	   allok�ljuk a k�t vektort calloc(mem�ria blokk hossza, egy elem m�rete)-al
	   a calloc el� z�r�jelbe �rjuk az elemek t�pus�t (egyezikt a v�ltoz� t�pus�val) */
	int* vector1 = (int*) calloc(N, sizeof(int));
	int* vector2 = (int*) calloc(N, sizeof(int));
	
	// beolvas�s 2
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
	
	// feldolgoz�s
	int skalar = 0;
	for (i = 0; i < N; i++)
	{
		skalar += vector1[i]*vector2[i]; // m�trix szorz�s
	}
	
	// ki�r�s
	printf("eredmeny: %d", skalar);
	
	// mem�ria �r�t�s
	free(vector1);
	free(vector2);
	
	return 0;
}
