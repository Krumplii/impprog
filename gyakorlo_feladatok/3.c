// 3. �rj egy f�ggv�nyt, ami v�letlenszer� �rt�kekkel t�lt fel egy t�mb�t
#include "1.h" // print_arr
#include "3.h" // fill_arr

int main()
{
	// �res teszt t�mb
	int arr[3];
	// felt�ltj�k a t�mb�t v�letlenszer� elemekkel
	fill_arr(arr, sizeof(arr)/sizeof(arr[0]));
	// ki�rjuk a t�mb�t
	print_arr(arr, sizeof(arr)/sizeof(arr[0]));
	return 0;
}
