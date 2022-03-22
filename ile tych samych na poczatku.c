#include<stdio.h>
#include<string.h>
int how_much_these_same()
{
	int n, i=0, counter=0;
	printf("Please input length of symbol chains: ");
	scanf("%d", &n);
	char tab1[n];
	char tab2[n];
	printf("Please input first chain of symbols: ");
	for (i=0;i<=n;i++)
	{
		scanf("%c", &tab1[i]);
	}
	printf("Please input second chain of symbols: ");
	for (i=0;i<=n;i++)
	{
		scanf("%c", &tab2[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(tab1[i]==tab2[i])
		{
			counter++;
		}
		else
		{
			break;
		}
	}
	if(counter==0)
	{
		return 0;
	}
	else
	{
		return counter;
	}
}
int main(void)
{
	int odp=0;
	odp=how_much_these_same();
	printf("%d", odp);
	return 0;
}
