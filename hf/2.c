/*
2. �rj egy f�ggv�nyt, ami megmondja egy sz�mr�l, hogy palindrom-e.
pl. 1003001, 4224
*/
#include <stdio.h> // printf, scanf

int main()
{
	// beolvas�s
	int szam;
	scanf("%d", szam);
	
	// sz�m�t�s
	// az eredeti sz�mot berakjuk a tempbe, amit lebontunk 10-el osztva
	// a forditottSzamot felszorozzuk 10-el �s hozz�adjuk a marad�kot
	// v�g�l fel�p�l az eredeti sz�munk t�k�rk�pe
	int temp = szam, maradek = 0, forditottSzam = 0;
	while (temp != 0)
	{
		maradek += temp % 10;
		forditottSzam = forditottSzam * 10 + maradek;
		temp /= 10;
	}
	
	// ki�r�s
	if (szam == forditottSzam) printf("palindrom");
	else printf("nem palindrom");
	
	return 0;
}
