#include<stdio.h>
void swap(int *a, int *b) 
{ 
    int change=0; 
	change=*a; 
    *a=*b; 
    *b=change; 
}
int selectionsort( int tab[], int n)
{
	int i=0, j=0, k=0, z=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			k=i;
			if(tab[j]<tab[k])
			{
				swap(&tab[j], &tab[k]);
			}
		/*	for (z=0; z<n;z++)
			{
				printf("%d ", tab[z]);
			}
			printf("\n");*/
		}
	}
/*	for (i=0; i<n;i++)
	{
		printf("%d ", tab[i]);
	}*/
	return tab;
}
int main(void)
{
	int i=0, n=0;
	scanf("%d", &n);
	int tab[n];
	for (i=0; i<n;i++)
	{
		scanf("%d", &tab[i]);
	}
	selectionsort(tab, n);
	for (i=0; i<n;i++)
	{
		printf("%d ", tab[i]);
	}
	return 0;
}
