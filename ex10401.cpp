#include <stdio.h>
int huiwenshu (int a){//�жϻ����� 
	
	int num=0,b;
	b=a;
	while(b>0){
		b=b/10;
		num++;
	}//�ж����������Ϊ����λ�� 
	int s=0;
	int m;
	m=a;
	for(int i=0;i<num;i++){
		s=s*10+m%10;
		m=m/10;
		
	}//���������� 
	if(s==a){
		return 1;
	}//����������������������ǻ����� 
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

