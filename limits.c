#include<stdio.h>
#include<limits.h>
int main(void){
	int max=INT_MAX;
	printf("Najwieksza liczba typu int = %d\n", max);
	long int max2=LONG_MAX;
	printf("Najwieksza liczba typu long = %ld\n", max2);
	unsigned int max3=UINT_MAX;
	printf("Najwieksza liczba typu unsigned int = %u\n", max3);
	unsigned long max4=ULONG_MAX;
	printf("Najwieksza liczba typu unsigned long = %lu\n", max4);
	return 0;
	
}
