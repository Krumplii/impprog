/*
4. �rj egy f�ggv�nyt, melyben a nagy hal megeszi a kicsit!
Val�s�ts meg ehhez egy hal strukt�r�t, melynek van neve (string), nagys�ga (sz�m), �s "�l-e m�g" (logikai) �rt�ke.
A f�ggv�ny mindk�t halat k�rje be, hasonl�tsa �ssze a m�ret�ket, a kisebbik hal �let-st�tusz�t �ll�tsa hamisra, a nagyobbik m�ret�t pedig n�velje a bekebelezett kicsi m�ret�vel.
Egyenl� m�ret� halak eset�n ne t�rt�njen semmi, d�gl�tt hal(ak) eset�n �gyszint.
*/
#include <stdio.h>

typedef struct hal_t {
	char nev[64];
	int meret;
	int el;
} hal;

void hal_be(hal *hal)
{
	char nev[64];
	printf("hal neve: ");
	scanf("%s", hal->nev);
	
	int meret;
	printf("hal merete: ");
	scanf("%d", &hal->meret);
	
	hal->el = 1;
	
	return;
}

void hal_harc(hal *hal1, hal *hal2)
{
	if (hal1->el == 0 || hal2->el == 0)
	{
		printf("doglott hal nem harcol.");
		return;
	}
	
	if (hal1->meret > hal2->meret)
	{
		printf("%s meghalt.", hal2->nev);
		hal1->meret += hal2->meret;
		hal2->el = 0;
	}
	else if (hal2->meret > hal1->meret)
	{
		printf("%s meghalt.", hal1->nev);
		hal2->meret += hal1->meret;
		hal1->el = 0;
	}
	else
	{
		printf("senki sem halt meg.");
	}
	return;
}

int main()
{
	hal hal1;
	hal_be(&hal1);
	hal hal2;
	hal_be(&hal2);
	
	hal_harc(&hal1, &hal2);
	
	return 0;
}
