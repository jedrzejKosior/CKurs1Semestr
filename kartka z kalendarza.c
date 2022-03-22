#include<stdio.h>
int main(void){
	int miesiac, dzien, i=1, j=1, ogr, temp=1;
	printf("Podaj numer miesiaca (1-12), a nastepnie numer dnia (1-7)");
	scanf ("%d%d", &miesiac, &dzien);
	printf("Miesiac %d\n", miesiac);
	printf ("|Po |Wt |Sr |Cz |Pt |So |Ni |\n");
	if(miesiac==4 || miesiac==6 || miesiac==9 || miesiac==11){
		ogr=30;
	}
	else if(miesiac==2){
		ogr=28;
	}
	else{
		ogr=31;
	}
	for (i=1, j=1;i<=ogr; i++, j++){
		while(temp<dzien){
			printf("|   ");
			temp+=1;
			j+=1;
		}
		if(j==8){
			printf("|\n");
			j=1;
		}
		if(i<10){
			printf("|%d  ", i);
		}
		if(i>=10){
			printf("|%d ", i);
		}
		if (i==ogr){
			while(j!=8){
				printf("|   ");
				j+=1;
			}
		}
	}
	return 0;
}
