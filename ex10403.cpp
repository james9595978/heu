#include<stdio.h>
int main(){

int i=1,n;
float num=0;
float a[100];
a[0]=1;
a[1]=2;

scanf("%d",&n);
for(i=2;i<=n;i++){
	a[i]=a[i-1]+a[i-2];
}
for(int j=0;j<n;j++){
	num=a[j+1]/a[j]+num;
}
printf("%.2f",num);

	return 0;
}



