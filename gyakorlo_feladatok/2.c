// 2. �rj egy f�ggv�nyt, ami a felhaszn�l�val felt�ltet egy t�mb�t
#include "1.h" // print_arr
#include "2.h" // get_arr

int main()
{
	// �res teszt t�mb
	int arr[3];
	// bek�rj�k a t�mbbe az elemeket
	get_arr(arr, sizeof(arr)/sizeof(arr[0]));
	// ki�rjuk a t�mb�t
	print_arr(arr, sizeof(arr)/sizeof(arr[0]));
	return 0;
}
