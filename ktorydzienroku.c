#include<stdio.h>
int data(int dzien, int miesiac, int rok)
{
	int i, przestepny=0, odp=0;
	int ktorydzien=0;
	if(rok%4==0 && rok%100!=0){
		przestepny=1;
	}
	int numermiesiaca[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(przestepny==1){
		numermiesiaca[1]=29;
	}
	for(i=0;i<miesiac-1;i++)
	{
		odp=odp+numermiesiaca[i];
	}
	odp=odp+dzien;
	return odp;
}
int main(void)
{
	int dzien=0, miesiac=0, rok=0;
	printf("Please input day number: ");
	scanf("%d", &dzien);
	printf("Please input month number: ");
	scanf("%d", &miesiac);
	printf("Please input year: ");
	scanf("%d", &rok);
	printf("Number of day is: ");
	printf ("%d", data(dzien, miesiac, rok));
	return 0;
}
