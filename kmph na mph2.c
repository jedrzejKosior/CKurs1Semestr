#include<stdio.h>
#define mila 1.609
int main(void){
	int i;
	double tab[29][2];
	double kmph=0;
	for (i=0; i<29;i++){
		tab[i][0]=kmph;
		kmph+=5;
		tab[i][1]=0;
	}
	for (i=0; i<29;i++){
		tab[i][1]=tab[i][0]/mila;
	}
	for(i=0;i<29;i++){
		printf("%0.0lf  %0.2lf\n",tab[i][0],tab[i][1]);
	}
	return 0;
}
