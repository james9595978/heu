#include<stdio.h>
int main()
{
	int a;//���� 
	scanf("%d",&a);
	float sum;//��� 
	if(a<=200)
	{
		sum=a*0.8;
	}
	else if(a>200&&a<=300)
	{
		sum=160+(a-200)*0.9;
	}
	else
	{
		sum=250+(a-300)*1;
	}
	if(sum<100)
	{
		sum=100;
	}
	if(sum>400)
	{
		sum=sum*1.15;
	}
	printf("%.2f",sum);
	return 0;
}
