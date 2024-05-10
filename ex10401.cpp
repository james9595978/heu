#include <stdio.h>
int huiwenshu (int a){//判断回文数 
	
	int num=0,b;
	b=a;
	while(b>0){
		b=b/10;
		num++;
	}//判断输入的数字为多少位的 
	int s=0;
	int m;
	m=a;
	for(int i=0;i<num;i++){
		s=s*10+m%10;
		m=m/10;
		
	}//将数字逆序 
	if(s==a){
		return 1;
	}//如果正序数等于逆序数则是回文数 
	return 0;
}
	

int main() {
	int a,num=0;
	scanf("%d",&a);
	for(int i=0;i<=a;i++){
		if(huiwenshu(i)){
			printf("%d,",i);
			num++;
			if(num%10==0){
				printf("\n");
			}
		}
	}
	
	return 0;
}

