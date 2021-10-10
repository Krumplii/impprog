// 3. �rj egy f�ggv�nyt, ami v�letlenszer� �rt�kekkel t�lt fel egy t�mb�t
#include <stdlib.h> // rand, srand -- v�letlenszer� gener�l�s alapja, hogy ne ugyanazokat kapjuk 
#include <time.h> // time --  az srand param�tere lesz majd

void fill_arr(int* arr, int size)
{
	srand(time(NULL));
	/* megadjuk a seedet, ami a v�letlenszer�gener�l�s alapja lesz
	   az id� megad�s�val a seed a jelenlegi id� lesz
	   �gy k�t ind�t�s ut�n szinte lehetetlen lesz ugyanazokat az �rt�keket megkapni */
	int i;
	for (i = 0; i < size; i++)
	{
		arr[i] = rand(); // random sz�mokkal felt�ltj�k a sz�mot
		/* a rand 0-t�l RAND_MAX-ig ad egy sz�mot.
		   a RAND_MAX �rt�ke azonban v�ltoz� lehet a rendszerek k�z�tt,
		   de garant�ltan legal�bb 32767 */
		//arr[i] = rand() % 100 + 1; // 1-t�l 100-ig gener�lt sz�mok
		//k�plet: rand() % maximum + minimum
	}
}
