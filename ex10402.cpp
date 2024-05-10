#include<stdio.h>
int fun2(int num){
		int i;
		if(num<=1)
		return 0;
		for(i=2;i<num;i++){
			if(num%i==0)
			return 0;
		}
		return 1;
	}
int fun1(int m,int n){
	for(int i=m;i<=n-2;i++){
		if(fun2(i)&&fun2(i+2))
		printf("%d,%d\n",i,i+2);
	}
}	
int main (){
	int m,n;
scanf("%d,%d",&m,&n);
fun1(m,n);	
	
	return 0;
} 




