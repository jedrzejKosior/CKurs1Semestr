#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int n=0, i=0, dlg;
	void *x;
	printf("Ile slow ma miec: ");
	scanf ("%d", &n);
	char tab[n][30];
	for(i=0;i<=n;i++)
	{
		fgets(tab[i], 30, stdin);
		dlg=strlen(tab[i]);
		printf("%d  ", dlg);
		x=(char*)malloc(dlg+1); //zarezerwowana pamiec jej adres
		if(x!=NULL)
		{
			strcpy(x, tab[i]);
		}
	}
	printf ("Wypisywanie");
	for(i=0;i<=n;i++)
	{
		printf("%s",tab[i]);
	}
	free (x);
	return 0;
}
