// 1. �rj egy f�ggv�nyt, ami ki�r egy t�mb�t
#include <stdio.h> // printf

//�tadjuk a f�ggv�nynek a t�mb�t �s a m�ret�t
void print_arr(int* arr, int size)
{
	// a ki�r�s form�tuma: {x1,x2...xn}
	printf("{");
	// v�gig megy�nk az elemeken
	int i;
	for (i = 0; i < size; i++)
	{
		// ki�rjuk az elemet
		printf("%d", arr[i]);
		// hogyha a ciklus v�ltoz� m�g nem �rte el az utols� elemet, rakjunk egy vessz�t
		if (i != size-1) printf (",");
	}
	printf("}\n");
}
