/*
4. �rj egy f�ggv�nyt, melyben a nagy hal megeszi a kicsit!
Val�s�ts meg ehhez egy hal strukt�r�t, melynek van neve (string), nagys�ga (sz�m), �s "�l-e m�g" (logikai) �rt�ke.
A f�ggv�ny mindk�t halat k�rje be, hasonl�tsa �ssze a m�ret�ket, a kisebbik hal �let-st�tusz�t �ll�tsa hamisra, a nagyobbik m�ret�t pedig n�velje a bekebelezett kicsi m�ret�vel.
Egyenl� m�ret� halak eset�n ne t�rt�njen semmi, d�gl�tt hal(ak) eset�n �gyszint.
*/
#include <stdio.h> // printf, scanf
#include <stdbool.h> // bool t�pus

// l�trehozzuk a hal strukt�r�t
typedef struct hal_t {
	char nev[64]; // a hal neve
	int meret; // a hal m�rete
	bool el; // �l-e a hal
} hal;

void hal_be(hal *hal)
{
	// beolvas�s
	char nev[64];
	printf("hal neve: ");
	scanf("%s", hal->nev);
	
	int meret;
	printf("hal merete: ");
	scanf("%d", &hal->meret);
	
	hal->el = true;
	
	return; // v�ge a beolvas�snak
}

void hal_harc(hal *hal1, hal *hal2)
{
	/* feldolgoz�s
	   ha valamelyik hal halott, nem lesz harc */
	if (hal1->el == false || hal2->el == false)
	{
		printf("doglott hal nem harcol.");
		return;
	}
	
	/* ha az egyik hal m�rete nagyobb, akkor a m�sik meghal
	   a gy�ztes a vesztes m�ret�vel gyarapodik
	   v�g�l a vesztes �let st�tusza hamisra v�lt */
	if (hal1->meret > hal2->meret)
	{
		printf("%s meghalt.", hal2->nev);
		hal1->meret += hal2->meret;
		hal2->el = false;
	}
	else if (hal2->meret > hal1->meret)
	{
		printf("%s meghalt.", hal1->nev);
		hal2->meret += hal1->meret;
		hal1->el = false;
	}
	else // d�ntetlen eset�n senki sem hal meg
	{
		printf("senki sem halt meg.");
	}
	return; // v�ge a harcnak
}

int main()
{
	/* l�trehozzuk a strukt�ra alapj�n a halakat
	   �s beolvassuk �ket */
	hal hal1;
	hal_be(&hal1);
	hal hal2;
	hal_be(&hal2);
	
	// �ssze�tk�ztetj�k �ket
	hal_harc(&hal1, &hal2);
	
	return 0;
}
