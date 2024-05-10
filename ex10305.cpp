#include<stdio.h>
int main()
{
    int a[100];
    int sum=0;
    for(int i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<8;j++){
        if(a[j]==1){
            a[j]=0;
        }
        if(a[j]%2!=0){
            a[j]=0;
        }
    }
    for(int n=0;n<8;n++){
        sum=a[n]+sum;
        
    }printf("%d",sum);
    return 0;
}
