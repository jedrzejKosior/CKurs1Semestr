#include<stdio.h>
int main(void){
	double kmph, mph=0;
	while (1){
		scanf("%5lf", &kmph);
		mph=kmph/1.609;
		if (kmph==0){
			return 0;
		}
		printf("%0.2lf   ", mph);
		
	}
	return 0;
}
