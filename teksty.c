#include<stdio.h>
int main(void)
{
	char tab[10];
	fgets(tab, 10, stdin); //podobnie co scanf, tylko, ¿e scanf czyta do pierwszego bia³ego znaku, fgetst z 10 wczytuje tylko 9 czyli n-1
	printf("%s\n", tab);
	return 0;
}
