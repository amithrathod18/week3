#include<stdio.h>
int main(){
	int i,t,s=0;
	printf("enter number");
	scanf("%d",&i);
	
	while(i!=0){
		t=i%10;
		i=i/10;
		s=s*10+t;
	}
	printf("%d",s);
	return 1;
}
