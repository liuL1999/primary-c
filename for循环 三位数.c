#include <stdio.h>
int main (void){
	int a;
	scanf("%d",&a);
	int i , j , k;
	int cnt = 0;
	for(i=a;i<=a+3;i++){
		for(j=a;j<=a+3;j++){
			for(k=a;k<=a+3;k++){
				if(i!=k&&i!=j&&j!=k){
					cnt++;
					printf("%d%d%d",i , j , k);
					if(cnt==6){
						printf("\n");
						cnt=0;
					}else{
						printf(" ");
					}
				}
			}
		}
	}
	return 0;
}

