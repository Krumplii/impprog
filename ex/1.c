// 1. �rj egy f�ggv�nyt, ami ki�r egy t�mb�t
#include "1.h" // print_arr

int main()
{
	// egy szimpla 3 elem� teszt t�mb
	int arr[3] = {42, 69, 420};
	// �tadjuk a t�mb�t �s felhaszn�ljuk a sizeof-ot a t�mb m�ret�nek kisz�m�t�s�hoz
	print_arr(arr, sizeof(arr)/sizeof(arr[0]));
	/*
	ha minden j�l ment a k�perny�n ez jelenik meg:
	{42, 69, 420}
	*/
	return 0;
}
