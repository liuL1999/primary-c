#include <stdio.h>
int main(){
	int x;
	int cnt = 0;//操作次数，计次
	for(x=1;cnt<50;x++){
		int isprime = 1;
		int i;
		for(i=2;i<x;i++){
			if(x%i==0) {
			isprime = 0;
			break;	
			}
	}
	if(isprime==1){
		cnt ++;
		printf("%d\n",x);
	}
		
	} 
	
    return 0;	
}
