#include<stdio.h>
void swap(int *a, int *b) 
{ 
    int change=0; 
	change=*a; 
    *a=*b; 
    *b=change; 
}
void bubble(int tab[], int n)
{
	int i=0, j=0, z=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(tab[j]>tab[j+1])
			{
				swap(&tab[j], &tab[j+1]);
			/*	for(z=0;z<n;z++)
				{
					printf("%d ", tab[z]);
				}
				printf("\n");*/
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ", tab[i]);
	}
}
int main(void)
{
	int n, i=0;
	printf("Please input number of elements in tab which will be sorted: ");
	scanf("%d", &n);
	int tab[n];
	printf ("Please input elements to the tab: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &tab[i]);
	};
	printf("Sorted tab: ");
	bubble(tab, n);
	return 0;
}
