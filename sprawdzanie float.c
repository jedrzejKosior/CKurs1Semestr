#include<stdio.h>
int main(void){
	double a=1, b=0;
	while(1){
		if(b>=a){
			printf("Koniec! %f %f",a, b);
			break;
		}
		b=a;
		a+=1;
	}
	return 0;
}
