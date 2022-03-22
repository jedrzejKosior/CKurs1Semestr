#include<stdio.h>
#include<string.h>
int main(void)
{
	char tab[5][20];
	int i=0;
	for(i=0;i<5;i++)
	{
		fgets(tab[i],20,stdin);
	}
	printf ("TERAZ WYPISYWANIE\n");
	for(i=0; i<5; i++)
	{
		printf("%s", tab[i]);
	}
	return 0;
}
