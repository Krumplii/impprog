/*
3. �rj egy programot, ami ki�rja a parancssori argumentumokat v�zszintesen t�kr�zve!
p�lda:
	bemenet:	The Ape Of Naples
    kimenet:	selpaN fO epA ehT
*/
#include <stdio.h> // printf, scanf
#include <string.h> // strrev

int main(int argc, char* argv[])
{
	/* a ciklust visszafel� ind�tjuk el
	   0-ig nem megy�nk el, mert argv[0] a program nev�t tartalmazza */
	int i;
	for (i = argc - 1; i > 0; i--)
	{
		/* ki�r�s
		   strrev(string): megford�tja a stringet */
		printf("%s ", strrev(argv[i]));
	}
	
	return 0;
}
