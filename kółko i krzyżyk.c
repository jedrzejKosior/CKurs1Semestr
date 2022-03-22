#include<stdio.h>
int ruch1=0, ruch2=0;
char tab[3][3];
int gracz=1; 
void wypisz(char tab[3][3])
{
	int i, j;
	for	(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c", tab[i][j]);
			if (j==2)
			{
				printf("\n");
			}
		}
	}
}
void miejsce1(int ruch1)
{
	if(ruch1==11) tab[0][0]='X';
	if(ruch1==12) tab[0][1]='X';
	if(ruch1==13) tab[0][2]='X';
	if(ruch1==21) tab[1][0]='X';
	if(ruch1==22) tab[1][1]='X';
	if(ruch1==23) tab[1][2]='X';
	if(ruch1==31) tab[2][0]='X';
	if(ruch1==32) tab[2][1]='X';
	if(ruch1==33) tab[2][2]='X';
}
void miejsce2(int ruch2)
{
	if(ruch2==11) tab[0][0]='O';
	if(ruch2==12) tab[0][1]='O';
	if(ruch2==13) tab[0][2]='O';
	if(ruch2==21) tab[1][0]='O';
	if(ruch2==22) tab[1][1]='O';
	if(ruch2==23) tab[1][2]='O';
	if(ruch2==31) tab[2][0]='O';
	if(ruch2==32) tab[2][1]='O';
	if(ruch2==33) tab[2][2]='O';
}
/*void blednyruch()
{
	while(1)
	{
		if(ruch1==11 && tab[0][0]!='-' &&gracz==1)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch1);
			blednyruch();
			break;	
		}
		else if(ruch1==12 && tab[0][1]!='-' && gracz==1)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch1);
			blednyruch();
			break;
		}
		else if(ruch1==13 && tab[0][2]!='-' && gracz==1)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch1);
			blednyruch();
			break;
		}
		else if(ruch1==21 && tab[1][0]!='-' && gracz==1)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch1);
			blednyruch();
			break;
		}
		else if(ruch1==22 && tab[1][1]!='-' && gracz==1)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch1);
			blednyruch();
			break;
		}
		else if(ruch1==23 && tab[1][2]!='-' && gracz==1)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch1);
			blednyruch();
			break;
		}
		else if(ruch1==31 && tab[2][0]!='-' && gracz==1)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch1);
			blednyruch();
			break;
		}
		else if(ruch1==32 && tab[2][1]!='-' && gracz==1)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch1);
			blednyruch();
			break;
		}
		else if(ruch1==33 && tab[2][2]!='-' && gracz==1)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch1);
			blednyruch();
			break;
		}
		if(ruch1==11 && tab[0][0]!='-' && gracz==2)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch2);
			blednyruch();
			break;	
		}
		else if(ruch1==12 && tab[0][1]!='-' && gracz==2)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch2);
			blednyruch();
			break;
		}
		else if(ruch1==13 && tab[0][2]!='-' && gracz==2)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch2);
			blednyruch();
			break;
		}
		else if(ruch1==21 && tab[1][0]!='-' && gracz==2)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch2);
			blednyruch();
			break;
		}
		else if(ruch1==22 && tab[1][1]!='-' && gracz==2)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch2);
			blednyruch();
			break;
		}
		else if(ruch1==23 && tab[1][2]!='-' && gracz==2)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch2);
			blednyruch();
			break;
		}
		else if(ruch1==31 && tab[2][0]!='-' && gracz==2)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch2);
			blednyruch();
			break;
		}
		else if(ruch1==32 && tab[2][1]!='-' && gracz==2)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch2);
			blednyruch();
			break;
		}
		else if(ruch1==33 && tab[2][2]!='-' && gracz==2)
		{
			printf("Wrong move, please repeat\n");
			scanf("%d", &ruch2);
			blednyruch();
			break;
		}
		else
		{
			break;
		}
	}
}
*/
int main(void)
{
	int i, j;
	for	(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tab[i][j]='-';
		}
	}
	wypisz(tab);
	while(1)
	{
		if(gracz==1)
		{
			printf("Ruch gracza %d:", gracz);
			scanf("%d", &ruch1);
			//blednyruch();
			miejsce1(ruch1);
			wypisz(tab);
			gracz+=1;
		}
		if(gracz==2)
		{
			printf("Ruch gracza %d:", gracz);
			scanf("%d", &ruch2);
			//blednyruch();
			miejsce2(ruch2);
			wypisz(tab);
			gracz-=1;
		}
	}
	return 0;
}
