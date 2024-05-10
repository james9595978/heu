#include<stdio.h>
#include<math.h>
int main(){
	int a,sum;
	scanf("%d",&a);
	if(a>=3&&a<=10){
		sum=pow(a,4)+pow(a+3,4)+pow(a+6,4)+pow(a+9,4)+pow(a+12,4)+pow(a+15,4);
		printf("%d",sum);
	} else{
		printf("error");
	}

	return 0;
}



