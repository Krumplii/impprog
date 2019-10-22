/*
1. �rj egy programot, ami adott n-re kisz�molja pi egy k�zel�t� �rt�k�t!
https://en.wikipedia.org/wiki/Approximations_of_%CF%80#Gregory%E2%80%93Leibniz_series
*/
#include <stdio.h> // printf, scanf
#include <math.h> // pow

int main()
{
	// beolvas�s
	int n;
	scanf("%d", &n);
	
	// sz�m�t�s
	float sum = 0; // float: lebeg�pontos sz�m (tizedes)
	int i; // ciklus v�ltoz�. C-ben nem lehet a ciklusban megadni
	for (i = 0; i <= n; i++)
	{
		// pow(x, y) -> x-et az y. hatv�nyra emeli
		sum += pow(-1, i)/(2*i+1); // formul�hoz l�sd a wikip�dia linket
	}
	
	// ki�r�s
	printf("%f", 4*sum); // %f: float jel�l�je a sz�vegekben
	
	return 0;
}
