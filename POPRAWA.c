#include<stdio.h>
int maxmin(int tab[], int *wsk1, int *wsk2)
{
	int i=0, maximum, minimum, pozmax, pozmin;
	maximum=tab[0];
	minimum=tab[0];
	for (i=0;i<10;i++)
	{
		if(tab[i]>maximum)
		{
			maximum=tab[i];
			pozmax=i;
		}
		if(tab[i]<minimum)
		{
			minimum=tab[i];
			pozmin=i;
		}
	}
	*wsk1=pozmax;
	*wsk2=pozmin;
}
int main(void)
{
	int i=0;
	int tab[10]={1,4,2,-10,5,4,6,12,3,-2};
	int max, min;
	int *wsk1=&max;
	int *wsk2=&min;
	maxmin(tab, wsk1, wsk2);
	printf("%d %d", min, max);
	return 0;
}
