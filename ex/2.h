// 2. �rj egy f�ggv�nyt, ami a felhaszn�l�val felt�ltet egy t�mb�t
#include <stdio.h> // printf

void get_arr(int* arr, int size)
{
	// felt�ltetj�k a felhaszn�l�val a t�mb�t
	printf("tomb feltoltes:\n"); // tudatjuk vele, hogy �ppen felt�ltetj�k vele a t�mb�t
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d.: ", i+1); // jelezz�k, hogy hanyadik elemr�l van sz�
		scanf("%d", &arr[i]); // a be�rt adatot t�roljuk a t�mbben
	}
}
