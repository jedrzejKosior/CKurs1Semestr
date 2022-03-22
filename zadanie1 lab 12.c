#include<stdio.h>
#include<string.h>
int main(void){
	char wyraz[50];
	char kopia1[50];
	char kopia2[50];
	int i=0;
	scanf ("%s", &wyraz);
	for (i=0;i<strlen(wyraz);i++){
		kopia1[i]=wyraz[i];
		kopia2[i]=wyraz[i];
	}
	printf ("%s\n", wyraz);
	printf ("%s\n", kopia1);
	printf ("%s\n", kopia2);
	
}
