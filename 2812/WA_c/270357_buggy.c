#include<stdio.h>

int main()
{
    float a;
    scanf("%f,&a");
    if(a<0.0)
{	printf("%.4f is negative\n",a);}
	if(a==0.0)
{	printf("input is zero");}
	if(a>0.0)
{	printf("%.4f is positive\n",a);}
	return 0;
}