#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int wiersz1, kolumna1, wiersz2, kolumna2, i=0, j=0;
	srand(time(NULL));
	printf("Podaj liczbe wierszy pierwszej macierzy: ");
	scanf ("%d", &wiersz1);
	printf("Podaj liczbe kolumn pierwszej macierzy:" );
	scanf ("%d", &kolumna1);
	printf("Podaj liczbe wierszy drugiej macierzy:" );
	scanf ("%d", &wiersz2);
	printf("Podaj liczbe kolumn drugiej macierzy:" );
	scanf ("%d", &kolumna2);
	int macierz1[wiersz1][kolumna1];
	int macierz2[wiersz2][kolumna2];
	for(i=0; i<wiersz1; i++)
	{
		for(j=0;j<kolumna1;j++)
		{
			macierz1[i][j]=rand()%21-10; // to losuje od 0 do 21, ale odejmujê od tego 10 i mam w ten sposób od od -10 do 10, bo 21 nie jest w³¹czne
		}
	}
	for(i=0; i<wiersz2; i++)
	{
		for(j=0;j<kolumna2;j++)
		{
			macierz2[i][j]=rand()%21-10; // to losuje od 0 do 21, ale odejmujê od tego 10 i mam w ten sposób od od -10 do 10, bo 21 nie jest w³¹czne
		}
	}
	printf("Pierwsza macierz\n");
	for(i=0; i<wiersz1; i++)
	{
		printf("|   ");
		for(j=0;j<kolumna1;j++)
		{
			if(macierz1[i][j]<0 && macierz1[i][j]!=-10)
			{
				printf("%d   ", macierz1[i][j]);
			}
			if(macierz1[i][j]>=0 && macierz1[i][j]!=10)
			{
				printf("%d    ", macierz1[i][j]);
			}
			if(macierz1[i][j]==-10)
			{
				printf("%d  ", macierz1[i][j]);
			}
			if(macierz1[i][j]==10)
			{
				printf("%d   ", macierz1[i][j]);
			}
		}
		printf("|\n");
	}
	printf("Druga macierz\n");
	for(i=0; i<wiersz2; i++)
	{
		printf("|   ");
		for(j=0;j<kolumna2;j++)
		{
			if(macierz2[i][j]<0 && macierz2[i][j]!=-10)
			{
				printf("%d   ", macierz2[i][j]);
			}
			if(macierz2[i][j]>=0 && macierz2[i][j]!=10)
			{
				printf("%d    ", macierz2[i][j]);
			}
			if(macierz2[i][j]==-10)
			{
				printf("%d  ", macierz2[i][j]);
			}
			if(macierz2[i][j]==10)
			{
				printf("%d   ", macierz2[i][j]);
			}
		}
		printf("|\n");
	}
	return 0;
}
