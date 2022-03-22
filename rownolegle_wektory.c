#include<stdio.h>
int parallel(double vector1[], double vector2[], int n)
{
	int i=0, temp=0;
	double k=0;
	k=vector1[i]/vector2[i];
	for(i=0;i<n;i++)
	{
		if(vector1[i]/vector2[i]==k)
		{
			temp++;
		}
	}
	if(temp==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main(void)
{
	int n=0, i=0;
	printf("Please input number of elements in tab: ");
	scanf("%d", &n);
	double vector1[n];
	double vector2[n];
	printf("PLease input first vector: ");
	for(i=0;i<n;i++)
	{
		scanf("%lf", &vector1[i]);
	}
	printf("PLease input second vector: ");
	for(i=0;i<n;i++)
	{
		scanf("%lf", &vector2[i]);
	}
	if (parallel(vector1, vector2, n)==1)
	{
		printf("Vectors are in parallel");
	}
	else
	{
		printf("Vectors are not in parallel");
	}
	return 0;
}
