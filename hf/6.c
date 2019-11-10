/*
6. �rj egy f�ggv�nyt, ami egy 3�3-as m�trixot transzpon�l!
https://media.geeksforgeeks.org/wp-content/cdn-uploads/matrix-transpose.jpg
*/
#include <stdio.h> // printf

void transzponalas(int matrix[3][3])
{
	int i, j, temp;
	for (i = 0; i < 3; i++)
	{
		for (j = i; j < 3; j++)
		{
			// egyszer� csere:
			temp = matrix[i][j]; // elt�roljuk azt az �rt�ket,
			matrix[i][j] = matrix[j][i]; // amit itt fel�l�runk,
			matrix[j][i] = temp; // hogy azt�n befejezhess�k a cser�t
		}
	}
}

int main()
{
	int i;
	int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	printf("eredeti matrix:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d\t%d\t%d\n", matrix[i][0], matrix[i][1], matrix[i][2]);
	}
	
	transzponalas(matrix);
	
	printf("transzponalt matrix:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d\t%d\t%d\n", matrix[i][0], matrix[i][1], matrix[i][2]);
	}
	
	return 0;
}
